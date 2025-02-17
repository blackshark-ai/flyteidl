// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/admin/cluster_assignment.proto

#ifndef PROTOBUF_INCLUDED_flyteidl_2fadmin_2fcluster_5fassignment_2eproto
#define PROTOBUF_INCLUDED_flyteidl_2fadmin_2fcluster_5fassignment_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_flyteidl_2fadmin_2fcluster_5fassignment_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_flyteidl_2fadmin_2fcluster_5fassignment_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_flyteidl_2fadmin_2fcluster_5fassignment_2eproto();
namespace flyteidl {
namespace admin {
class Affinity;
class AffinityDefaultTypeInternal;
extern AffinityDefaultTypeInternal _Affinity_default_instance_;
class ClusterAssignment;
class ClusterAssignmentDefaultTypeInternal;
extern ClusterAssignmentDefaultTypeInternal _ClusterAssignment_default_instance_;
class Selector;
class SelectorDefaultTypeInternal;
extern SelectorDefaultTypeInternal _Selector_default_instance_;
class Toleration;
class TolerationDefaultTypeInternal;
extern TolerationDefaultTypeInternal _Toleration_default_instance_;
}  // namespace admin
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> ::flyteidl::admin::Affinity* Arena::CreateMaybeMessage<::flyteidl::admin::Affinity>(Arena*);
template<> ::flyteidl::admin::ClusterAssignment* Arena::CreateMaybeMessage<::flyteidl::admin::ClusterAssignment>(Arena*);
template<> ::flyteidl::admin::Selector* Arena::CreateMaybeMessage<::flyteidl::admin::Selector>(Arena*);
template<> ::flyteidl::admin::Toleration* Arena::CreateMaybeMessage<::flyteidl::admin::Toleration>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace flyteidl {
namespace admin {

enum Selector_Operator {
  Selector_Operator_EQUALS = 0,
  Selector_Operator_NOT_EQUALS = 1,
  Selector_Operator_IN = 2,
  Selector_Operator_NOT_IN = 3,
  Selector_Operator_EXISTS = 4,
  Selector_Operator_Selector_Operator_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Selector_Operator_Selector_Operator_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Selector_Operator_IsValid(int value);
const Selector_Operator Selector_Operator_Operator_MIN = Selector_Operator_EQUALS;
const Selector_Operator Selector_Operator_Operator_MAX = Selector_Operator_EXISTS;
const int Selector_Operator_Operator_ARRAYSIZE = Selector_Operator_Operator_MAX + 1;

const ::google::protobuf::EnumDescriptor* Selector_Operator_descriptor();
inline const ::std::string& Selector_Operator_Name(Selector_Operator value) {
  return ::google::protobuf::internal::NameOfEnum(
    Selector_Operator_descriptor(), value);
}
inline bool Selector_Operator_Parse(
    const ::std::string& name, Selector_Operator* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Selector_Operator>(
    Selector_Operator_descriptor(), name, value);
}
// ===================================================================

class ClusterAssignment final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.ClusterAssignment) */ {
 public:
  ClusterAssignment();
  virtual ~ClusterAssignment();

  ClusterAssignment(const ClusterAssignment& from);

  inline ClusterAssignment& operator=(const ClusterAssignment& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ClusterAssignment(ClusterAssignment&& from) noexcept
    : ClusterAssignment() {
    *this = ::std::move(from);
  }

  inline ClusterAssignment& operator=(ClusterAssignment&& from) noexcept {
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
  static const ClusterAssignment& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClusterAssignment* internal_default_instance() {
    return reinterpret_cast<const ClusterAssignment*>(
               &_ClusterAssignment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ClusterAssignment* other);
  friend void swap(ClusterAssignment& a, ClusterAssignment& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClusterAssignment* New() const final {
    return CreateMaybeMessage<ClusterAssignment>(nullptr);
  }

  ClusterAssignment* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ClusterAssignment>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ClusterAssignment& from);
  void MergeFrom(const ClusterAssignment& from);
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
  void InternalSwap(ClusterAssignment* other);
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

  // .flyteidl.admin.Affinity affinity = 1;
  bool has_affinity() const;
  void clear_affinity();
  static const int kAffinityFieldNumber = 1;
  const ::flyteidl::admin::Affinity& affinity() const;
  ::flyteidl::admin::Affinity* release_affinity();
  ::flyteidl::admin::Affinity* mutable_affinity();
  void set_allocated_affinity(::flyteidl::admin::Affinity* affinity);

  // .flyteidl.admin.Toleration toleration = 2;
  bool has_toleration() const;
  void clear_toleration();
  static const int kTolerationFieldNumber = 2;
  const ::flyteidl::admin::Toleration& toleration() const;
  ::flyteidl::admin::Toleration* release_toleration();
  ::flyteidl::admin::Toleration* mutable_toleration();
  void set_allocated_toleration(::flyteidl::admin::Toleration* toleration);

  // @@protoc_insertion_point(class_scope:flyteidl.admin.ClusterAssignment)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::flyteidl::admin::Affinity* affinity_;
  ::flyteidl::admin::Toleration* toleration_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fcluster_5fassignment_2eproto;
};
// -------------------------------------------------------------------

class Affinity final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.Affinity) */ {
 public:
  Affinity();
  virtual ~Affinity();

  Affinity(const Affinity& from);

  inline Affinity& operator=(const Affinity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Affinity(Affinity&& from) noexcept
    : Affinity() {
    *this = ::std::move(from);
  }

  inline Affinity& operator=(Affinity&& from) noexcept {
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
  static const Affinity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Affinity* internal_default_instance() {
    return reinterpret_cast<const Affinity*>(
               &_Affinity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Affinity* other);
  friend void swap(Affinity& a, Affinity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Affinity* New() const final {
    return CreateMaybeMessage<Affinity>(nullptr);
  }

  Affinity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Affinity>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Affinity& from);
  void MergeFrom(const Affinity& from);
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
  void InternalSwap(Affinity* other);
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

  // repeated .flyteidl.admin.Selector selectors = 1;
  int selectors_size() const;
  void clear_selectors();
  static const int kSelectorsFieldNumber = 1;
  ::flyteidl::admin::Selector* mutable_selectors(int index);
  ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >*
      mutable_selectors();
  const ::flyteidl::admin::Selector& selectors(int index) const;
  ::flyteidl::admin::Selector* add_selectors();
  const ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >&
      selectors() const;

  // @@protoc_insertion_point(class_scope:flyteidl.admin.Affinity)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector > selectors_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fcluster_5fassignment_2eproto;
};
// -------------------------------------------------------------------

class Toleration final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.Toleration) */ {
 public:
  Toleration();
  virtual ~Toleration();

  Toleration(const Toleration& from);

  inline Toleration& operator=(const Toleration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Toleration(Toleration&& from) noexcept
    : Toleration() {
    *this = ::std::move(from);
  }

  inline Toleration& operator=(Toleration&& from) noexcept {
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
  static const Toleration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Toleration* internal_default_instance() {
    return reinterpret_cast<const Toleration*>(
               &_Toleration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(Toleration* other);
  friend void swap(Toleration& a, Toleration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Toleration* New() const final {
    return CreateMaybeMessage<Toleration>(nullptr);
  }

  Toleration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Toleration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Toleration& from);
  void MergeFrom(const Toleration& from);
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
  void InternalSwap(Toleration* other);
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

  // repeated .flyteidl.admin.Selector selectors = 1;
  int selectors_size() const;
  void clear_selectors();
  static const int kSelectorsFieldNumber = 1;
  ::flyteidl::admin::Selector* mutable_selectors(int index);
  ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >*
      mutable_selectors();
  const ::flyteidl::admin::Selector& selectors(int index) const;
  ::flyteidl::admin::Selector* add_selectors();
  const ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >&
      selectors() const;

  // @@protoc_insertion_point(class_scope:flyteidl.admin.Toleration)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector > selectors_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fcluster_5fassignment_2eproto;
};
// -------------------------------------------------------------------

class Selector final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:flyteidl.admin.Selector) */ {
 public:
  Selector();
  virtual ~Selector();

  Selector(const Selector& from);

  inline Selector& operator=(const Selector& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Selector(Selector&& from) noexcept
    : Selector() {
    *this = ::std::move(from);
  }

  inline Selector& operator=(Selector&& from) noexcept {
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
  static const Selector& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Selector* internal_default_instance() {
    return reinterpret_cast<const Selector*>(
               &_Selector_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(Selector* other);
  friend void swap(Selector& a, Selector& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Selector* New() const final {
    return CreateMaybeMessage<Selector>(nullptr);
  }

  Selector* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Selector>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Selector& from);
  void MergeFrom(const Selector& from);
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
  void InternalSwap(Selector* other);
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

  typedef Selector_Operator Operator;
  static const Operator EQUALS =
    Selector_Operator_EQUALS;
  static const Operator NOT_EQUALS =
    Selector_Operator_NOT_EQUALS;
  static const Operator IN =
    Selector_Operator_IN;
  static const Operator NOT_IN =
    Selector_Operator_NOT_IN;
  static const Operator EXISTS =
    Selector_Operator_EXISTS;
  static inline bool Operator_IsValid(int value) {
    return Selector_Operator_IsValid(value);
  }
  static const Operator Operator_MIN =
    Selector_Operator_Operator_MIN;
  static const Operator Operator_MAX =
    Selector_Operator_Operator_MAX;
  static const int Operator_ARRAYSIZE =
    Selector_Operator_Operator_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Operator_descriptor() {
    return Selector_Operator_descriptor();
  }
  static inline const ::std::string& Operator_Name(Operator value) {
    return Selector_Operator_Name(value);
  }
  static inline bool Operator_Parse(const ::std::string& name,
      Operator* value) {
    return Selector_Operator_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated string value = 2;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value(int index) const;
  ::std::string* mutable_value(int index);
  void set_value(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_value(int index, ::std::string&& value);
  #endif
  void set_value(int index, const char* value);
  void set_value(int index, const char* value, size_t size);
  ::std::string* add_value();
  void add_value(const ::std::string& value);
  #if LANG_CXX11
  void add_value(::std::string&& value);
  #endif
  void add_value(const char* value);
  void add_value(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField<::std::string>& value() const;
  ::google::protobuf::RepeatedPtrField<::std::string>* mutable_value();

  // string key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const char* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // .flyteidl.admin.Selector.Operator operator = 3;
  void clear_operator_();
  static const int kOperatorFieldNumber = 3;
  ::flyteidl::admin::Selector_Operator operator_() const;
  void set_operator_(::flyteidl::admin::Selector_Operator value);

  // @@protoc_insertion_point(class_scope:flyteidl.admin.Selector)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField<::std::string> value_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  int operator__;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_flyteidl_2fadmin_2fcluster_5fassignment_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClusterAssignment

// .flyteidl.admin.Affinity affinity = 1;
inline bool ClusterAssignment::has_affinity() const {
  return this != internal_default_instance() && affinity_ != nullptr;
}
inline void ClusterAssignment::clear_affinity() {
  if (GetArenaNoVirtual() == nullptr && affinity_ != nullptr) {
    delete affinity_;
  }
  affinity_ = nullptr;
}
inline const ::flyteidl::admin::Affinity& ClusterAssignment::affinity() const {
  const ::flyteidl::admin::Affinity* p = affinity_;
  // @@protoc_insertion_point(field_get:flyteidl.admin.ClusterAssignment.affinity)
  return p != nullptr ? *p : *reinterpret_cast<const ::flyteidl::admin::Affinity*>(
      &::flyteidl::admin::_Affinity_default_instance_);
}
inline ::flyteidl::admin::Affinity* ClusterAssignment::release_affinity() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ClusterAssignment.affinity)
  
  ::flyteidl::admin::Affinity* temp = affinity_;
  affinity_ = nullptr;
  return temp;
}
inline ::flyteidl::admin::Affinity* ClusterAssignment::mutable_affinity() {
  
  if (affinity_ == nullptr) {
    auto* p = CreateMaybeMessage<::flyteidl::admin::Affinity>(GetArenaNoVirtual());
    affinity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ClusterAssignment.affinity)
  return affinity_;
}
inline void ClusterAssignment::set_allocated_affinity(::flyteidl::admin::Affinity* affinity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete affinity_;
  }
  if (affinity) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      affinity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, affinity, submessage_arena);
    }
    
  } else {
    
  }
  affinity_ = affinity;
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ClusterAssignment.affinity)
}

// .flyteidl.admin.Toleration toleration = 2;
inline bool ClusterAssignment::has_toleration() const {
  return this != internal_default_instance() && toleration_ != nullptr;
}
inline void ClusterAssignment::clear_toleration() {
  if (GetArenaNoVirtual() == nullptr && toleration_ != nullptr) {
    delete toleration_;
  }
  toleration_ = nullptr;
}
inline const ::flyteidl::admin::Toleration& ClusterAssignment::toleration() const {
  const ::flyteidl::admin::Toleration* p = toleration_;
  // @@protoc_insertion_point(field_get:flyteidl.admin.ClusterAssignment.toleration)
  return p != nullptr ? *p : *reinterpret_cast<const ::flyteidl::admin::Toleration*>(
      &::flyteidl::admin::_Toleration_default_instance_);
}
inline ::flyteidl::admin::Toleration* ClusterAssignment::release_toleration() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.ClusterAssignment.toleration)
  
  ::flyteidl::admin::Toleration* temp = toleration_;
  toleration_ = nullptr;
  return temp;
}
inline ::flyteidl::admin::Toleration* ClusterAssignment::mutable_toleration() {
  
  if (toleration_ == nullptr) {
    auto* p = CreateMaybeMessage<::flyteidl::admin::Toleration>(GetArenaNoVirtual());
    toleration_ = p;
  }
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.ClusterAssignment.toleration)
  return toleration_;
}
inline void ClusterAssignment::set_allocated_toleration(::flyteidl::admin::Toleration* toleration) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete toleration_;
  }
  if (toleration) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      toleration = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, toleration, submessage_arena);
    }
    
  } else {
    
  }
  toleration_ = toleration;
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.ClusterAssignment.toleration)
}

// -------------------------------------------------------------------

// Affinity

// repeated .flyteidl.admin.Selector selectors = 1;
inline int Affinity::selectors_size() const {
  return selectors_.size();
}
inline void Affinity::clear_selectors() {
  selectors_.Clear();
}
inline ::flyteidl::admin::Selector* Affinity::mutable_selectors(int index) {
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.Affinity.selectors)
  return selectors_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >*
Affinity::mutable_selectors() {
  // @@protoc_insertion_point(field_mutable_list:flyteidl.admin.Affinity.selectors)
  return &selectors_;
}
inline const ::flyteidl::admin::Selector& Affinity::selectors(int index) const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.Affinity.selectors)
  return selectors_.Get(index);
}
inline ::flyteidl::admin::Selector* Affinity::add_selectors() {
  // @@protoc_insertion_point(field_add:flyteidl.admin.Affinity.selectors)
  return selectors_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >&
Affinity::selectors() const {
  // @@protoc_insertion_point(field_list:flyteidl.admin.Affinity.selectors)
  return selectors_;
}

// -------------------------------------------------------------------

// Toleration

// repeated .flyteidl.admin.Selector selectors = 1;
inline int Toleration::selectors_size() const {
  return selectors_.size();
}
inline void Toleration::clear_selectors() {
  selectors_.Clear();
}
inline ::flyteidl::admin::Selector* Toleration::mutable_selectors(int index) {
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.Toleration.selectors)
  return selectors_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >*
Toleration::mutable_selectors() {
  // @@protoc_insertion_point(field_mutable_list:flyteidl.admin.Toleration.selectors)
  return &selectors_;
}
inline const ::flyteidl::admin::Selector& Toleration::selectors(int index) const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.Toleration.selectors)
  return selectors_.Get(index);
}
inline ::flyteidl::admin::Selector* Toleration::add_selectors() {
  // @@protoc_insertion_point(field_add:flyteidl.admin.Toleration.selectors)
  return selectors_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::flyteidl::admin::Selector >&
Toleration::selectors() const {
  // @@protoc_insertion_point(field_list:flyteidl.admin.Toleration.selectors)
  return selectors_;
}

// -------------------------------------------------------------------

// Selector

// string key = 1;
inline void Selector::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Selector::key() const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.Selector.key)
  return key_.GetNoArena();
}
inline void Selector::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:flyteidl.admin.Selector.key)
}
#if LANG_CXX11
inline void Selector::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:flyteidl.admin.Selector.key)
}
#endif
inline void Selector::set_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:flyteidl.admin.Selector.key)
}
inline void Selector::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:flyteidl.admin.Selector.key)
}
inline ::std::string* Selector::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.Selector.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Selector::release_key() {
  // @@protoc_insertion_point(field_release:flyteidl.admin.Selector.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Selector::set_allocated_key(::std::string* key) {
  if (key != nullptr) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:flyteidl.admin.Selector.key)
}

