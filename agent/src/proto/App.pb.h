// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: App.proto

#ifndef PROTOBUF_App_2eproto__INCLUDED
#define PROTOBUF_App_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "CommonDefine.pb.h"
// @@protoc_insertion_point(includes)
namespace com {
namespace fiberhome {
namespace fums {
namespace proto {
class AppData;
class AppDataDefaultTypeInternal;
extern AppDataDefaultTypeInternal _AppData_default_instance_;
}  // namespace proto
}  // namespace fums
}  // namespace fiberhome
}  // namespace com

namespace com {
namespace fiberhome {
namespace fums {
namespace proto {

namespace protobuf_App_2eproto {
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
}  // namespace protobuf_App_2eproto

enum AppData_APP_OP_TYPE {
  AppData_APP_OP_TYPE_ADD = 0,
  AppData_APP_OP_TYPE_UPDATE = 1,
  AppData_APP_OP_TYPE_DEL = 2,
  AppData_APP_OP_TYPE_AppData_APP_OP_TYPE_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AppData_APP_OP_TYPE_AppData_APP_OP_TYPE_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AppData_APP_OP_TYPE_IsValid(int value);
const AppData_APP_OP_TYPE AppData_APP_OP_TYPE_APP_OP_TYPE_MIN = AppData_APP_OP_TYPE_ADD;
const AppData_APP_OP_TYPE AppData_APP_OP_TYPE_APP_OP_TYPE_MAX = AppData_APP_OP_TYPE_DEL;
const int AppData_APP_OP_TYPE_APP_OP_TYPE_ARRAYSIZE = AppData_APP_OP_TYPE_APP_OP_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* AppData_APP_OP_TYPE_descriptor();
inline const ::std::string& AppData_APP_OP_TYPE_Name(AppData_APP_OP_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    AppData_APP_OP_TYPE_descriptor(), value);
}
inline bool AppData_APP_OP_TYPE_Parse(
    const ::std::string& name, AppData_APP_OP_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AppData_APP_OP_TYPE>(
    AppData_APP_OP_TYPE_descriptor(), name, value);
}
enum AppData_AppStatusTypeEnum {
  AppData_AppStatusTypeEnum_STOPPED = 0,
  AppData_AppStatusTypeEnum_RUNNING = 1,
  AppData_AppStatusTypeEnum_AppData_AppStatusTypeEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AppData_AppStatusTypeEnum_AppData_AppStatusTypeEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AppData_AppStatusTypeEnum_IsValid(int value);
const AppData_AppStatusTypeEnum AppData_AppStatusTypeEnum_AppStatusTypeEnum_MIN = AppData_AppStatusTypeEnum_STOPPED;
const AppData_AppStatusTypeEnum AppData_AppStatusTypeEnum_AppStatusTypeEnum_MAX = AppData_AppStatusTypeEnum_RUNNING;
const int AppData_AppStatusTypeEnum_AppStatusTypeEnum_ARRAYSIZE = AppData_AppStatusTypeEnum_AppStatusTypeEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* AppData_AppStatusTypeEnum_descriptor();
inline const ::std::string& AppData_AppStatusTypeEnum_Name(AppData_AppStatusTypeEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    AppData_AppStatusTypeEnum_descriptor(), value);
}
inline bool AppData_AppStatusTypeEnum_Parse(
    const ::std::string& name, AppData_AppStatusTypeEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AppData_AppStatusTypeEnum>(
    AppData_AppStatusTypeEnum_descriptor(), name, value);
}
enum AppData_AppInstallStatusEnum {
  AppData_AppInstallStatusEnum_INSTALLED_SUCCESS = 0,
  AppData_AppInstallStatusEnum_INSTALLED_FAILED = 1,
  AppData_AppInstallStatusEnum_DOWNLOAD_SUCC_NOT_INSTALL = 2,
  AppData_AppInstallStatusEnum_DOWNLOAD_FAILED = 3,
  AppData_AppInstallStatusEnum_AppData_AppInstallStatusEnum_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AppData_AppInstallStatusEnum_AppData_AppInstallStatusEnum_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AppData_AppInstallStatusEnum_IsValid(int value);
const AppData_AppInstallStatusEnum AppData_AppInstallStatusEnum_AppInstallStatusEnum_MIN = AppData_AppInstallStatusEnum_INSTALLED_SUCCESS;
const AppData_AppInstallStatusEnum AppData_AppInstallStatusEnum_AppInstallStatusEnum_MAX = AppData_AppInstallStatusEnum_DOWNLOAD_FAILED;
const int AppData_AppInstallStatusEnum_AppInstallStatusEnum_ARRAYSIZE = AppData_AppInstallStatusEnum_AppInstallStatusEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* AppData_AppInstallStatusEnum_descriptor();
inline const ::std::string& AppData_AppInstallStatusEnum_Name(AppData_AppInstallStatusEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    AppData_AppInstallStatusEnum_descriptor(), value);
}
inline bool AppData_AppInstallStatusEnum_Parse(
    const ::std::string& name, AppData_AppInstallStatusEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AppData_AppInstallStatusEnum>(
    AppData_AppInstallStatusEnum_descriptor(), name, value);
}
// ===================================================================

class AppData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:com.fiberhome.fums.proto.AppData) */ {
 public:
  AppData();
  virtual ~AppData();

