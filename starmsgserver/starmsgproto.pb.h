// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: starmsgproto.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_starmsgproto_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_starmsgproto_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_starmsgproto_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_starmsgproto_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_starmsgproto_2eproto;
namespace StarMsgProto {
class StarCmdMsg;
struct StarCmdMsgDefaultTypeInternal;
extern StarCmdMsgDefaultTypeInternal _StarCmdMsg_default_instance_;
}  // namespace StarMsgProto
PROTOBUF_NAMESPACE_OPEN
template<> ::StarMsgProto::StarCmdMsg* Arena::CreateMaybeMessage<::StarMsgProto::StarCmdMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace StarMsgProto {

enum MsgType : int {
  BROADCAST = 0,
  REQUEST = 1,
  RESPONSE = 2,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool MsgType_IsValid(int value);
constexpr MsgType MsgType_MIN = BROADCAST;
constexpr MsgType MsgType_MAX = RESPONSE;
constexpr int MsgType_ARRAYSIZE = MsgType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MsgType_descriptor();
template<typename T>
inline const std::string& MsgType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MsgType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MsgType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MsgType_descriptor(), enum_t_value);
}
inline bool MsgType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, MsgType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MsgType>(
    MsgType_descriptor(), name, value);
}
// ===================================================================

class StarCmdMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:StarMsgProto.StarCmdMsg) */ {
 public:
  inline StarCmdMsg() : StarCmdMsg(nullptr) {}
  ~StarCmdMsg() override;
  explicit PROTOBUF_CONSTEXPR StarCmdMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StarCmdMsg(const StarCmdMsg& from);
  StarCmdMsg(StarCmdMsg&& from) noexcept
    : StarCmdMsg() {
    *this = ::std::move(from);
  }

