#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <memory_management.h>
#include <general_error_codes.h>

/**
 * @file
 * @brief Interface implemented by module maintainers
 *
 * @section Module Manager
 *
 * @subsection Aggregator summary
 * Aggregator functionality aggregates statuses into one, single status messages aggregate_status function.
 * Once the status is ready to be published send_status_condition returns OK and the status
 * generated by next call of status_Aggregator is send.
 *
*/

/**
 * @subsection API
*/

enum mm_error_codes {
	CONDITION_NOT_MET = RESERVED -1,
	WRONG_FORMAT = RESERVED -2
};

/**
 * @brief Determine whether condition for sending new status was met.
 * 
 * @param current_status status data currently present in aggregator in binary form
 * @param new_status status data sent by client in binary form
 * @param device_type type of device which sent status data
 * 
 * @return OK if condition met.
 * @return CONDITION_NOT_MET if condition was not met
 * @return WRONG_FORMAT if wrong status format
 * @return NOT_OK if other error occurred
*/
int send_status_condition(const struct buffer current_status, const struct buffer new_status, int device_type);

/**
 * @brief generate new command based on current status and command and new status
 *
 * @param generated_command buffer for storing newly generated command. Look at memory management section
 * @param new_status newly received status
 * @param current_status current status present in aggregator
 * @param current_command current command, that will be updated by the command this function generates
 * @param device_type type of device
 *
 * @return OK if command generated successfully
 * @return WRONG_FORMAT if a message has a bad format
 * @return NOT_OK if other error occurred
*/
int generate_command(struct buffer *generated_command, const struct buffer new_status, const struct buffer current_status, const struct buffer current_command, int device_type);

/**
 * @brief aggregate current status and new status
 *
 * @param aggregated_status buffer for storing newly generated status. Look at memory_management section
 * @param current_status current status present in the aggregator
 * @param new_status newly received status
 * @param device_type type of device
 *
 * @return OK if status aggregated successfully
 * @return WRONG_FORMAT if a status has a bad format
 * @return NOT_OK if other error occurred
*/
int aggregate_status(struct buffer *aggregated_status, const struct buffer current_status, const struct buffer new_status, int device_type);

/**
 * @brief aggregate error message
 *
 * @param error_message buffer for storing newly generated error message. Look at memory_management section
 * @param current_error_message current error message present in the aggregator
 * @param status newly received status
 * @param device_type type of device
 *
 * @return OK if error message aggregated successfully
 * @return WRONG_FORMAT if a status or error message has a bad format
 * @return NOT_OK if other error occurred
 */
int aggregate_error(struct buffer *error_message, const struct buffer current_error_message, const struct buffer status, int device_type);

/**
 * @brief generate default command
 *
 * @param default_command buffer for storing default command. Look at memory_management section
 * @param device_type type of device
 *
 * @return OK if default command generated successfully
 * @return WRONG_FORMAT if default command has a bad format
 * @return NOT_OK if other error occurred
*/
int generate_first_command(struct buffer *default_command, int device_type);

/**
 * @short Get number of the module
 *
 * Serves for identification of module implementation.
 * The number corresponds with the module number from InternalProtocol.proto protobuf file.
 *
 * @return module number
 */
int get_module_number();

/**
 * @brief Control whether buffer contains valid data
 *
 * @param status status data sent by client in binary form
 * @param device_type type of device
 * @return OK if status data are valid
 *         NOT_OK if status data are invalid
 */
int status_data_valid(const struct buffer status, int device_type);

/**
 * @brief Control whether buffer contains valid data
 *
 * @param command command data sent by server in binary form
 * @param device_type type of device
 * @return OK if command data are valid
 *         NOT_OK if command data are invalid
 */
int command_data_valid(const struct buffer command, int device_type);

/**
 * @short Check if device is supported and registered
 *
 * @param device
 *
 * @return OK if the device type is valid
 * @return NOT_OK if the device type is not supported
 */
int is_device_type_supported(int device_type);

#ifdef __cplusplus
}
#endif