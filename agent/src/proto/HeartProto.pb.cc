// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HeartProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "HeartProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace fiberhome {
namespace fums {
namespace proto {
class HeartDataDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<HeartData>
     _instance;
} _HeartData_default_instance_;

namespace protobuf_HeartProto_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartData, uniqueid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartData, msg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartData, hearttype_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(HeartData)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_HeartData_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "HeartProto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _HeartData_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_HeartData_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\020HeartProto.proto\022\030com.fiberhome.fums.p"
      "roto\"\216\001\n\tHeartData\022\020\n\010uniqueId\030\001 \001(\003\022\013\n\003"
      "msg\030\002 \001(\t\022@\n\theartType\030\003 \001(\0162-.com.fiber"
      "home.fums.proto.HeartData.HeartType\" \n\tH"
      "eartType\022\t\n\005AGENT\020\000\022\010\n\004FUMS\020\001B&\n\030com.fib"
      "erhome.fums.protoB\nHeartProtob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "HeartProto.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_HeartProto_2eproto

const ::google::protobuf::EnumDescriptor* HeartData_HeartType_descriptor() {
  protobuf_HeartProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_HeartProto_2eproto::file_level_enum_descriptors[0];
}
bool HeartData_HeartType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const HeartData_HeartType HeartData::AGENT;
const HeartData_HeartType HeartData::FUMS;
const HeartData_HeartType HeartData::HeartType_MIN;
const HeartData_HeartType HeartData::HeartType_MAX;
const int HeartData::HeartType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HeartData::kUniqueIdFieldNumber;
const int HeartData::kMsgFieldNumber;
const int HeartData::kHeartTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HeartData::HeartData()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_HeartProto_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:com.fiberhome.fums.proto.HeartData)
}
HeartData::HeartData(const HeartData& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg().size() > 0) {
    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  ::memcpy(&uniqueid_, &from.uniqueid_,
    static_cast<size_t>(reinterpret_cast<char*>(&hearttype_) -
    reinterpret_cast<char*>(&uniqueid_)) + sizeof(hearttype_));
  // @@protoc_insertion_point(copy_constructor:com.fiberhome.fums.proto.HeartData)
}

void HeartData::SharedCtor() {
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&uniqueid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&hearttype_) -
      reinterpret_cast<char*>(&uniqueid_)) + sizeof(hearttype_));
  _cached_size_ = 0;
}

HeartData::~HeartData() {
  // @@protoc_insertion_point(destructor:com.fiberhome.fums.proto.HeartData)
  SharedDtor();
}

void HeartData::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void HeartData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartData::descriptor() {
  protobuf_HeartProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_HeartProto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const HeartData& HeartData::default_instance() {
  protobuf_HeartProto_2eproto::InitDefaults();
  return *internal_default_instance();
}

HeartData* HeartData::New(::google::protobuf::Arena* arena) const {
  HeartData* n = new HeartData;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HeartData::Clear() {
// @@protoc_insertion_point(message_clear_start:com.fiberhome.fums.proto.HeartData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&uniqueid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&hearttype_) -
      reinterpret_cast<char*>(&uniqueid_)) + sizeof(hearttype_));
  _internal_metadata_.Clear();
}

bool HeartData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:com.fiberhome.fums.proto.HeartData)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 uniqueId = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &uniqueid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string msg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msg().data(), static_cast<int>(this->msg().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "com.fiberhome.fums.proto.HeartData.msg"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .com.fiberhome.fums.proto.HeartData.HeartType heartType = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_hearttype(static_cast< ::com::fiberhome::fums::proto::HeartData_HeartType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:com.fiberhome.fums.proto.HeartData)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:com.fiberhome.fums.proto.HeartData)
  return false;
#undef DO_
}

void HeartData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:com.fiberhome.fums.proto.HeartData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 uniqueId = 1;
  if (this->uniqueid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->uniqueid(), output);
  }

  // string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.fiberhome.fums.proto.HeartData.msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msg(), output);
  }

  // .com.fiberhome.fums.proto.HeartData.HeartType heartType = 3;
  if (this->hearttype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->hearttype(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:com.fiberhome.fums.proto.HeartData)
}

::google::protobuf::uint8* HeartData::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:com.fiberhome.fums.proto.HeartData)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 uniqueId = 1;
  if (this->uniqueid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->uniqueid(), target);
  }

  // string msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msg().data(), static_cast<int>(this->msg().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "com.fiberhome.fums.proto.HeartData.msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  // .com.fiberhome.fums.proto.HeartData.HeartType heartType = 3;
  if (this->hearttype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->hearttype(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:com.fiberhome.fums.proto.HeartData)
  return target;
}

size_t HeartData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:com.fiberhome.fums.proto.HeartData)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string msg = 2;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msg());
  }

  // int64 uniqueId = 1;
  if (this->uniqueid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->uniqueid());
  }

  // .com.fiberhome.fums.proto.HeartData.HeartType heartType = 3;
  if (this->hearttype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->hearttype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartData::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:com.fiberhome.fums.proto.HeartData)
  GOOGLE_DCHECK_NE(&from, this);
  const HeartData* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const HeartData>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:com.fiberhome.fums.proto.HeartData)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:com.fiberhome.fums.proto.HeartData)
    MergeFrom(*source);
  }
}

void HeartData::MergeFrom(const HeartData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:com.fiberhome.fums.proto.HeartData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.uniqueid() != 0) {
    set_uniqueid(from.uniqueid());
  }
  if (from.hearttype() != 0) {
    set_hearttype(from.hearttype());
  }
}

void HeartData::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:com.fiberhome.fums.proto.HeartData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartData::CopyFrom(const HeartData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:com.fiberhome.fums.proto.HeartData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartData::IsInitialized() const {
  return true;
}

void HeartData::Swap(HeartData* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HeartData::InternalSwap(HeartData* other) {
  using std::swap;
  msg_.Swap(&other->msg_);
  swap(uniqueid_, other->uniqueid_);
  swap(hearttype_, other->hearttype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HeartData::GetMetadata() const {
  protobuf_HeartProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_HeartProto_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HeartData

// int64 uniqueId = 1;
void HeartData::clear_uniqueid() {
  uniqueid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 HeartData::uniqueid() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.HeartData.uniqueId)
  return uniqueid_;
}
void HeartData::set_uniqueid(::google::protobuf::int64 value) {
  
  uniqueid_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.HeartData.uniqueId)
}

// string msg = 2;
void HeartData::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& HeartData::msg() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.HeartData.msg)
  return msg_.GetNoArena();
}
void HeartData::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.HeartData.msg)
}
#if LANG_CXX11
void HeartData::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.HeartData.msg)
}
#endif
void HeartData::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.HeartData.msg)
}
void HeartData::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.HeartData.msg)
}
::std::string* HeartData::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.HeartData.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* HeartData::release_msg() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.HeartData.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void HeartData::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.HeartData.msg)
}

// .com.fiberhome.fums.proto.HeartData.HeartType heartType = 3;
void HeartData::clear_hearttype() {
  hearttype_ = 0;
}
::com::fiberhome::fums::proto::HeartData_HeartType HeartData::hearttype() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.HeartData.heartType)
  return static_cast< ::com::fiberhome::fums::proto::HeartData_HeartType >(hearttype_);
}
void HeartData::set_hearttype(::com::fiberhome::fums::proto::HeartData_HeartType value) {
  
  hearttype_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.HeartData.heartType)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace fums
}  // namespace fiberhome
}  // namespace com

// @@protoc_insertion_point(global_scope)