  inline StarCmdMsg& operator=(const StarCmdMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline StarCmdMsg& operator=(StarCmdMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StarCmdMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const StarCmdMsg* internal_default_instance() {
    return reinterpret_cast<const StarCmdMsg*>(
               &_StarCmdMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StarCmdMsg& a, StarCmdMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(StarCmdMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StarCmdMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StarCmdMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StarCmdMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StarCmdMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StarCmdMsg& from) {
    StarCmdMsg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StarCmdMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "StarMsgProto.StarCmdMsg";
  }
  protected:
  explicit StarCmdMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 2,
    kStrClientIPFieldNumber = 8,
    kStrServerIPFieldNumber = 10,
    kStrBodyFieldNumber = 14,
    kMagicFieldNumber = 1,
    kMsgIdFieldNumber = 3,
    kCmdMsgFieldNumber = 4,
    kMsgTypeFieldNumber = 5,
    kServiceIdFieldNumber = 6,
    kRetCodeFieldNumber = 7,
    kNClientPortFieldNumber = 9,
    kNServerPortFieldNumber = 11,
    kMsgHeaderLengthFieldNumber = 12,
    kMsgBodyLengthFieldNumber = 13,
  };
  // string version = 2;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_NODISCARD std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // string strClientIP = 8;
  void clear_strclientip();
  const std::string& strclientip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_strclientip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_strclientip();
  PROTOBUF_NODISCARD std::string* release_strclientip();
  void set_allocated_strclientip(std::string* strclientip);
  private:
  const std::string& _internal_strclientip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_strclientip(const std::string& value);
  std::string* _internal_mutable_strclientip();
  public:

  // string strServerIP = 10;
  void clear_strserverip();
  const std::string& strserverip() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_strserverip(ArgT0&& arg0, ArgT... args);
  std::string* mutable_strserverip();
  PROTOBUF_NODISCARD std::string* release_strserverip();
  void set_allocated_strserverip(std::string* strserverip);
  private:
  const std::string& _internal_strserverip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_strserverip(const std::string& value);
  std::string* _internal_mutable_strserverip();
  public:

  // string strBody = 14;
  void clear_strbody();
  const std::string& strbody() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_strbody(ArgT0&& arg0, ArgT... args);
  std::string* mutable_strbody();
  PROTOBUF_NODISCARD std::string* release_strbody();
  void set_allocated_strbody(std::string* strbody);
  private:
  const std::string& _internal_strbody() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_strbody(const std::string& value);
  std::string* _internal_mutable_strbody();
  public:

  // int32 magic = 1;
  void clear_magic();
  int32_t magic() const;
  void set_magic(int32_t value);
  private:
  int32_t _internal_magic() const;
  void _internal_set_magic(int32_t value);
  public:

  // int32 msgId = 3;
  void clear_msgid();
  int32_t msgid() const;
  void set_msgid(int32_t value);
  private:
  int32_t _internal_msgid() const;
  void _internal_set_msgid(int32_t value);
  public:

  // int32 cmdMsg = 4;
  void clear_cmdmsg();
  int32_t cmdmsg() const;
  void set_cmdmsg(int32_t value);
  private:
  int32_t _internal_cmdmsg() const;
  void _internal_set_cmdmsg(int32_t value);
  public:

  // .StarMsgProto.MsgType msgType = 5;
  void clear_msgtype();
  ::StarMsgProto::MsgType msgtype() const;
  void set_msgtype(::StarMsgProto::MsgType value);
  private:
  ::StarMsgProto::MsgType _internal_msgtype() const;
  void _internal_set_msgtype(::StarMsgProto::MsgType value);
  public:

  // int32 serviceId = 6;
  void clear_serviceid();
  int32_t serviceid() const;
  void set_serviceid(int32_t value);
  private:
  int32_t _internal_serviceid() const;
  void _internal_set_serviceid(int32_t value);
  public:

  // int32 retCode = 7;
  void clear_retcode();
  int32_t retcode() const;
  void set_retcode(int32_t value);
  private:
  int32_t _internal_retcode() const;
  void _internal_set_retcode(int32_t value);
  public:

  // int32 nClientPort = 9;
  void clear_nclientport();
  int32_t nclientport() const;
  void set_nclientport(int32_t value);
  private:
  int32_t _internal_nclientport() const;
  void _internal_set_nclientport(int32_t value);
  public:

  // int32 nServerPort = 11;
  void clear_nserverport();
  int32_t nserverport() const;
  void set_nserverport(int32_t value);
  private:
  int32_t _internal_nserverport() const;
  void _internal_set_nserverport(int32_t value);
  public:

  // int32 msgHeaderLength = 12;
  void clear_msgheaderlength();
  int32_t msgheaderlength() const;
  void set_msgheaderlength(int32_t value);
  private:
  int32_t _internal_msgheaderlength() const;
  void _internal_set_msgheaderlength(int32_t value);
  public:

  // int32 msgBodyLength = 13;
  void clear_msgbodylength();
  int32_t msgbodylength() const;
  void set_msgbodylength(int32_t value);
  private:
  int32_t _internal_msgbodylength() const;
  void _internal_set_msgbodylength(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:StarMsgProto.StarCmdMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strclientip_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strserverip_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strbody_;
    int32_t magic_;
    int32_t msgid_;
    int32_t cmdmsg_;
    int msgtype_;
    int32_t serviceid_;
    int32_t retcode_;
    int32_t nclientport_;
    int32_t nserverport_;
    int32_t msgheaderlength_;
    int32_t msgbodylength_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_starmsgproto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StarCmdMsg

// int32 magic = 1;
inline void StarCmdMsg::clear_magic() {
  _impl_.magic_ = 0;
}
inline int32_t StarCmdMsg::_internal_magic() const {
  return _impl_.magic_;
}
inline int32_t StarCmdMsg::magic() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.magic)
  return _internal_magic();
}
inline void StarCmdMsg::_internal_set_magic(int32_t value) {
  
  _impl_.magic_ = value;
}
inline void StarCmdMsg::set_magic(int32_t value) {
  _internal_set_magic(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.magic)
}

// string version = 2;
inline void StarCmdMsg::clear_version() {
  _impl_.version_.ClearToEmpty();
}
inline const std::string& StarCmdMsg::version() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StarCmdMsg::set_version(ArgT0&& arg0, ArgT... args) {
 
 _impl_.version_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.version)
}
inline std::string* StarCmdMsg::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:StarMsgProto.StarCmdMsg.version)
  return _s;
}
inline const std::string& StarCmdMsg::_internal_version() const {
  return _impl_.version_.Get();
}
inline void StarCmdMsg::_internal_set_version(const std::string& value) {
  
  _impl_.version_.Set(value, GetArenaForAllocation());
}
inline std::string* StarCmdMsg::_internal_mutable_version() {
  
  return _impl_.version_.Mutable(GetArenaForAllocation());
}
inline std::string* StarCmdMsg::release_version() {
  // @@protoc_insertion_point(field_release:StarMsgProto.StarCmdMsg.version)
  return _impl_.version_.Release();
}
inline void StarCmdMsg::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  _impl_.version_.SetAllocated(version, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.version_.IsDefault()) {
    _impl_.version_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:StarMsgProto.StarCmdMsg.version)
}