// repeated string value = 2;
inline int Selector::value_size() const {
  return value_.size();
}
inline void Selector::clear_value() {
  value_.Clear();
}
inline const ::std::string& Selector::value(int index) const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.Selector.value)
  return value_.Get(index);
}
inline ::std::string* Selector::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:flyteidl.admin.Selector.value)
  return value_.Mutable(index);
}
inline void Selector::set_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:flyteidl.admin.Selector.value)
  value_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Selector::set_value(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:flyteidl.admin.Selector.value)
  value_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Selector::set_value(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:flyteidl.admin.Selector.value)
}
inline void Selector::set_value(int index, const char* value, size_t size) {
  value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:flyteidl.admin.Selector.value)
}
inline ::std::string* Selector::add_value() {
  // @@protoc_insertion_point(field_add_mutable:flyteidl.admin.Selector.value)
  return value_.Add();
}
inline void Selector::add_value(const ::std::string& value) {
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:flyteidl.admin.Selector.value)
}
#if LANG_CXX11
inline void Selector::add_value(::std::string&& value) {
  value_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:flyteidl.admin.Selector.value)
}
#endif
inline void Selector::add_value(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:flyteidl.admin.Selector.value)
}
inline void Selector::add_value(const char* value, size_t size) {
  value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:flyteidl.admin.Selector.value)
}
inline const ::google::protobuf::RepeatedPtrField<::std::string>&
Selector::value() const {
  // @@protoc_insertion_point(field_list:flyteidl.admin.Selector.value)
  return value_;
}
inline ::google::protobuf::RepeatedPtrField<::std::string>*
Selector::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:flyteidl.admin.Selector.value)
  return &value_;
}

// .flyteidl.admin.Selector.Operator operator = 3;
inline void Selector::clear_operator_() {
  operator__ = 0;
}
inline ::flyteidl::admin::Selector_Operator Selector::operator_() const {
  // @@protoc_insertion_point(field_get:flyteidl.admin.Selector.operator)
  return static_cast< ::flyteidl::admin::Selector_Operator >(operator__);
}
inline void Selector::set_operator_(::flyteidl::admin::Selector_Operator value) {
  
  operator__ = value;
  // @@protoc_insertion_point(field_set:flyteidl.admin.Selector.operator)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace admin
}  // namespace flyteidl

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::flyteidl::admin::Selector_Operator> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::flyteidl::admin::Selector_Operator>() {
  return ::flyteidl::admin::Selector_Operator_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_flyteidl_2fadmin_2fcluster_5fassignment_2eproto
