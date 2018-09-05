// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sample.proto

#ifndef PROTOBUF_sample_2eproto__INCLUDED
#define PROTOBUF_sample_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)

namespace protobuf_sample_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSampleServicePbResultImpl();
void InitDefaultsSampleServicePbResult();
void InitDefaultsSampleServicePbRequestImpl();
void InitDefaultsSampleServicePbRequest();
inline void InitDefaults() {
  InitDefaultsSampleServicePbResult();
  InitDefaultsSampleServicePbRequest();
}
}  // namespace protobuf_sample_2eproto
class SampleServicePbRequest;
class SampleServicePbRequestDefaultTypeInternal;
extern SampleServicePbRequestDefaultTypeInternal _SampleServicePbRequest_default_instance_;
class SampleServicePbResult;
class SampleServicePbResultDefaultTypeInternal;
extern SampleServicePbResultDefaultTypeInternal _SampleServicePbResult_default_instance_;

// ===================================================================

class SampleServicePbResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SampleServicePbResult) */ {
 public:
  SampleServicePbResult();
  virtual ~SampleServicePbResult();

  SampleServicePbResult(const SampleServicePbResult& from);

  inline SampleServicePbResult& operator=(const SampleServicePbResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SampleServicePbResult(SampleServicePbResult&& from) noexcept
    : SampleServicePbResult() {
    *this = ::std::move(from);
  }

  inline SampleServicePbResult& operator=(SampleServicePbResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SampleServicePbResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SampleServicePbResult* internal_default_instance() {
    return reinterpret_cast<const SampleServicePbResult*>(
               &_SampleServicePbResult_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SampleServicePbResult* other);
  friend void swap(SampleServicePbResult& a, SampleServicePbResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SampleServicePbResult* New() const PROTOBUF_FINAL { return New(NULL); }

  SampleServicePbResult* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SampleServicePbResult& from);
  void MergeFrom(const SampleServicePbResult& from);
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
  void InternalSwap(SampleServicePbResult* other);
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

  // string result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  const ::std::string& result() const;
  void set_result(const ::std::string& value);
  #if LANG_CXX11
  void set_result(::std::string&& value);
  #endif
  void set_result(const char* value);
  void set_result(const char* value, size_t size);
  ::std::string* mutable_result();
  ::std::string* release_result();
  void set_allocated_result(::std::string* result);

  // @@protoc_insertion_point(class_scope:SampleServicePbResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr result_;
  mutable int _cached_size_;
  friend struct ::protobuf_sample_2eproto::TableStruct;
  friend void ::protobuf_sample_2eproto::InitDefaultsSampleServicePbResultImpl();
};
// -------------------------------------------------------------------

class SampleServicePbRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SampleServicePbRequest) */ {
 public:
  SampleServicePbRequest();
  virtual ~SampleServicePbRequest();

  SampleServicePbRequest(const SampleServicePbRequest& from);

  inline SampleServicePbRequest& operator=(const SampleServicePbRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SampleServicePbRequest(SampleServicePbRequest&& from) noexcept
    : SampleServicePbRequest() {
    *this = ::std::move(from);
  }

  inline SampleServicePbRequest& operator=(SampleServicePbRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SampleServicePbRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SampleServicePbRequest* internal_default_instance() {
    return reinterpret_cast<const SampleServicePbRequest*>(
               &_SampleServicePbRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SampleServicePbRequest* other);
  friend void swap(SampleServicePbRequest& a, SampleServicePbRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SampleServicePbRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  SampleServicePbRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SampleServicePbRequest& from);
  void MergeFrom(const SampleServicePbRequest& from);
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
  void InternalSwap(SampleServicePbRequest* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:SampleServicePbRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend struct ::protobuf_sample_2eproto::TableStruct;
  friend void ::protobuf_sample_2eproto::InitDefaultsSampleServicePbRequestImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SampleServicePbResult

// string result = 1;
inline void SampleServicePbResult::clear_result() {
  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SampleServicePbResult::result() const {
  // @@protoc_insertion_point(field_get:SampleServicePbResult.result)
  return result_.GetNoArena();
}
inline void SampleServicePbResult::set_result(const ::std::string& value) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SampleServicePbResult.result)
}
#if LANG_CXX11
inline void SampleServicePbResult::set_result(::std::string&& value) {
  
  result_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SampleServicePbResult.result)
}
#endif
inline void SampleServicePbResult::set_result(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SampleServicePbResult.result)
}
inline void SampleServicePbResult::set_result(const char* value, size_t size) {
  
  result_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SampleServicePbResult.result)
}
inline ::std::string* SampleServicePbResult::mutable_result() {
  
  // @@protoc_insertion_point(field_mutable:SampleServicePbResult.result)
  return result_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SampleServicePbResult::release_result() {
  // @@protoc_insertion_point(field_release:SampleServicePbResult.result)
  
  return result_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SampleServicePbResult::set_allocated_result(::std::string* result) {
  if (result != NULL) {
    
  } else {
    
  }
  result_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), result);
  // @@protoc_insertion_point(field_set_allocated:SampleServicePbResult.result)
}

// -------------------------------------------------------------------

// SampleServicePbRequest

// string name = 1;
inline void SampleServicePbRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SampleServicePbRequest::name() const {
  // @@protoc_insertion_point(field_get:SampleServicePbRequest.name)
  return name_.GetNoArena();
}
inline void SampleServicePbRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SampleServicePbRequest.name)
}
#if LANG_CXX11
inline void SampleServicePbRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:SampleServicePbRequest.name)
}
#endif
inline void SampleServicePbRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SampleServicePbRequest.name)
}
inline void SampleServicePbRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SampleServicePbRequest.name)
}
inline ::std::string* SampleServicePbRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:SampleServicePbRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SampleServicePbRequest::release_name() {
  // @@protoc_insertion_point(field_release:SampleServicePbRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SampleServicePbRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:SampleServicePbRequest.name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sample_2eproto__INCLUDED