  AppData(const AppData& from);

  inline AppData& operator=(const AppData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AppData(AppData&& from) noexcept
    : AppData() {
    *this = ::std::move(from);
  }

  inline AppData& operator=(AppData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AppData& default_instance();

  static inline const AppData* internal_default_instance() {
    return reinterpret_cast<const AppData*>(
               &_AppData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AppData* other);
  friend void swap(AppData& a, AppData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AppData* New() const PROTOBUF_FINAL { return New(NULL); }

  AppData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AppData& from);
  void MergeFrom(const AppData& from);
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
  void InternalSwap(AppData* other);
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

  typedef AppData_APP_OP_TYPE APP_OP_TYPE;
  static const APP_OP_TYPE ADD =
    AppData_APP_OP_TYPE_ADD;
  static const APP_OP_TYPE UPDATE =
    AppData_APP_OP_TYPE_UPDATE;
  static const APP_OP_TYPE DEL =
    AppData_APP_OP_TYPE_DEL;
  static inline bool APP_OP_TYPE_IsValid(int value) {
    return AppData_APP_OP_TYPE_IsValid(value);
  }
  static const APP_OP_TYPE APP_OP_TYPE_MIN =
    AppData_APP_OP_TYPE_APP_OP_TYPE_MIN;
  static const APP_OP_TYPE APP_OP_TYPE_MAX =
    AppData_APP_OP_TYPE_APP_OP_TYPE_MAX;
  static const int APP_OP_TYPE_ARRAYSIZE =
    AppData_APP_OP_TYPE_APP_OP_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  APP_OP_TYPE_descriptor() {
    return AppData_APP_OP_TYPE_descriptor();
  }
  static inline const ::std::string& APP_OP_TYPE_Name(APP_OP_TYPE value) {
    return AppData_APP_OP_TYPE_Name(value);
  }
  static inline bool APP_OP_TYPE_Parse(const ::std::string& name,
      APP_OP_TYPE* value) {
    return AppData_APP_OP_TYPE_Parse(name, value);
  }

  typedef AppData_AppStatusTypeEnum AppStatusTypeEnum;
  static const AppStatusTypeEnum STOPPED =
    AppData_AppStatusTypeEnum_STOPPED;
  static const AppStatusTypeEnum RUNNING =
    AppData_AppStatusTypeEnum_RUNNING;
  static inline bool AppStatusTypeEnum_IsValid(int value) {
    return AppData_AppStatusTypeEnum_IsValid(value);
  }
  static const AppStatusTypeEnum AppStatusTypeEnum_MIN =
    AppData_AppStatusTypeEnum_AppStatusTypeEnum_MIN;
  static const AppStatusTypeEnum AppStatusTypeEnum_MAX =
    AppData_AppStatusTypeEnum_AppStatusTypeEnum_MAX;
  static const int AppStatusTypeEnum_ARRAYSIZE =
    AppData_AppStatusTypeEnum_AppStatusTypeEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AppStatusTypeEnum_descriptor() {
    return AppData_AppStatusTypeEnum_descriptor();
  }
  static inline const ::std::string& AppStatusTypeEnum_Name(AppStatusTypeEnum value) {
    return AppData_AppStatusTypeEnum_Name(value);
  }
  static inline bool AppStatusTypeEnum_Parse(const ::std::string& name,
      AppStatusTypeEnum* value) {
    return AppData_AppStatusTypeEnum_Parse(name, value);
  }

  typedef AppData_AppInstallStatusEnum AppInstallStatusEnum;
  static const AppInstallStatusEnum INSTALLED_SUCCESS =
    AppData_AppInstallStatusEnum_INSTALLED_SUCCESS;
  static const AppInstallStatusEnum INSTALLED_FAILED =
    AppData_AppInstallStatusEnum_INSTALLED_FAILED;
  static const AppInstallStatusEnum DOWNLOAD_SUCC_NOT_INSTALL =
    AppData_AppInstallStatusEnum_DOWNLOAD_SUCC_NOT_INSTALL;
  static const AppInstallStatusEnum DOWNLOAD_FAILED =
    AppData_AppInstallStatusEnum_DOWNLOAD_FAILED;
  static inline bool AppInstallStatusEnum_IsValid(int value) {
    return AppData_AppInstallStatusEnum_IsValid(value);
  }
  static const AppInstallStatusEnum AppInstallStatusEnum_MIN =
    AppData_AppInstallStatusEnum_AppInstallStatusEnum_MIN;
  static const AppInstallStatusEnum AppInstallStatusEnum_MAX =
    AppData_AppInstallStatusEnum_AppInstallStatusEnum_MAX;
  static const int AppInstallStatusEnum_ARRAYSIZE =
    AppData_AppInstallStatusEnum_AppInstallStatusEnum_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  AppInstallStatusEnum_descriptor() {
    return AppData_AppInstallStatusEnum_descriptor();
  }
  static inline const ::std::string& AppInstallStatusEnum_Name(AppInstallStatusEnum value) {
    return AppData_AppInstallStatusEnum_Name(value);
  }
  static inline bool AppInstallStatusEnum_Parse(const ::std::string& name,
      AppInstallStatusEnum* value) {
    return AppData_AppInstallStatusEnum_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string appType = 2;
  void clear_apptype();
  static const int kAppTypeFieldNumber = 2;
  const ::std::string& apptype() const;
  void set_apptype(const ::std::string& value);
  #if LANG_CXX11
  void set_apptype(::std::string&& value);
  #endif
  void set_apptype(const char* value);
  void set_apptype(const char* value, size_t size);
  ::std::string* mutable_apptype();
  ::std::string* release_apptype();
  void set_allocated_apptype(::std::string* apptype);

  // string appVersion = 4;
  void clear_appversion();
  static const int kAppVersionFieldNumber = 4;
  const ::std::string& appversion() const;
  void set_appversion(const ::std::string& value);
  #if LANG_CXX11
  void set_appversion(::std::string&& value);
  #endif
  void set_appversion(const char* value);
  void set_appversion(const char* value, size_t size);
  ::std::string* mutable_appversion();
  ::std::string* release_appversion();
  void set_allocated_appversion(::std::string* appversion);

  // string appTryInstallingVersion = 6;
  void clear_apptryinstallingversion();
  static const int kAppTryInstallingVersionFieldNumber = 6;
  const ::std::string& apptryinstallingversion() const;
  void set_apptryinstallingversion(const ::std::string& value);
  #if LANG_CXX11
  void set_apptryinstallingversion(::std::string&& value);
  #endif
  void set_apptryinstallingversion(const char* value);
  void set_apptryinstallingversion(const char* value, size_t size);
  ::std::string* mutable_apptryinstallingversion();
  ::std::string* release_apptryinstallingversion();
  void set_allocated_apptryinstallingversion(::std::string* apptryinstallingversion);

  // string appTryInstallingFailedReason = 8;
  void clear_apptryinstallingfailedreason();
  static const int kAppTryInstallingFailedReasonFieldNumber = 8;
  const ::std::string& apptryinstallingfailedreason() const;
  void set_apptryinstallingfailedreason(const ::std::string& value);
  #if LANG_CXX11
  void set_apptryinstallingfailedreason(::std::string&& value);
  #endif
  void set_apptryinstallingfailedreason(const char* value);
  void set_apptryinstallingfailedreason(const char* value, size_t size);
  ::std::string* mutable_apptryinstallingfailedreason();
  ::std::string* release_apptryinstallingfailedreason();
  void set_allocated_apptryinstallingfailedreason(::std::string* apptryinstallingfailedreason);

  // .com.fiberhome.fums.proto.AppData.APP_OP_TYPE op_type = 1;
  void clear_op_type();
  static const int kOpTypeFieldNumber = 1;
  ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE op_type() const;
  void set_op_type(::com::fiberhome::fums::proto::AppData_APP_OP_TYPE value);

  // .com.fiberhome.fums.proto.EnumDefineData.AppTypeEnum appTypeCode = 3;
  void clear_apptypecode();
  static const int kAppTypeCodeFieldNumber = 3;
  ::com::fiberhome::fums::proto::EnumDefineData_AppTypeEnum apptypecode() const;
  void set_apptypecode(::com::fiberhome::fums::proto::EnumDefineData_AppTypeEnum value);

  // .com.fiberhome.fums.proto.AppData.AppStatusTypeEnum appStatus = 5;
  void clear_appstatus();
  static const int kAppStatusFieldNumber = 5;
  ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum appstatus() const;
  void set_appstatus(::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum value);

  // .com.fiberhome.fums.proto.AppData.AppInstallStatusEnum appTryInstallingStatus = 7;
  void clear_apptryinstallingstatus();
  static const int kAppTryInstallingStatusFieldNumber = 7;
  ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum apptryinstallingstatus() const;
  void set_apptryinstallingstatus(::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum value);

  // bool isMayStart = 9;
  void clear_ismaystart();
  static const int kIsMayStartFieldNumber = 9;
  bool ismaystart() const;
  void set_ismaystart(bool value);

  // int32 startCount = 10;
  void clear_startcount();
  static const int kStartCountFieldNumber = 10;
  ::google::protobuf::int32 startcount() const;
  void set_startcount(::google::protobuf::int32 value);

  // int32 appDemonStatus = 11;
  void clear_appdemonstatus();
  static const int kAppDemonStatusFieldNumber = 11;
  ::google::protobuf::int32 appdemonstatus() const;
  void set_appdemonstatus(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:com.fiberhome.fums.proto.AppData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr apptype_;
  ::google::protobuf::internal::ArenaStringPtr appversion_;
  ::google::protobuf::internal::ArenaStringPtr apptryinstallingversion_;
  ::google::protobuf::internal::ArenaStringPtr apptryinstallingfailedreason_;
  int op_type_;
  int apptypecode_;
  int appstatus_;
  int apptryinstallingstatus_;
  bool ismaystart_;
  ::google::protobuf::int32 startcount_;
  ::google::protobuf::int32 appdemonstatus_;
  mutable int _cached_size_;
  friend struct protobuf_App_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AppData

// .com.fiberhome.fums.proto.AppData.APP_OP_TYPE op_type = 1;
inline void AppData::clear_op_type() {
  op_type_ = 0;
}
inline ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE AppData::op_type() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.op_type)
  return static_cast< ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE >(op_type_);
}
inline void AppData::set_op_type(::com::fiberhome::fums::proto::AppData_APP_OP_TYPE value) {
  
  op_type_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.op_type)
}

// string appType = 2;
inline void AppData::clear_apptype() {
  apptype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AppData::apptype() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appType)
  return apptype_.GetNoArena();
}
inline void AppData::set_apptype(const ::std::string& value) {
  
  apptype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appType)
}
#if LANG_CXX11
inline void AppData::set_apptype(::std::string&& value) {
  
  apptype_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.AppData.appType)
}
#endif
inline void AppData::set_apptype(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  apptype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.AppData.appType)
}
inline void AppData::set_apptype(const char* value, size_t size) {
  
  apptype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.AppData.appType)
}
inline ::std::string* AppData::mutable_apptype() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.AppData.appType)
  return apptype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppData::release_apptype() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.AppData.appType)
  
  return apptype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppData::set_allocated_apptype(::std::string* apptype) {
  if (apptype != NULL) {
    
  } else {
    
  }
  apptype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), apptype);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.AppData.appType)
}

