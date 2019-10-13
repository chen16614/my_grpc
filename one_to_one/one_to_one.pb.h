// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: one_to_one.proto

#ifndef PROTOBUF_INCLUDED_one_5fto_5fone_2eproto
#define PROTOBUF_INCLUDED_one_5fto_5fone_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_one_5fto_5fone_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_one_5fto_5fone_2eproto {
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
void AddDescriptors_one_5fto_5fone_2eproto();
namespace oto {
class addition;
class additionDefaultTypeInternal;
extern additionDefaultTypeInternal _addition_default_instance_;
class count;
class countDefaultTypeInternal;
extern countDefaultTypeInternal _count_default_instance_;
}  // namespace oto
namespace google {
namespace protobuf {
template<> ::oto::addition* Arena::CreateMaybeMessage<::oto::addition>(Arena*);
template<> ::oto::count* Arena::CreateMaybeMessage<::oto::count>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace oto {

// ===================================================================

class addition final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:oto.addition) */ {
 public:
  addition();
  virtual ~addition();

  addition(const addition& from);

  inline addition& operator=(const addition& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  addition(addition&& from) noexcept
    : addition() {
    *this = ::std::move(from);
  }

  inline addition& operator=(addition&& from) noexcept {
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
  static const addition& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const addition* internal_default_instance() {
    return reinterpret_cast<const addition*>(
               &_addition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(addition* other);
  friend void swap(addition& a, addition& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline addition* New() const final {
    return CreateMaybeMessage<addition>(nullptr);
  }

  addition* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<addition>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const addition& from);
  void MergeFrom(const addition& from);
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
  void InternalSwap(addition* other);
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

  // @@protoc_insertion_point(class_scope:oto.addition)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 index_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_one_5fto_5fone_2eproto;
};
// -------------------------------------------------------------------

class count final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:oto.count) */ {
 public:
  count();
  virtual ~count();

  count(const count& from);

  inline count& operator=(const count& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  count(count&& from) noexcept
    : count() {
    *this = ::std::move(from);
  }

  inline count& operator=(count&& from) noexcept {
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
  static const count& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const count* internal_default_instance() {
    return reinterpret_cast<const count*>(
               &_count_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(count* other);
  friend void swap(count& a, count& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline count* New() const final {
    return CreateMaybeMessage<count>(nullptr);
  }

  count* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<count>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const count& from);
  void MergeFrom(const count& from);
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
  void InternalSwap(count* other);
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

  // int32 result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:oto.count)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_one_5fto_5fone_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// addition

// int32 index = 1;
inline void addition::clear_index() {
  index_ = 0;
}
inline ::google::protobuf::int32 addition::index() const {
  // @@protoc_insertion_point(field_get:oto.addition.index)
  return index_;
}
inline void addition::set_index(::google::protobuf::int32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:oto.addition.index)
}

// -------------------------------------------------------------------

// count

// int32 result = 1;
inline void count::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 count::result() const {
  // @@protoc_insertion_point(field_get:oto.count.result)
  return result_;
}
inline void count::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:oto.count.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace oto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_one_5fto_5fone_2eproto