// int32 msgId = 3;
inline void StarCmdMsg::clear_msgid() {
  _impl_.msgid_ = 0;
}
inline int32_t StarCmdMsg::_internal_msgid() const {
  return _impl_.msgid_;
}
inline int32_t StarCmdMsg::msgid() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.msgId)
  return _internal_msgid();
}
inline void StarCmdMsg::_internal_set_msgid(int32_t value) {
  
  _impl_.msgid_ = value;
}
inline void StarCmdMsg::set_msgid(int32_t value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.msgId)
}

// int32 cmdMsg = 4;
inline void StarCmdMsg::clear_cmdmsg() {
  _impl_.cmdmsg_ = 0;
}
inline int32_t StarCmdMsg::_internal_cmdmsg() const {
  return _impl_.cmdmsg_;
}
inline int32_t StarCmdMsg::cmdmsg() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.cmdMsg)
  return _internal_cmdmsg();
}
inline void StarCmdMsg::_internal_set_cmdmsg(int32_t value) {
  
  _impl_.cmdmsg_ = value;
}
inline void StarCmdMsg::set_cmdmsg(int32_t value) {
  _internal_set_cmdmsg(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.cmdMsg)
}

// .StarMsgProto.MsgType msgType = 5;
inline void StarCmdMsg::clear_msgtype() {
  _impl_.msgtype_ = 0;
}
inline ::StarMsgProto::MsgType StarCmdMsg::_internal_msgtype() const {
  return static_cast< ::StarMsgProto::MsgType >(_impl_.msgtype_);
}
inline ::StarMsgProto::MsgType StarCmdMsg::msgtype() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.msgType)
  return _internal_msgtype();
}
inline void StarCmdMsg::_internal_set_msgtype(::StarMsgProto::MsgType value) {
  
  _impl_.msgtype_ = value;
}
inline void StarCmdMsg::set_msgtype(::StarMsgProto::MsgType value) {
  _internal_set_msgtype(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.msgType)
}

// int32 serviceId = 6;
inline void StarCmdMsg::clear_serviceid() {
  _impl_.serviceid_ = 0;
}
inline int32_t StarCmdMsg::_internal_serviceid() const {
  return _impl_.serviceid_;
}
inline int32_t StarCmdMsg::serviceid() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.serviceId)
  return _internal_serviceid();
}
inline void StarCmdMsg::_internal_set_serviceid(int32_t value) {
  
  _impl_.serviceid_ = value;
}
inline void StarCmdMsg::set_serviceid(int32_t value) {
  _internal_set_serviceid(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.serviceId)
}