// .com.fiberhome.fums.proto.EnumDefineData.AppTypeEnum appTypeCode = 3;
inline void AppData::clear_apptypecode() {
  apptypecode_ = 0;
}
inline ::com::fiberhome::fums::proto::EnumDefineData_AppTypeEnum AppData::apptypecode() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appTypeCode)
  return static_cast< ::com::fiberhome::fums::proto::EnumDefineData_AppTypeEnum >(apptypecode_);
}
inline void AppData::set_apptypecode(::com::fiberhome::fums::proto::EnumDefineData_AppTypeEnum value) {
  
  apptypecode_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appTypeCode)
}

// string appVersion = 4;
inline void AppData::clear_appversion() {
  appversion_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AppData::appversion() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appVersion)
  return appversion_.GetNoArena();
}
inline void AppData::set_appversion(const ::std::string& value) {
  
  appversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appVersion)
}
#if LANG_CXX11
inline void AppData::set_appversion(::std::string&& value) {
  
  appversion_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.AppData.appVersion)
}
#endif
inline void AppData::set_appversion(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  appversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.AppData.appVersion)
}
inline void AppData::set_appversion(const char* value, size_t size) {
  
  appversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.AppData.appVersion)
}
inline ::std::string* AppData::mutable_appversion() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.AppData.appVersion)
  return appversion_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppData::release_appversion() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.AppData.appVersion)
  
  return appversion_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppData::set_allocated_appversion(::std::string* appversion) {
  if (appversion != NULL) {
    
  } else {
    
  }
  appversion_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), appversion);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.AppData.appVersion)
}

