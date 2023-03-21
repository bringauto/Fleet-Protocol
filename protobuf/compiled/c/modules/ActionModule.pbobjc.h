// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/ActionModule.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SystemLoggerStatus_Verbosity

typedef GPB_ENUM(SystemLoggerStatus_Verbosity) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SystemLoggerStatus_Verbosity_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SystemLoggerStatus_Verbosity_Debug = 0,
  SystemLoggerStatus_Verbosity_Info = 5,
  SystemLoggerStatus_Verbosity_Warning = 10,
  SystemLoggerStatus_Verbosity_Error = 15,
};

GPBEnumDescriptor *SystemLoggerStatus_Verbosity_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SystemLoggerStatus_Verbosity_IsValidValue(int32_t value);

#pragma mark - Enum SystemLoggerCommand_Command

typedef GPB_ENUM(SystemLoggerCommand_Command) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SystemLoggerCommand_Command_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SystemLoggerCommand_Command_Log = 0,
};

GPBEnumDescriptor *SystemLoggerCommand_Command_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SystemLoggerCommand_Command_IsValidValue(int32_t value);

#pragma mark - Enum GreenButtonCommand_Command

typedef GPB_ENUM(GreenButtonCommand_Command) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GreenButtonCommand_Command_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  GreenButtonCommand_Command_Press = 0,
};

GPBEnumDescriptor *GreenButtonCommand_Command_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GreenButtonCommand_Command_IsValidValue(int32_t value);

#pragma mark - Enum RedButtonCommand_Command

typedef GPB_ENUM(RedButtonCommand_Command) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  RedButtonCommand_Command_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  RedButtonCommand_Command_Press = 0,
};

GPBEnumDescriptor *RedButtonCommand_Command_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL RedButtonCommand_Command_IsValidValue(int32_t value);

#pragma mark - Enum WatchdogCommand_Command

typedef GPB_ENUM(WatchdogCommand_Command) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  WatchdogCommand_Command_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  WatchdogCommand_Command_Reset = 0,
};

GPBEnumDescriptor *WatchdogCommand_Command_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL WatchdogCommand_Command_IsValidValue(int32_t value);

#pragma mark - ActionModuleRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
GPB_FINAL @interface ActionModuleRoot : GPBRootObject
@end

#pragma mark - SystemLoggerStatus

typedef GPB_ENUM(SystemLoggerStatus_FieldNumber) {
  SystemLoggerStatus_FieldNumber_SourceDevice = 1,
  SystemLoggerStatus_FieldNumber_LogsArray = 2,
  SystemLoggerStatus_FieldNumber_Verbosity = 3,
};

/**
 * ///////////////////////////////
 **/
