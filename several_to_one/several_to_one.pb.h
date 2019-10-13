// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: several_to_one.proto

#ifndef PROTOBUF_INCLUDED_several_5fto_5fone_2eproto
#define PROTOBUF_INCLUDED_several_5fto_5fone_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_several_5fto_5fone_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_several_5fto_5fone_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_several_5fto_5fone_2eproto();
namespace sto {
class AddCount0Request;
class AddCount0RequestDefaultTypeInternal;
extern AddCount0RequestDefaultTypeInternal _AddCount0Request_default_instance_;
class ValueOfCount0;
class ValueOfCount0DefaultTypeInternal;
extern ValueOfCount0DefaultTypeInternal _ValueOfCount0_default_instance_;
}  // namespace sto
namespace google {
namespace protobuf {
template<> ::sto::AddCount0Request* Arena::CreateMaybeMessage<::sto::AddCount0Request>(Arena*);
template<> ::sto::ValueOfCount0* Arena::CreateMaybeMessage<::sto::ValueOfCount0>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace sto {

// ===================================================================

class AddCount0Request final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sto.AddCount0Request) */ {
 public:
  AddCount0Request();
  virtual ~AddCount0Request();

  AddCount0Request(const AddCount0Request& from);

  inline AddCount0Request& operator=(const AddCount0Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AddCount0Request(AddCount0Request&& from) noexcept
    : AddCount0Request() {
    *this = ::std::move(from);
  }

  inline AddCount0Request& operator=(AddCount0Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const AddCount0Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AddCount0Request* internal_default_instance() {
    return reinterpret_cast<const AddCount0Request*>(
               &_AddCount0Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AddCount0Request* other);
  friend void swap(AddCount0Request& a, AddCount0Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AddCount0Request* New() const final {
    return CreateMaybeMessage<AddCount0Request>(nullptr);
  }

  AddCount0Request* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AddCount0Request>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AddCount0Request& from);
  void MergeFrom(const AddCount0Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AddCount0Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 index = 1;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::int32 index() const;
  void set_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sto.AddCount0Request)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 index_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_several_5fto_5fone_2eproto;
};
// -------------------------------------------------------------------

class ValueOfCount0 final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sto.ValueOfCount0) */ {
 public:
  ValueOfCount0();
  virtual ~ValueOfCount0();

  ValueOfCount0(const ValueOfCount0& from);

  inline ValueOfCount0& operator=(const ValueOfCount0& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ValueOfCount0(ValueOfCount0&& from) noexcept
    : ValueOfCount0() {
    *this = ::std::move(from);
  }

  inline ValueOfCount0& operator=(ValueOfCount0&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ValueOfCount0& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ValueOfCount0* internal_default_instance() {
    return reinterpret_cast<const ValueOfCount0*>(
               &_ValueOfCount0_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ValueOfCount0* other);
  friend void swap(ValueOfCount0& a, ValueOfCount0& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ValueOfCount0* New() const final {
    return CreateMaybeMessage<ValueOfCount0>(nullptr);
  }

  ValueOfCount0* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ValueOfCount0>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ValueOfCount0& from);
  void MergeFrom(const ValueOfCount0& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ValueOfCount0* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 value0 = 1;
  void clear_value0();
  static const int kValue0FieldNumber = 1;
  ::google::protobuf::int32 value0() const;
  void set_value0(::google::protobuf::int32 value);

  // int32 value1 = 2;
  void clear_value1();
  static const int kValue1FieldNumber = 2;
  ::google::protobuf::int32 value1() const;
  void set_value1(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sto.ValueOfCount0)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 value0_;
  ::google::protobuf::int32 value1_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_several_5fto_5fone_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AddCount0Request

// int32 index = 1;
inline void AddCount0Request::clear_index() {
  index_ = 0;
}
inline ::google::protobuf::int32 AddCount0Request::index() const {
  // @@protoc_insertion_point(field_get:sto.AddCount0Request.index)
  return index_;
}
inline void AddCount0Request::set_index(::google::protobuf::int32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:sto.AddCount0Request.index)
}

// -------------------------------------------------------------------

// ValueOfCount0

// int32 value0 = 1;
inline void ValueOfCount0::clear_value0() {
  value0_ = 0;
}
inline ::google::protobuf::int32 ValueOfCount0::value0() const {
  // @@protoc_insertion_point(field_get:sto.ValueOfCount0.value0)
  return value0_;
}
inline void ValueOfCount0::set_value0(::google::protobuf::int32 value) {
  
  value0_ = value;
  // @@protoc_insertion_point(field_set:sto.ValueOfCount0.value0)
}

// int32 value1 = 2;
inline void ValueOfCount0::clear_value1() {
  value1_ = 0;
}
inline ::google::protobuf::int32 ValueOfCount0::value1() const {
  // @@protoc_insertion_point(field_get:sto.ValueOfCount0.value1)
  return value1_;
}
inline void ValueOfCount0::set_value1(::google::protobuf::int32 value) {
  
  value1_ = value;
  // @@protoc_insertion_point(field_set:sto.ValueOfCount0.value1)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_several_5fto_5fone_2eproto