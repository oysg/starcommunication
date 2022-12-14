// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: starmsgproto.proto

#include "starmsgproto.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace StarMsgProto {
PROTOBUF_CONSTEXPR StarCmdMsg::StarCmdMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.strclientip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.strserverip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.strbody_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.magic_)*/0
  , /*decltype(_impl_.msgid_)*/0
  , /*decltype(_impl_.cmdmsg_)*/0
  , /*decltype(_impl_.msgtype_)*/0
  , /*decltype(_impl_.serviceid_)*/0
  , /*decltype(_impl_.retcode_)*/0
  , /*decltype(_impl_.nclientport_)*/0
  , /*decltype(_impl_.nserverport_)*/0
  , /*decltype(_impl_.msgheaderlength_)*/0
  , /*decltype(_impl_.msgbodylength_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StarCmdMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StarCmdMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StarCmdMsgDefaultTypeInternal() {}
  union {
    StarCmdMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StarCmdMsgDefaultTypeInternal _StarCmdMsg_default_instance_;
}  // namespace StarMsgProto
static ::_pb::Metadata file_level_metadata_starmsgproto_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_starmsgproto_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_starmsgproto_2eproto = nullptr;

const uint32_t TableStruct_starmsgproto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.magic_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.msgid_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.cmdmsg_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.msgtype_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.serviceid_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.retcode_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.strclientip_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.nclientport_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.strserverip_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.nserverport_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.msgheaderlength_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.msgbodylength_),
  PROTOBUF_FIELD_OFFSET(::StarMsgProto::StarCmdMsg, _impl_.strbody_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::StarMsgProto::StarCmdMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::StarMsgProto::_StarCmdMsg_default_instance_._instance,
};

const char descriptor_table_protodef_starmsgproto_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022starmsgproto.proto\022\014StarMsgProto\"\254\002\n\nS"
  "tarCmdMsg\022\r\n\005magic\030\001 \001(\005\022\017\n\007version\030\002 \001("
  "\t\022\r\n\005msgId\030\003 \001(\005\022\016\n\006cmdMsg\030\004 \001(\005\022&\n\007msgT"
  "ype\030\005 \001(\0162\025.StarMsgProto.MsgType\022\021\n\tserv"
  "iceId\030\006 \001(\005\022\017\n\007retCode\030\007 \001(\005\022\023\n\013strClien"
  "tIP\030\010 \001(\t\022\023\n\013nClientPort\030\t \001(\005\022\023\n\013strSer"
  "verIP\030\n \001(\t\022\023\n\013nServerPort\030\013 \001(\005\022\027\n\017msgH"
  "eaderLength\030\014 \001(\005\022\025\n\rmsgBodyLength\030\r \001(\005"
  "\022\017\n\007strBody\030\016 \001(\t*3\n\007MsgType\022\r\n\tBROADCAS"
  "T\020\000\022\013\n\007REQUEST\020\001\022\014\n\010RESPONSE\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_starmsgproto_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_starmsgproto_2eproto = {
    false, false, 398, descriptor_table_protodef_starmsgproto_2eproto,
    "starmsgproto.proto",
    &descriptor_table_starmsgproto_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_starmsgproto_2eproto::offsets,
    file_level_metadata_starmsgproto_2eproto, file_level_enum_descriptors_starmsgproto_2eproto,
    file_level_service_descriptors_starmsgproto_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_starmsgproto_2eproto_getter() {
  return &descriptor_table_starmsgproto_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_starmsgproto_2eproto(&descriptor_table_starmsgproto_2eproto);
namespace StarMsgProto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MsgType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_starmsgproto_2eproto);
  return file_level_enum_descriptors_starmsgproto_2eproto[0];
}
bool MsgType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class StarCmdMsg::_Internal {
 public:
};

StarCmdMsg::StarCmdMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:StarMsgProto.StarCmdMsg)
}
StarCmdMsg::StarCmdMsg(const StarCmdMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StarCmdMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){}
    , decltype(_impl_.strclientip_){}
    , decltype(_impl_.strserverip_){}
    , decltype(_impl_.strbody_){}
    , decltype(_impl_.magic_){}
    , decltype(_impl_.msgid_){}
    , decltype(_impl_.cmdmsg_){}
    , decltype(_impl_.msgtype_){}
    , decltype(_impl_.serviceid_){}
    , decltype(_impl_.retcode_){}
    , decltype(_impl_.nclientport_){}
    , decltype(_impl_.nserverport_){}
    , decltype(_impl_.msgheaderlength_){}
    , decltype(_impl_.msgbodylength_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_version().empty()) {
    _this->_impl_.version_.Set(from._internal_version(), 
      _this->GetArenaForAllocation());
  }
  _impl_.strclientip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strclientip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strclientip().empty()) {
    _this->_impl_.strclientip_.Set(from._internal_strclientip(), 
      _this->GetArenaForAllocation());
  }
  _impl_.strserverip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strserverip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strserverip().empty()) {
    _this->_impl_.strserverip_.Set(from._internal_strserverip(), 
      _this->GetArenaForAllocation());
  }
  _impl_.strbody_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strbody_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strbody().empty()) {
    _this->_impl_.strbody_.Set(from._internal_strbody(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.magic_, &from._impl_.magic_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.msgbodylength_) -
    reinterpret_cast<char*>(&_impl_.magic_)) + sizeof(_impl_.msgbodylength_));
  // @@protoc_insertion_point(copy_constructor:StarMsgProto.StarCmdMsg)
}

inline void StarCmdMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){}
    , decltype(_impl_.strclientip_){}
    , decltype(_impl_.strserverip_){}
    , decltype(_impl_.strbody_){}
    , decltype(_impl_.magic_){0}
    , decltype(_impl_.msgid_){0}
    , decltype(_impl_.cmdmsg_){0}
    , decltype(_impl_.msgtype_){0}
    , decltype(_impl_.serviceid_){0}
    , decltype(_impl_.retcode_){0}
    , decltype(_impl_.nclientport_){0}
    , decltype(_impl_.nserverport_){0}
    , decltype(_impl_.msgheaderlength_){0}
    , decltype(_impl_.msgbodylength_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.version_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.version_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.strclientip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strclientip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.strserverip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strserverip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.strbody_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strbody_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StarCmdMsg::~StarCmdMsg() {
  // @@protoc_insertion_point(destructor:StarMsgProto.StarCmdMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StarCmdMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.version_.Destroy();
  _impl_.strclientip_.Destroy();
  _impl_.strserverip_.Destroy();
  _impl_.strbody_.Destroy();
}

void StarCmdMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StarCmdMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:StarMsgProto.StarCmdMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.version_.ClearToEmpty();
  _impl_.strclientip_.ClearToEmpty();
  _impl_.strserverip_.ClearToEmpty();
  _impl_.strbody_.ClearToEmpty();
  ::memset(&_impl_.magic_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.msgbodylength_) -
      reinterpret_cast<char*>(&_impl_.magic_)) + sizeof(_impl_.msgbodylength_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StarCmdMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 magic = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.magic_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string version = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_version();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "StarMsgProto.StarCmdMsg.version"));
        } else
          goto handle_unusual;
        continue;
      // int32 msgId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.msgid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 cmdMsg = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.cmdmsg_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .StarMsgProto.MsgType msgType = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_msgtype(static_cast<::StarMsgProto::MsgType>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 serviceId = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.serviceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 retCode = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.retcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string strClientIP = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_strclientip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "StarMsgProto.StarCmdMsg.strClientIP"));
        } else
          goto handle_unusual;
        continue;
      // int32 nClientPort = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.nclientport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string strServerIP = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          auto str = _internal_mutable_strserverip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "StarMsgProto.StarCmdMsg.strServerIP"));
        } else
          goto handle_unusual;
        continue;
      // int32 nServerPort = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.nserverport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 msgHeaderLength = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _impl_.msgheaderlength_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 msgBodyLength = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _impl_.msgbodylength_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string strBody = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 114)) {
          auto str = _internal_mutable_strbody();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "StarMsgProto.StarCmdMsg.strBody"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StarCmdMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:StarMsgProto.StarCmdMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 magic = 1;
  if (this->_internal_magic() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_magic(), target);
  }

  // string version = 2;
  if (!this->_internal_version().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version().data(), static_cast<int>(this->_internal_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "StarMsgProto.StarCmdMsg.version");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_version(), target);
  }

  // int32 msgId = 3;
  if (this->_internal_msgid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_msgid(), target);
  }

  // int32 cmdMsg = 4;
  if (this->_internal_cmdmsg() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_cmdmsg(), target);
  }

  // .StarMsgProto.MsgType msgType = 5;
  if (this->_internal_msgtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_msgtype(), target);
  }

  // int32 serviceId = 6;
  if (this->_internal_serviceid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_serviceid(), target);
  }

  // int32 retCode = 7;
  if (this->_internal_retcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(7, this->_internal_retcode(), target);
  }

  // string strClientIP = 8;
  if (!this->_internal_strclientip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strclientip().data(), static_cast<int>(this->_internal_strclientip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "StarMsgProto.StarCmdMsg.strClientIP");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_strclientip(), target);
  }

  // int32 nClientPort = 9;
  if (this->_internal_nclientport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(9, this->_internal_nclientport(), target);
  }

  // string strServerIP = 10;
  if (!this->_internal_strserverip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strserverip().data(), static_cast<int>(this->_internal_strserverip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "StarMsgProto.StarCmdMsg.strServerIP");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_strserverip(), target);
  }

  // int32 nServerPort = 11;
  if (this->_internal_nserverport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(11, this->_internal_nserverport(), target);
  }

  // int32 msgHeaderLength = 12;
  if (this->_internal_msgheaderlength() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(12, this->_internal_msgheaderlength(), target);
  }

  // int32 msgBodyLength = 13;
  if (this->_internal_msgbodylength() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(13, this->_internal_msgbodylength(), target);
  }

  // string strBody = 14;
  if (!this->_internal_strbody().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strbody().data(), static_cast<int>(this->_internal_strbody().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "StarMsgProto.StarCmdMsg.strBody");
    target = stream->WriteStringMaybeAliased(
        14, this->_internal_strbody(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:StarMsgProto.StarCmdMsg)
  return target;
}

size_t StarCmdMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:StarMsgProto.StarCmdMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string version = 2;
  if (!this->_internal_version().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version());
  }

  // string strClientIP = 8;
  if (!this->_internal_strclientip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strclientip());
  }

  // string strServerIP = 10;
  if (!this->_internal_strserverip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strserverip());
  }

  // string strBody = 14;
  if (!this->_internal_strbody().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strbody());
  }

  // int32 magic = 1;
  if (this->_internal_magic() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_magic());
  }

  // int32 msgId = 3;
  if (this->_internal_msgid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgid());
  }

  // int32 cmdMsg = 4;
  if (this->_internal_cmdmsg() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_cmdmsg());
  }

  // .StarMsgProto.MsgType msgType = 5;
  if (this->_internal_msgtype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_msgtype());
  }

  // int32 serviceId = 6;
  if (this->_internal_serviceid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_serviceid());
  }

  // int32 retCode = 7;
  if (this->_internal_retcode() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_retcode());
  }

  // int32 nClientPort = 9;
  if (this->_internal_nclientport() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_nclientport());
  }

  // int32 nServerPort = 11;
  if (this->_internal_nserverport() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_nserverport());
  }

  // int32 msgHeaderLength = 12;
  if (this->_internal_msgheaderlength() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgheaderlength());
  }

  // int32 msgBodyLength = 13;
  if (this->_internal_msgbodylength() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgbodylength());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StarCmdMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StarCmdMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StarCmdMsg::GetClassData() const { return &_class_data_; }


void StarCmdMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StarCmdMsg*>(&to_msg);
  auto& from = static_cast<const StarCmdMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:StarMsgProto.StarCmdMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_version().empty()) {
    _this->_internal_set_version(from._internal_version());
  }
  if (!from._internal_strclientip().empty()) {
    _this->_internal_set_strclientip(from._internal_strclientip());
  }
  if (!from._internal_strserverip().empty()) {
    _this->_internal_set_strserverip(from._internal_strserverip());
  }
  if (!from._internal_strbody().empty()) {
    _this->_internal_set_strbody(from._internal_strbody());
  }
  if (from._internal_magic() != 0) {
    _this->_internal_set_magic(from._internal_magic());
  }
  if (from._internal_msgid() != 0) {
    _this->_internal_set_msgid(from._internal_msgid());
  }
  if (from._internal_cmdmsg() != 0) {
    _this->_internal_set_cmdmsg(from._internal_cmdmsg());
  }
  if (from._internal_msgtype() != 0) {
    _this->_internal_set_msgtype(from._internal_msgtype());
  }
  if (from._internal_serviceid() != 0) {
    _this->_internal_set_serviceid(from._internal_serviceid());
  }
  if (from._internal_retcode() != 0) {
    _this->_internal_set_retcode(from._internal_retcode());
  }
  if (from._internal_nclientport() != 0) {
    _this->_internal_set_nclientport(from._internal_nclientport());
  }
  if (from._internal_nserverport() != 0) {
    _this->_internal_set_nserverport(from._internal_nserverport());
  }
  if (from._internal_msgheaderlength() != 0) {
    _this->_internal_set_msgheaderlength(from._internal_msgheaderlength());
  }
  if (from._internal_msgbodylength() != 0) {
    _this->_internal_set_msgbodylength(from._internal_msgbodylength());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StarCmdMsg::CopyFrom(const StarCmdMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:StarMsgProto.StarCmdMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StarCmdMsg::IsInitialized() const {
  return true;
}

void StarCmdMsg::InternalSwap(StarCmdMsg* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.version_, lhs_arena,
      &other->_impl_.version_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strclientip_, lhs_arena,
      &other->_impl_.strclientip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strserverip_, lhs_arena,
      &other->_impl_.strserverip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strbody_, lhs_arena,
      &other->_impl_.strbody_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StarCmdMsg, _impl_.msgbodylength_)
      + sizeof(StarCmdMsg::_impl_.msgbodylength_)
      - PROTOBUF_FIELD_OFFSET(StarCmdMsg, _impl_.magic_)>(
          reinterpret_cast<char*>(&_impl_.magic_),
          reinterpret_cast<char*>(&other->_impl_.magic_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StarCmdMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_starmsgproto_2eproto_getter, &descriptor_table_starmsgproto_2eproto_once,
      file_level_metadata_starmsgproto_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace StarMsgProto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::StarMsgProto::StarCmdMsg*
Arena::CreateMaybeMessage< ::StarMsgProto::StarCmdMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::StarMsgProto::StarCmdMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
