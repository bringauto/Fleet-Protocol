# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: InternalProtocol.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x16InternalProtocol.proto\x12\x10InternalProtocol\"\x91\x01\n\x0eInternalClient\x12\x38\n\rdeviceConnect\x18\x01 \x01(\x0b\x32\x1f.InternalProtocol.DeviceConnectH\x00\x12\x36\n\x0c\x64\x65viceStatus\x18\x02 \x01(\x0b\x32\x1e.InternalProtocol.DeviceStatusH\x00\x42\r\n\x0bMessageType\"\xa3\x01\n\x0eInternalServer\x12H\n\x15\x64\x65viceConnectResponse\x18\x01 \x01(\x0b\x32\'.InternalProtocol.DeviceConnectResponseH\x00\x12\x38\n\rdeviceCommand\x18\x02 \x01(\x0b\x32\x1f.InternalProtocol.DeviceCommandH\x00\x42\r\n\x0bMessageType\"9\n\rDeviceConnect\x12(\n\x06\x64\x65vice\x18\x01 \x01(\x0b\x32\x18.InternalProtocol.Device\"\x98\x02\n\x15\x44\x65viceConnectResponse\x12J\n\x0cresponseType\x18\x01 \x01(\x0e\x32\x34.InternalProtocol.DeviceConnectResponse.ResponseType\x12(\n\x06\x64\x65vice\x18\x02 \x01(\x0b\x32\x18.InternalProtocol.Device\"\x88\x01\n\x0cResponseType\x12\x06\n\x02OK\x10\x00\x12\x15\n\x11\x41LREADY_CONNECTED\x10\x01\x12\x18\n\x14MODULE_NOT_SUPPORTED\x10\x02\x12\x18\n\x14\x44\x45VICE_NOT_SUPPORTED\x10\x03\x12%\n!HIGHER_PRIORITY_ALREADY_CONNECTED\x10\x04\"L\n\x0c\x44\x65viceStatus\x12(\n\x06\x64\x65vice\x18\x01 \x01(\x0b\x32\x18.InternalProtocol.Device\x12\x12\n\nstatusData\x18\x02 \x01(\x0c\"N\n\rDeviceCommand\x12(\n\x06\x64\x65vice\x18\x01 \x01(\x0b\x32\x18.InternalProtocol.Device\x12\x13\n\x0b\x63ommandData\x18\x02 \x01(\x0c\"\xe5\x01\n\x06\x44\x65vice\x12/\n\x06module\x18\x01 \x01(\x0e\x32\x1f.InternalProtocol.Device.Module\x12\x12\n\ndeviceType\x18\x02 \x01(\r\x12\x12\n\ndeviceRole\x18\x03 \x01(\t\x12\x12\n\ndeviceName\x18\x04 \x01(\t\x12\x10\n\x08priority\x18\x05 \x01(\r\"\\\n\x06Module\x12\x13\n\x0fRESERVED_MODULE\x10\x00\x12\x12\n\x0eMISSION_MODULE\x10\x01\x12\r\n\tIO_MODULE\x10\x02\x12\x13\n\x0e\x45XAMPLE_MODULE\x10\xe8\x07\"\x05\x08\x03\x10\xe7\x07\x42>Z!../internal/pkg/ba_proto;ba_proto\xaa\x02\x18Google.Protobuf.ba_protob\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'InternalProtocol_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'Z!../internal/pkg/ba_proto;ba_proto\252\002\030Google.Protobuf.ba_proto'
  _INTERNALCLIENT._serialized_start=45
  _INTERNALCLIENT._serialized_end=190
  _INTERNALSERVER._serialized_start=193
  _INTERNALSERVER._serialized_end=356
  _DEVICECONNECT._serialized_start=358
  _DEVICECONNECT._serialized_end=415
  _DEVICECONNECTRESPONSE._serialized_start=418
  _DEVICECONNECTRESPONSE._serialized_end=698
  _DEVICECONNECTRESPONSE_RESPONSETYPE._serialized_start=562
  _DEVICECONNECTRESPONSE_RESPONSETYPE._serialized_end=698
  _DEVICESTATUS._serialized_start=700
  _DEVICESTATUS._serialized_end=776
  _DEVICECOMMAND._serialized_start=778
  _DEVICECOMMAND._serialized_end=856
  _DEVICE._serialized_start=859
  _DEVICE._serialized_end=1088
  _DEVICE_MODULE._serialized_start=996
  _DEVICE_MODULE._serialized_end=1088
# @@protoc_insertion_point(module_scope)
