// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Response.proto

#ifndef PROTOBUF_Response_2eproto__INCLUDED
#define PROTOBUF_Response_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "Msg.pb.h"
// @@protoc_insertion_point(includes)
namespace com {
namespace fiberhome {
namespace fums {
namespace proto {
class NtpDateResponse;
class NtpDateResponseDefaultTypeInternal;
extern NtpDateResponseDefaultTypeInternal _NtpDateResponse_default_instance_;
class ResponseData;
class ResponseDataDefaultTypeInternal;
extern ResponseDataDefaultTypeInternal _ResponseData_default_instance_;
}  // namespace proto
}  // namespace fums
}  // namespace fiberhome
}  // namespace com

namespace com {
namespace fiberhome {
namespace fums {
namespace proto {

namespace protobuf_Response_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_Response_2eproto

// ===================================================================

class ResponseData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.fiberhome.fums.proto.ResponseData) */ {
 public:
  ResponseData();
  virtual ~ResponseData();

  ResponseData(const ResponseData& from);

  inline ResponseData& operator=(const ResponseData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ResponseData(ResponseData&& from) noexcept
    : ResponseData() {
    *this = ::std::move(from);
  }

  inline ResponseData& operator=(ResponseData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ResponseData& default_instance();

  static inline const ResponseData* internal_default_instance() {
    return reinterpret_cast<const ResponseData*>(
               &_ResponseData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ResponseData* other);
  friend void swap(ResponseData& a, ResponseData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResponseData* New() const PROTOBUF_FINAL { return New(NULL); }

  ResponseData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResponseData& from);
  void MergeFrom(const ResponseData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResponseData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string data = 3;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // int64 uniqueId = 1;
  void clear_uniqueid();
  static const int kUniqueIdFieldNumber = 1;
  ::google::protobuf::int64 uniqueid() const;
  void set_uniqueid(::google::protobuf::int64 value);

  // .com.fiberhome.fums.proto.Header.DataType resType = 2;
  void clear_restype();
  static const int kResTypeFieldNumber = 2;
  ::com::fiberhome::fums::proto::Header_DataType restype() const;
  void set_restype(::com::fiberhome::fums::proto::Header_DataType value);

  // @@protoc_insertion_point(class_scope:com.fiberhome.fums.proto.ResponseData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::int64 uniqueid_;
  int restype_;
  mutable int _cached_size_;
  friend struct protobuf_Response_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NtpDateResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.fiberhome.fums.proto.NtpDateResponse) */ {
 public:
  NtpDateResponse();
  virtual ~NtpDateResponse();

  NtpDateResponse(const NtpDateResponse& from);

  inline NtpDateResponse& operator=(const NtpDateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NtpDateResponse(NtpDateResponse&& from) noexcept
    : NtpDateResponse() {
    *this = ::std::move(from);
  }

  inline NtpDateResponse& operator=(NtpDateResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const NtpDateResponse& default_instance();

  static inline const NtpDateResponse* internal_default_instance() {
    return reinterpret_cast<const NtpDateResponse*>(
               &_NtpDateResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(NtpDateResponse* other);
  friend void swap(NtpDateResponse& a, NtpDateResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NtpDateResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  NtpDateResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const NtpDateResponse& from);
  void MergeFrom(const NtpDateResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(NtpDateResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string offset = 1;
  void clear_offset();
  static const int kOffsetFieldNumber = 1;
  const ::std::string& offset() const;
  void set_offset(const ::std::string& value);
  #if LANG_CXX11
  void set_offset(::std::string&& value);
  #endif
  void set_offset(const char* value);
  void set_offset(const char* value, size_t size);
  ::std::string* mutable_offset();
  ::std::string* release_offset();
  void set_allocated_offset(::std::string* offset);

  // @@protoc_insertion_point(class_scope:com.fiberhome.fums.proto.NtpDateResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr offset_;
  mutable int _cached_size_;
  friend struct protobuf_Response_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResponseData

// int64 uniqueId = 1;
inline void ResponseData::clear_uniqueid() {
  uniqueid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResponseData::uniqueid() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.ResponseData.uniqueId)
  return uniqueid_;
}
inline void ResponseData::set_uniqueid(::google::protobuf::int64 value) {
  
  uniqueid_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.ResponseData.uniqueId)
}

// .com.fiberhome.fums.proto.Header.DataType resType = 2;
inline void ResponseData::clear_restype() {
  restype_ = 0;
}
inline ::com::fiberhome::fums::proto::Header_DataType ResponseData::restype() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.ResponseData.resType)
  return static_cast< ::com::fiberhome::fums::proto::Header_DataType >(restype_);
}
inline void ResponseData::set_restype(::com::fiberhome::fums::proto::Header_DataType value) {
  
  restype_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.ResponseData.resType)
}

// string data = 3;
inline void ResponseData::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResponseData::data() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.ResponseData.data)
  return data_.GetNoArena();
}
inline void ResponseData::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.ResponseData.data)
}
#if LANG_CXX11
inline void ResponseData::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.ResponseData.data)
}
#endif
inline void ResponseData::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.ResponseData.data)
}
inline void ResponseData::set_data(const char* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.ResponseData.data)
}
inline ::std::string* ResponseData::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.ResponseData.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResponseData::release_data() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.ResponseData.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseData::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.ResponseData.data)
}

// -------------------------------------------------------------------

// NtpDateResponse

// string offset = 1;
inline void NtpDateResponse::clear_offset() {
  offset_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& NtpDateResponse::offset() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.NtpDateResponse.offset)
  return offset_.GetNoArena();
}
inline void NtpDateResponse::set_offset(const ::std::string& value) {
  
  offset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.NtpDateResponse.offset)
}
#if LANG_CXX11
inline void NtpDateResponse::set_offset(::std::string&& value) {
  
  offset_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.NtpDateResponse.offset)
}
#endif
inline void NtpDateResponse::set_offset(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  offset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.NtpDateResponse.offset)
}
inline void NtpDateResponse::set_offset(const char* value, size_t size) {
  
  offset_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.NtpDateResponse.offset)
}
inline ::std::string* NtpDateResponse::mutable_offset() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.NtpDateResponse.offset)
  return offset_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NtpDateResponse::release_offset() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.NtpDateResponse.offset)
  
  return offset_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NtpDateResponse::set_allocated_offset(::std::string* offset) {
  if (offset != NULL) {
    
  } else {
    
  }
  offset_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), offset);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.NtpDateResponse.offset)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace fums
}  // namespace fiberhome
}  // namespace com

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Response_2eproto__INCLUDED