// int32 retCode = 7;
inline void StarCmdMsg::clear_retcode() {
  _impl_.retcode_ = 0;
}
inline int32_t StarCmdMsg::_internal_retcode() const {
  return _impl_.retcode_;
}
inline int32_t StarCmdMsg::retcode() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.retCode)
  return _internal_retcode();
}
inline void StarCmdMsg::_internal_set_retcode(int32_t value) {
  
  _impl_.retcode_ = value;
}
inline void StarCmdMsg::set_retcode(int32_t value) {
  _internal_set_retcode(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.retCode)
}

// string strClientIP = 8;
inline void StarCmdMsg::clear_strclientip() {
  _impl_.strclientip_.ClearToEmpty();
}
inline const std::string& StarCmdMsg::strclientip() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.strClientIP)
  return _internal_strclientip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StarCmdMsg::set_strclientip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strclientip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.strClientIP)
}
inline std::string* StarCmdMsg::mutable_strclientip() {
  std::string* _s = _internal_mutable_strclientip();
  // @@protoc_insertion_point(field_mutable:StarMsgProto.StarCmdMsg.strClientIP)
  return _s;
}
inline const std::string& StarCmdMsg::_internal_strclientip() const {
  return _impl_.strclientip_.Get();
}
inline void StarCmdMsg::_internal_set_strclientip(const std::string& value) {
  
  _impl_.strclientip_.Set(value, GetArenaForAllocation());
}
inline std::string* StarCmdMsg::_internal_mutable_strclientip() {
  
  return _impl_.strclientip_.Mutable(GetArenaForAllocation());
}
inline std::string* StarCmdMsg::release_strclientip() {
  // @@protoc_insertion_point(field_release:StarMsgProto.StarCmdMsg.strClientIP)
  return _impl_.strclientip_.Release();
}
inline void StarCmdMsg::set_allocated_strclientip(std::string* strclientip) {
  if (strclientip != nullptr) {
    
  } else {
    
  }
  _impl_.strclientip_.SetAllocated(strclientip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strclientip_.IsDefault()) {
    _impl_.strclientip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:StarMsgProto.StarCmdMsg.strClientIP)
}

// int32 nClientPort = 9;
inline void StarCmdMsg::clear_nclientport() {
  _impl_.nclientport_ = 0;
}
inline int32_t StarCmdMsg::_internal_nclientport() const {
  return _impl_.nclientport_;
}
inline int32_t StarCmdMsg::nclientport() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.nClientPort)
  return _internal_nclientport();
}
inline void StarCmdMsg::_internal_set_nclientport(int32_t value) {
  
  _impl_.nclientport_ = value;
}
inline void StarCmdMsg::set_nclientport(int32_t value) {
  _internal_set_nclientport(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.nClientPort)
}

// string strServerIP = 10;
inline void StarCmdMsg::clear_strserverip() {
  _impl_.strserverip_.ClearToEmpty();
}
inline const std::string& StarCmdMsg::strserverip() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.strServerIP)
  return _internal_strserverip();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StarCmdMsg::set_strserverip(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strserverip_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.strServerIP)
}
inline std::string* StarCmdMsg::mutable_strserverip() {
  std::string* _s = _internal_mutable_strserverip();
  // @@protoc_insertion_point(field_mutable:StarMsgProto.StarCmdMsg.strServerIP)
  return _s;
}
inline const std::string& StarCmdMsg::_internal_strserverip() const {
  return _impl_.strserverip_.Get();
}
inline void StarCmdMsg::_internal_set_strserverip(const std::string& value) {
  
  _impl_.strserverip_.Set(value, GetArenaForAllocation());
}
inline std::string* StarCmdMsg::_internal_mutable_strserverip() {
  
  return _impl_.strserverip_.Mutable(GetArenaForAllocation());
}
inline std::string* StarCmdMsg::release_strserverip() {
  // @@protoc_insertion_point(field_release:StarMsgProto.StarCmdMsg.strServerIP)
  return _impl_.strserverip_.Release();
}
inline void StarCmdMsg::set_allocated_strserverip(std::string* strserverip) {
  if (strserverip != nullptr) {
    
  } else {
    
  }
  _impl_.strserverip_.SetAllocated(strserverip, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strserverip_.IsDefault()) {
    _impl_.strserverip_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:StarMsgProto.StarCmdMsg.strServerIP)
}

