# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: modules/CarAccessoryModule.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n modules/CarAccessoryModule.proto\x12\x12\x43\x61rAccessoryModule\"!\n\x0c\x42uttonStatus\x12\x11\n\tisPressed\x18\x01 \x01(\x08\"a\n\rButtonCommand\x12:\n\x07\x63ommand\x18\x01 \x01(\x0e\x32).CarAccessoryModule.ButtonCommand.Command\"\x14\n\x07\x43ommand\x12\t\n\x05PRESS\x10\x00\"!\n\x0b\x42uttonError\x12\x12\n\npressCount\x18\x01 \x01(\rB>Z!../internal/pkg/ba_proto;ba_proto\xaa\x02\x18Google.Protobuf.ba_protob\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'modules.CarAccessoryModule_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'Z!../internal/pkg/ba_proto;ba_proto\252\002\030Google.Protobuf.ba_proto'
  _BUTTONSTATUS._serialized_start=56
  _BUTTONSTATUS._serialized_end=89
  _BUTTONCOMMAND._serialized_start=91
  _BUTTONCOMMAND._serialized_end=188
  _BUTTONCOMMAND_COMMAND._serialized_start=168
  _BUTTONCOMMAND_COMMAND._serialized_end=188
  _BUTTONERROR._serialized_start=190
  _BUTTONERROR._serialized_end=223
# @@protoc_insertion_point(module_scope)
