// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: two_sum.proto

#include "two_sum.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace test {
        template <typename>
PROTOBUF_CONSTEXPR TwoSumRequest::TwoSumRequest(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.a_)*/ 0,
      /*decltype(_impl_.b_)*/ 0,
    } {}
struct TwoSumRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TwoSumRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TwoSumRequestDefaultTypeInternal() {}
  union {
    TwoSumRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TwoSumRequestDefaultTypeInternal _TwoSumRequest_default_instance_;
        template <typename>
PROTOBUF_CONSTEXPR TwoSumResponse::TwoSumResponse(::_pbi::ConstantInitialized)
    : _impl_{
      /*decltype(_impl_._has_bits_)*/ {},
      /*decltype(_impl_._cached_size_)*/ {},
      /*decltype(_impl_.sum_)*/ 0,
    } {}
struct TwoSumResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TwoSumResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~TwoSumResponseDefaultTypeInternal() {}
  union {
    TwoSumResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TwoSumResponseDefaultTypeInternal _TwoSumResponse_default_instance_;
}  // namespace test
static ::_pb::Metadata file_level_metadata_two_5fsum_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_two_5fsum_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_two_5fsum_2eproto = nullptr;
const ::uint32_t TableStruct_two_5fsum_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::test::TwoSumRequest, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::test::TwoSumRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::test::TwoSumRequest, _impl_.a_),
    PROTOBUF_FIELD_OFFSET(::test::TwoSumRequest, _impl_.b_),
    0,
    1,
    PROTOBUF_FIELD_OFFSET(::test::TwoSumResponse, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::test::TwoSumResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::test::TwoSumResponse, _impl_.sum_),
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::test::TwoSumRequest)},
        {12, 21, -1, sizeof(::test::TwoSumResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::test::_TwoSumRequest_default_instance_._instance,
    &::test::_TwoSumResponse_default_instance_._instance,
};
const char descriptor_table_protodef_two_5fsum_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\rtwo_sum.proto\022\004test\"%\n\rTwoSumRequest\022\t"
    "\n\001a\030\001 \001(\005\022\t\n\001b\030\002 \001(\005\"\035\n\016TwoSumResponse\022\013"
    "\n\003sum\030\001 \001(\005"
};
static ::absl::once_flag descriptor_table_two_5fsum_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_two_5fsum_2eproto = {
    false,
    false,
    91,
    descriptor_table_protodef_two_5fsum_2eproto,
    "two_sum.proto",
    &descriptor_table_two_5fsum_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_two_5fsum_2eproto::offsets,
    file_level_metadata_two_5fsum_2eproto,
    file_level_enum_descriptors_two_5fsum_2eproto,
    file_level_service_descriptors_two_5fsum_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_two_5fsum_2eproto_getter() {
  return &descriptor_table_two_5fsum_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_two_5fsum_2eproto(&descriptor_table_two_5fsum_2eproto);
namespace test {
// ===================================================================

class TwoSumRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<TwoSumRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_._has_bits_);
  static void set_has_a(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_b(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

TwoSumRequest::TwoSumRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:test.TwoSumRequest)
}
TwoSumRequest::TwoSumRequest(const TwoSumRequest& from)
    : ::google::protobuf::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:test.TwoSumRequest)
}
inline void TwoSumRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.a_){0},
      decltype(_impl_.b_){0},
  };
}
TwoSumRequest::~TwoSumRequest() {
  // @@protoc_insertion_point(destructor:test.TwoSumRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TwoSumRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void TwoSumRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void TwoSumRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:test.TwoSumRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.a_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.b_) -
        reinterpret_cast<char*>(&_impl_.a_)) + sizeof(_impl_.b_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TwoSumRequest::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> TwoSumRequest::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TwoSumRequest_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional int32 b = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(TwoSumRequest, _impl_.b_), 1>(),
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.b_)}},
    // optional int32 a = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(TwoSumRequest, _impl_.a_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.a_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional int32 a = 1;
    {PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.a_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // optional int32 b = 2;
    {PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.b_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* TwoSumRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.TwoSumRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_a(), target);
  }

  // optional int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.TwoSumRequest)
  return target;
}

::size_t TwoSumRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.TwoSumRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional int32 a = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_a());
    }

    // optional int32 b = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_b());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TwoSumRequest::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    TwoSumRequest::MergeImpl
};
const ::google::protobuf::Message::ClassData*TwoSumRequest::GetClassData() const { return &_class_data_; }


void TwoSumRequest::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TwoSumRequest*>(&to_msg);
  auto& from = static_cast<const TwoSumRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:test.TwoSumRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.a_ = from._impl_.a_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.b_ = from._impl_.b_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TwoSumRequest::CopyFrom(const TwoSumRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.TwoSumRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TwoSumRequest::IsInitialized() const {
  return true;
}

void TwoSumRequest::InternalSwap(TwoSumRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.b_)
      + sizeof(TwoSumRequest::_impl_.b_)
      - PROTOBUF_FIELD_OFFSET(TwoSumRequest, _impl_.a_)>(
          reinterpret_cast<char*>(&_impl_.a_),
          reinterpret_cast<char*>(&other->_impl_.a_));
}

::google::protobuf::Metadata TwoSumRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_two_5fsum_2eproto_getter, &descriptor_table_two_5fsum_2eproto_once,
      file_level_metadata_two_5fsum_2eproto[0]);
}
// ===================================================================

class TwoSumResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<TwoSumResponse>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(TwoSumResponse, _impl_._has_bits_);
  static void set_has_sum(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

TwoSumResponse::TwoSumResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:test.TwoSumResponse)
}
TwoSumResponse::TwoSumResponse(const TwoSumResponse& from)
    : ::google::protobuf::Message(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:test.TwoSumResponse)
}
inline void TwoSumResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){},
      /*decltype(_impl_._cached_size_)*/ {},
      decltype(_impl_.sum_){0},
  };
}
TwoSumResponse::~TwoSumResponse() {
  // @@protoc_insertion_point(destructor:test.TwoSumResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void TwoSumResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}
void TwoSumResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

PROTOBUF_NOINLINE void TwoSumResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:test.TwoSumResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sum_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* TwoSumResponse::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> TwoSumResponse::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(TwoSumResponse, _impl_._has_bits_),
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_TwoSumResponse_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional int32 sum = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(TwoSumResponse, _impl_.sum_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(TwoSumResponse, _impl_.sum_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional int32 sum = 1;
    {PROTOBUF_FIELD_OFFSET(TwoSumResponse, _impl_.sum_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* TwoSumResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:test.TwoSumResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int32 sum = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_sum(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test.TwoSumResponse)
  return target;
}

::size_t TwoSumResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test.TwoSumResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int32 sum = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_sum());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData TwoSumResponse::_class_data_ = {
    ::google::protobuf::Message::CopyWithSourceCheck,
    TwoSumResponse::MergeImpl
};
const ::google::protobuf::Message::ClassData*TwoSumResponse::GetClassData() const { return &_class_data_; }


void TwoSumResponse::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<TwoSumResponse*>(&to_msg);
  auto& from = static_cast<const TwoSumResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:test.TwoSumResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_sum(from._internal_sum());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void TwoSumResponse::CopyFrom(const TwoSumResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test.TwoSumResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool TwoSumResponse::IsInitialized() const {
  return true;
}

void TwoSumResponse::InternalSwap(TwoSumResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
        swap(_impl_.sum_, other->_impl_.sum_);
}

::google::protobuf::Metadata TwoSumResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_two_5fsum_2eproto_getter, &descriptor_table_two_5fsum_2eproto_once,
      file_level_metadata_two_5fsum_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace test
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