// int32 nServerPort = 11;
inline void StarCmdMsg::clear_nserverport() {
  _impl_.nserverport_ = 0;
}
inline int32_t StarCmdMsg::_internal_nserverport() const {
  return _impl_.nserverport_;
}
inline int32_t StarCmdMsg::nserverport() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.nServerPort)
  return _internal_nserverport();
}
inline void StarCmdMsg::_internal_set_nserverport(int32_t value) {
  
  _impl_.nserverport_ = value;
}
inline void StarCmdMsg::set_nserverport(int32_t value) {
  _internal_set_nserverport(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.nServerPort)
}

// int32 msgHeaderLength = 12;
inline void StarCmdMsg::clear_msgheaderlength() {
  _impl_.msgheaderlength_ = 0;
}
inline int32_t StarCmdMsg::_internal_msgheaderlength() const {
  return _impl_.msgheaderlength_;
}
inline int32_t StarCmdMsg::msgheaderlength() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.msgHeaderLength)
  return _internal_msgheaderlength();
}
inline void StarCmdMsg::_internal_set_msgheaderlength(int32_t value) {
  
  _impl_.msgheaderlength_ = value;
}
inline void StarCmdMsg::set_msgheaderlength(int32_t value) {
  _internal_set_msgheaderlength(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.msgHeaderLength)
}

// int32 msgBodyLength = 13;
inline void StarCmdMsg::clear_msgbodylength() {
  _impl_.msgbodylength_ = 0;
}
inline int32_t StarCmdMsg::_internal_msgbodylength() const {
  return _impl_.msgbodylength_;
}
inline int32_t StarCmdMsg::msgbodylength() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.msgBodyLength)
  return _internal_msgbodylength();
}
inline void StarCmdMsg::_internal_set_msgbodylength(int32_t value) {
  
  _impl_.msgbodylength_ = value;
}
inline void StarCmdMsg::set_msgbodylength(int32_t value) {
  _internal_set_msgbodylength(value);
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.msgBodyLength)
}

// string strBody = 14;
inline void StarCmdMsg::clear_strbody() {
  _impl_.strbody_.ClearToEmpty();
}
inline const std::string& StarCmdMsg::strbody() const {
  // @@protoc_insertion_point(field_get:StarMsgProto.StarCmdMsg.strBody)
  return _internal_strbody();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StarCmdMsg::set_strbody(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strbody_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:StarMsgProto.StarCmdMsg.strBody)
}
inline std::string* StarCmdMsg::mutable_strbody() {
  std::string* _s = _internal_mutable_strbody();
  // @@protoc_insertion_point(field_mutable:StarMsgProto.StarCmdMsg.strBody)
  return _s;
}
inline const std::string& StarCmdMsg::_internal_strbody() const {
  return _impl_.strbody_.Get();
}
inline void StarCmdMsg::_internal_set_strbody(const std::string& value) {
  
  _impl_.strbody_.Set(value, GetArenaForAllocation());
}
inline std::string* StarCmdMsg::_internal_mutable_strbody() {
  
  return _impl_.strbody_.Mutable(GetArenaForAllocation());
}
inline std::string* StarCmdMsg::release_strbody() {
  // @@protoc_insertion_point(field_release:StarMsgProto.StarCmdMsg.strBody)
  return _impl_.strbody_.Release();
}
inline void StarCmdMsg::set_allocated_strbody(std::string* strbody) {
  if (strbody != nullptr) {
    
  } else {
    
  }
  _impl_.strbody_.SetAllocated(strbody, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strbody_.IsDefault()) {
    _impl_.strbody_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:StarMsgProto.StarCmdMsg.strBody)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace StarMsgProto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::StarMsgProto::MsgType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::StarMsgProto::MsgType>() {
  return ::StarMsgProto::MsgType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_starmsgproto_2eproto