GPB_FINAL @interface SystemLoggerStatus : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *sourceDevice;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *logsArray;
/** The number of items in @c logsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger logsArray_Count;

@property(nonatomic, readwrite) SystemLoggerStatus_Verbosity verbosity;

@end

/**
 * Fetches the raw value of a @c SystemLoggerStatus's @c verbosity property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SystemLoggerStatus_Verbosity_RawValue(SystemLoggerStatus *message);
/**
 * Sets the raw value of an @c SystemLoggerStatus's @c verbosity property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSystemLoggerStatus_Verbosity_RawValue(SystemLoggerStatus *message, int32_t value);

#pragma mark - GreenButtonStatus

typedef GPB_ENUM(GreenButtonStatus_FieldNumber) {
  GreenButtonStatus_FieldNumber_IsPressed = 1,
  GreenButtonStatus_FieldNumber_IsAlive = 2,
};

GPB_FINAL @interface GreenButtonStatus : GPBMessage

@property(nonatomic, readwrite) BOOL isPressed;

@property(nonatomic, readwrite) BOOL isAlive;

@end

#pragma mark - RedButtonStatus

typedef GPB_ENUM(RedButtonStatus_FieldNumber) {
  RedButtonStatus_FieldNumber_IsPressed = 1,
};

GPB_FINAL @interface RedButtonStatus : GPBMessage

@property(nonatomic, readwrite) BOOL isPressed;

@end

#pragma mark - WatchdogStatus

typedef GPB_ENUM(WatchdogStatus_FieldNumber) {
  WatchdogStatus_FieldNumber_IsAlive = 1,
  WatchdogStatus_FieldNumber_State = 2,
};

GPB_FINAL @interface WatchdogStatus : GPBMessage

@property(nonatomic, readwrite) BOOL isAlive;

@property(nonatomic, readwrite, copy, null_resettable) NSString *state;

@end

#pragma mark - SystemLoggerCommand

typedef GPB_ENUM(SystemLoggerCommand_FieldNumber) {
  SystemLoggerCommand_FieldNumber_Command = 1,
};

GPB_FINAL @interface SystemLoggerCommand : GPBMessage

@property(nonatomic, readwrite) SystemLoggerCommand_Command command;

@end

/**
 * Fetches the raw value of a @c SystemLoggerCommand's @c command property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SystemLoggerCommand_Command_RawValue(SystemLoggerCommand *message);
/**
 * Sets the raw value of an @c SystemLoggerCommand's @c command property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSystemLoggerCommand_Command_RawValue(SystemLoggerCommand *message, int32_t value);

#pragma mark - GreenButtonCommand

typedef GPB_ENUM(GreenButtonCommand_FieldNumber) {
  GreenButtonCommand_FieldNumber_Command = 1,
};

GPB_FINAL @interface GreenButtonCommand : GPBMessage

@property(nonatomic, readwrite) GreenButtonCommand_Command command;

@end

/**
 * Fetches the raw value of a @c GreenButtonCommand's @c command property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GreenButtonCommand_Command_RawValue(GreenButtonCommand *message);
/**
 * Sets the raw value of an @c GreenButtonCommand's @c command property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGreenButtonCommand_Command_RawValue(GreenButtonCommand *message, int32_t value);

#pragma mark - RedButtonCommand

typedef GPB_ENUM(RedButtonCommand_FieldNumber) {
  RedButtonCommand_FieldNumber_Command = 1,
};

GPB_FINAL @interface RedButtonCommand : GPBMessage

@property(nonatomic, readwrite) RedButtonCommand_Command command;

@end

/**
 * Fetches the raw value of a @c RedButtonCommand's @c command property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t RedButtonCommand_Command_RawValue(RedButtonCommand *message);
/**
 * Sets the raw value of an @c RedButtonCommand's @c command property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetRedButtonCommand_Command_RawValue(RedButtonCommand *message, int32_t value);

#pragma mark - WatchdogCommand

typedef GPB_ENUM(WatchdogCommand_FieldNumber) {
  WatchdogCommand_FieldNumber_Command = 1,
};

GPB_FINAL @interface WatchdogCommand : GPBMessage

@property(nonatomic, readwrite) WatchdogCommand_Command command;

@end

/**
 * Fetches the raw value of a @c WatchdogCommand's @c command property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t WatchdogCommand_Command_RawValue(WatchdogCommand *message);
/**
 * Sets the raw value of an @c WatchdogCommand's @c command property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetWatchdogCommand_Command_RawValue(WatchdogCommand *message, int32_t value);

#pragma mark - SystemLoggerError

typedef GPB_ENUM(SystemLoggerError_FieldNumber) {
  SystemLoggerError_FieldNumber_ErrorMessage = 1,
};

GPB_FINAL @interface SystemLoggerError : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

#pragma mark - GreenButtonError

typedef GPB_ENUM(GreenButtonError_FieldNumber) {
  GreenButtonError_FieldNumber_ErrorMessage = 1,
};

GPB_FINAL @interface GreenButtonError : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

#pragma mark - RedButtonError

typedef GPB_ENUM(RedButtonError_FieldNumber) {
  RedButtonError_FieldNumber_ErrorMessage = 1,
};

GPB_FINAL @interface RedButtonError : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

#pragma mark - WatchdogError

typedef GPB_ENUM(WatchdogError_FieldNumber) {
  WatchdogError_FieldNumber_ErrorMessage = 1,
};

GPB_FINAL @interface WatchdogError : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *errorMessage;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