// .com.fiberhome.fums.proto.AppData.AppStatusTypeEnum appStatus = 5;
inline void AppData::clear_appstatus() {
  appstatus_ = 0;
}
inline ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum AppData::appstatus() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appStatus)
  return static_cast< ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum >(appstatus_);
}
inline void AppData::set_appstatus(::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum value) {
  
  appstatus_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appStatus)
}

// string appTryInstallingVersion = 6;
inline void AppData::clear_apptryinstallingversion() {
  apptryinstallingversion_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AppData::apptryinstallingversion() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
  return apptryinstallingversion_.GetNoArena();
}
inline void AppData::set_apptryinstallingversion(const ::std::string& value) {
  
  apptryinstallingversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
}
#if LANG_CXX11
inline void AppData::set_apptryinstallingversion(::std::string&& value) {
  
  apptryinstallingversion_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
}
#endif
inline void AppData::set_apptryinstallingversion(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  apptryinstallingversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
}
inline void AppData::set_apptryinstallingversion(const char* value, size_t size) {
  
  apptryinstallingversion_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
}
inline ::std::string* AppData::mutable_apptryinstallingversion() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
  return apptryinstallingversion_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppData::release_apptryinstallingversion() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
  
  return apptryinstallingversion_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppData::set_allocated_apptryinstallingversion(::std::string* apptryinstallingversion) {
  if (apptryinstallingversion != NULL) {
    
  } else {
    
  }
  apptryinstallingversion_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), apptryinstallingversion);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.AppData.appTryInstallingVersion)
}

