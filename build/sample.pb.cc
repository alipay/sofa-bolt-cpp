// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sample.proto

#include "sample.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
class SampleServicePbResultDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SampleServicePbResult>
      _instance;
} _SampleServicePbResult_default_instance_;
class SampleServicePbRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SampleServicePbRequest>
      _instance;
} _SampleServicePbRequest_default_instance_;
namespace protobuf_sample_2eproto {
void InitDefaultsSampleServicePbResultImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_SampleServicePbResult_default_instance_;
    new (ptr) ::SampleServicePbResult();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SampleServicePbResult::InitAsDefaultInstance();
}

void InitDefaultsSampleServicePbResult() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSampleServicePbResultImpl);
}

void InitDefaultsSampleServicePbRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::_SampleServicePbRequest_default_instance_;
    new (ptr) ::SampleServicePbRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::SampleServicePbRequest::InitAsDefaultInstance();
}

void InitDefaultsSampleServicePbRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSampleServicePbRequestImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SampleServicePbResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SampleServicePbResult, result_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SampleServicePbRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::SampleServicePbRequest, name_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::SampleServicePbResult)},
  { 6, -1, sizeof(::SampleServicePbRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SampleServicePbResult_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_SampleServicePbRequest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "sample.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014sample.proto\"\'\n\025SampleServicePbResult\022"
      "\016\n\006result\030\001 \001(\t\"&\n\026SampleServicePbReques"
      "t\022\014\n\004name\030\001 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sample.proto", &protobuf_RegisterTypes);
}

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
}  // namespace protobuf_sample_2eproto

// ===================================================================

void SampleServicePbResult::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SampleServicePbResult::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SampleServicePbResult::SampleServicePbResult()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_sample_2eproto::InitDefaultsSampleServicePbResult();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SampleServicePbResult)
}
SampleServicePbResult::SampleServicePbResult(const SampleServicePbResult& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.result().size() > 0) {
    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
  // @@protoc_insertion_point(copy_constructor:SampleServicePbResult)
}

void SampleServicePbResult::SharedCtor() {
  result_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

SampleServicePbResult::~SampleServicePbResult() {
  // @@protoc_insertion_point(destructor:SampleServicePbResult)
  SharedDtor();
}

void SampleServicePbResult::SharedDtor() {
  result_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SampleServicePbResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SampleServicePbResult::descriptor() {
  ::protobuf_sample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sample_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SampleServicePbResult& SampleServicePbResult::default_instance() {
  ::protobuf_sample_2eproto::InitDefaultsSampleServicePbResult();
  return *internal_default_instance();
}

SampleServicePbResult* SampleServicePbResult::New(::google::protobuf::Arena* arena) const {
  SampleServicePbResult* n = new SampleServicePbResult;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SampleServicePbResult::Clear() {
// @@protoc_insertion_point(message_clear_start:SampleServicePbResult)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool SampleServicePbResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SampleServicePbResult)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_result()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->result().data(), static_cast<int>(this->result().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "SampleServicePbResult.result"));
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
  // @@protoc_insertion_point(parse_success:SampleServicePbResult)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SampleServicePbResult)
  return false;
#undef DO_
}

void SampleServicePbResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SampleServicePbResult)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SampleServicePbResult.result");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->result(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SampleServicePbResult)
}

::google::protobuf::uint8* SampleServicePbResult::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SampleServicePbResult)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (this->result().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->result().data(), static_cast<int>(this->result().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SampleServicePbResult.result");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->result(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SampleServicePbResult)
  return target;
}

size_t SampleServicePbResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SampleServicePbResult)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string result = 1;
  if (this->result().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SampleServicePbResult::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SampleServicePbResult)
  GOOGLE_DCHECK_NE(&from, this);
  const SampleServicePbResult* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SampleServicePbResult>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SampleServicePbResult)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SampleServicePbResult)
    MergeFrom(*source);
  }
}

void SampleServicePbResult::MergeFrom(const SampleServicePbResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SampleServicePbResult)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result().size() > 0) {

    result_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.result_);
  }
}

void SampleServicePbResult::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SampleServicePbResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SampleServicePbResult::CopyFrom(const SampleServicePbResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SampleServicePbResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleServicePbResult::IsInitialized() const {
  return true;
}

void SampleServicePbResult::Swap(SampleServicePbResult* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SampleServicePbResult::InternalSwap(SampleServicePbResult* other) {
  using std::swap;
  result_.Swap(&other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SampleServicePbResult::GetMetadata() const {
  protobuf_sample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sample_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SampleServicePbRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SampleServicePbRequest::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SampleServicePbRequest::SampleServicePbRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_sample_2eproto::InitDefaultsSampleServicePbRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:SampleServicePbRequest)
}
SampleServicePbRequest::SampleServicePbRequest(const SampleServicePbRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:SampleServicePbRequest)
}

void SampleServicePbRequest::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

SampleServicePbRequest::~SampleServicePbRequest() {
  // @@protoc_insertion_point(destructor:SampleServicePbRequest)
  SharedDtor();
}

void SampleServicePbRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SampleServicePbRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SampleServicePbRequest::descriptor() {
  ::protobuf_sample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sample_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SampleServicePbRequest& SampleServicePbRequest::default_instance() {
  ::protobuf_sample_2eproto::InitDefaultsSampleServicePbRequest();
  return *internal_default_instance();
}

SampleServicePbRequest* SampleServicePbRequest::New(::google::protobuf::Arena* arena) const {
  SampleServicePbRequest* n = new SampleServicePbRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SampleServicePbRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:SampleServicePbRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool SampleServicePbRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SampleServicePbRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "SampleServicePbRequest.name"));
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
  // @@protoc_insertion_point(parse_success:SampleServicePbRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SampleServicePbRequest)
  return false;
#undef DO_
}

void SampleServicePbRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SampleServicePbRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SampleServicePbRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:SampleServicePbRequest)
}

::google::protobuf::uint8* SampleServicePbRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SampleServicePbRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SampleServicePbRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SampleServicePbRequest)
  return target;
}

size_t SampleServicePbRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SampleServicePbRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SampleServicePbRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SampleServicePbRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const SampleServicePbRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SampleServicePbRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SampleServicePbRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SampleServicePbRequest)
    MergeFrom(*source);
  }
}

void SampleServicePbRequest::MergeFrom(const SampleServicePbRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SampleServicePbRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void SampleServicePbRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SampleServicePbRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SampleServicePbRequest::CopyFrom(const SampleServicePbRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SampleServicePbRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SampleServicePbRequest::IsInitialized() const {
  return true;
}

void SampleServicePbRequest::Swap(SampleServicePbRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SampleServicePbRequest::InternalSwap(SampleServicePbRequest* other) {
  using std::swap;
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SampleServicePbRequest::GetMetadata() const {
  protobuf_sample_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sample_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
