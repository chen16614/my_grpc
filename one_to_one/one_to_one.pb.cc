// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: one_to_one.proto

#include "one_to_one.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace oto {
class additionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<addition> _instance;
} _addition_default_instance_;
class countDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<count> _instance;
} _count_default_instance_;
}  // namespace oto
static void InitDefaultsaddition_one_5fto_5fone_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::oto::_addition_default_instance_;
    new (ptr) ::oto::addition();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::oto::addition::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_addition_one_5fto_5fone_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsaddition_one_5fto_5fone_2eproto}, {}};

static void InitDefaultscount_one_5fto_5fone_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::oto::_count_default_instance_;
    new (ptr) ::oto::count();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::oto::count::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_count_one_5fto_5fone_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultscount_one_5fto_5fone_2eproto}, {}};

void InitDefaults_one_5fto_5fone_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_addition_one_5fto_5fone_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_count_one_5fto_5fone_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_one_5fto_5fone_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_one_5fto_5fone_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_one_5fto_5fone_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_one_5fto_5fone_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::oto::addition, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::oto::addition, index_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::oto::count, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::oto::count, result_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::oto::addition)},
  { 6, -1, sizeof(::oto::count)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::oto::_addition_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::oto::_count_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_one_5fto_5fone_2eproto = {
  {}, AddDescriptors_one_5fto_5fone_2eproto, "one_to_one.proto", schemas,
  file_default_instances, TableStruct_one_5fto_5fone_2eproto::offsets,
  file_level_metadata_one_5fto_5fone_2eproto, 2, file_level_enum_descriptors_one_5fto_5fone_2eproto, file_level_service_descriptors_one_5fto_5fone_2eproto,
};

const char descriptor_table_protodef_one_5fto_5fone_2eproto[] =
  "\n\020one_to_one.proto\022\003oto\"\031\n\010addition\022\r\n\005i"
  "ndex\030\001 \001(\005\"\027\n\005count\022\016\n\006result\030\001 \001(\00524\n\no"
  "ne_to_one\022&\n\tAdd_count\022\r.oto.addition\032\n."
  "oto.countb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_one_5fto_5fone_2eproto = {
  false, InitDefaults_one_5fto_5fone_2eproto, 
  descriptor_table_protodef_one_5fto_5fone_2eproto,
  "one_to_one.proto", &assign_descriptors_table_one_5fto_5fone_2eproto, 137,
};

void AddDescriptors_one_5fto_5fone_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_one_5fto_5fone_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_one_5fto_5fone_2eproto = []() { AddDescriptors_one_5fto_5fone_2eproto(); return true; }();
namespace oto {

// ===================================================================

void addition::InitAsDefaultInstance() {
}
class addition::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int addition::kIndexFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

addition::addition()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:oto.addition)
}
addition::addition(const addition& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  index_ = from.index_;
  // @@protoc_insertion_point(copy_constructor:oto.addition)
}

void addition::SharedCtor() {
  index_ = 0;
}

addition::~addition() {
  // @@protoc_insertion_point(destructor:oto.addition)
  SharedDtor();
}

void addition::SharedDtor() {
}

void addition::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const addition& addition::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_addition_one_5fto_5fone_2eproto.base);
  return *internal_default_instance();
}


void addition::Clear() {
// @@protoc_insertion_point(message_clear_start:oto.addition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  index_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* addition::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<addition*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 index = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_index(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool addition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:oto.addition)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 index = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
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
  // @@protoc_insertion_point(parse_success:oto.addition)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:oto.addition)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void addition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:oto.addition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 index = 1;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->index(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:oto.addition)
}

::google::protobuf::uint8* addition::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:oto.addition)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 index = 1;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->index(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:oto.addition)
  return target;
}

size_t addition::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:oto.addition)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 index = 1;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void addition::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:oto.addition)
  GOOGLE_DCHECK_NE(&from, this);
  const addition* source =
      ::google::protobuf::DynamicCastToGenerated<addition>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:oto.addition)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:oto.addition)
    MergeFrom(*source);
  }
}

void addition::MergeFrom(const addition& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:oto.addition)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.index() != 0) {
    set_index(from.index());
  }
}

void addition::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:oto.addition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void addition::CopyFrom(const addition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:oto.addition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool addition::IsInitialized() const {
  return true;
}

void addition::Swap(addition* other) {
  if (other == this) return;
  InternalSwap(other);
}
void addition::InternalSwap(addition* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(index_, other->index_);
}

::google::protobuf::Metadata addition::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_one_5fto_5fone_2eproto);
  return ::file_level_metadata_one_5fto_5fone_2eproto[kIndexInFileMessages];
}


// ===================================================================

void count::InitAsDefaultInstance() {
}
class count::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int count::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

count::count()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:oto.count)
}
count::count(const count& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:oto.count)
}

void count::SharedCtor() {
  result_ = 0;
}

count::~count() {
  // @@protoc_insertion_point(destructor:oto.count)
  SharedDtor();
}

void count::SharedDtor() {
}

void count::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const count& count::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_count_one_5fto_5fone_2eproto.base);
  return *internal_default_instance();
}


void count::Clear() {
// @@protoc_insertion_point(message_clear_start:oto.count)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* count::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<count*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // int32 result = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        msg->set_result(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool count::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:oto.count)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
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
  // @@protoc_insertion_point(parse_success:oto.count)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:oto.count)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void count::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:oto.count)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:oto.count)
}

::google::protobuf::uint8* count::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:oto.count)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:oto.count)
  return target;
}

size_t count::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:oto.count)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void count::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:oto.count)
  GOOGLE_DCHECK_NE(&from, this);
  const count* source =
      ::google::protobuf::DynamicCastToGenerated<count>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:oto.count)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:oto.count)
    MergeFrom(*source);
  }
}

void count::MergeFrom(const count& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:oto.count)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.result() != 0) {
    set_result(from.result());
  }
}

void count::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:oto.count)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void count::CopyFrom(const count& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:oto.count)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool count::IsInitialized() const {
  return true;
}

void count::Swap(count* other) {
  if (other == this) return;
  InternalSwap(other);
}
void count::InternalSwap(count* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(result_, other->result_);
}

::google::protobuf::Metadata count::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_one_5fto_5fone_2eproto);
  return ::file_level_metadata_one_5fto_5fone_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace oto
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::oto::addition* Arena::CreateMaybeMessage< ::oto::addition >(Arena* arena) {
  return Arena::CreateInternal< ::oto::addition >(arena);
}
template<> PROTOBUF_NOINLINE ::oto::count* Arena::CreateMaybeMessage< ::oto::count >(Arena* arena) {
  return Arena::CreateInternal< ::oto::count >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