// .com.fiberhome.fums.proto.AppData.AppInstallStatusEnum appTryInstallingStatus = 7;
inline void AppData::clear_apptryinstallingstatus() {
  apptryinstallingstatus_ = 0;
}
inline ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum AppData::apptryinstallingstatus() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appTryInstallingStatus)
  return static_cast< ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum >(apptryinstallingstatus_);
}
inline void AppData::set_apptryinstallingstatus(::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum value) {
  
  apptryinstallingstatus_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appTryInstallingStatus)
}

// string appTryInstallingFailedReason = 8;
inline void AppData::clear_apptryinstallingfailedreason() {
  apptryinstallingfailedreason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AppData::apptryinstallingfailedreason() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
  return apptryinstallingfailedreason_.GetNoArena();
}
inline void AppData::set_apptryinstallingfailedreason(const ::std::string& value) {
  
  apptryinstallingfailedreason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
}
#if LANG_CXX11
inline void AppData::set_apptryinstallingfailedreason(::std::string&& value) {
  
  apptryinstallingfailedreason_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
}
#endif
inline void AppData::set_apptryinstallingfailedreason(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  apptryinstallingfailedreason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
}
inline void AppData::set_apptryinstallingfailedreason(const char* value, size_t size) {
  
  apptryinstallingfailedreason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
}
inline ::std::string* AppData::mutable_apptryinstallingfailedreason() {
  
  // @@protoc_insertion_point(field_mutable:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
  return apptryinstallingfailedreason_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AppData::release_apptryinstallingfailedreason() {
  // @@protoc_insertion_point(field_release:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
  
  return apptryinstallingfailedreason_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AppData::set_allocated_apptryinstallingfailedreason(::std::string* apptryinstallingfailedreason) {
  if (apptryinstallingfailedreason != NULL) {
    
  } else {
    
  }
  apptryinstallingfailedreason_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), apptryinstallingfailedreason);
  // @@protoc_insertion_point(field_set_allocated:com.fiberhome.fums.proto.AppData.appTryInstallingFailedReason)
}

// bool isMayStart = 9;
inline void AppData::clear_ismaystart() {
  ismaystart_ = false;
}
inline bool AppData::ismaystart() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.isMayStart)
  return ismaystart_;
}
inline void AppData::set_ismaystart(bool value) {
  
  ismaystart_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.isMayStart)
}

// int32 startCount = 10;
inline void AppData::clear_startcount() {
  startcount_ = 0;
}
inline ::google::protobuf::int32 AppData::startcount() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.startCount)
  return startcount_;
}
inline void AppData::set_startcount(::google::protobuf::int32 value) {
  
  startcount_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.startCount)
}

// int32 appDemonStatus = 11;
inline void AppData::clear_appdemonstatus() {
  appdemonstatus_ = 0;
}
inline ::google::protobuf::int32 AppData::appdemonstatus() const {
  // @@protoc_insertion_point(field_get:com.fiberhome.fums.proto.AppData.appDemonStatus)
  return appdemonstatus_;
}
inline void AppData::set_appdemonstatus(::google::protobuf::int32 value) {
  
  appdemonstatus_ = value;
  // @@protoc_insertion_point(field_set:com.fiberhome.fums.proto.AppData.appDemonStatus)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace fums
}  // namespace fiberhome
}  // namespace com

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE>() {
  return ::com::fiberhome::fums::proto::AppData_APP_OP_TYPE_descriptor();
}
template <> struct is_proto_enum< ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum>() {
  return ::com::fiberhome::fums::proto::AppData_AppStatusTypeEnum_descriptor();
}
template <> struct is_proto_enum< ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum>() {
  return ::com::fiberhome::fums::proto::AppData_AppInstallStatusEnum_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_App_2eproto__INCLUDED
