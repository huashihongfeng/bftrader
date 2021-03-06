// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/maps.proto

#ifndef PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
namespace maps {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();

class MapIn;
class MapM;
class MapOut;

// ===================================================================

class MapIn : public ::google::protobuf::Message {
 public:
  MapIn();
  virtual ~MapIn();

  MapIn(const MapIn& from);

  inline MapIn& operator=(const MapIn& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapIn& default_instance();

  void Swap(MapIn* other);

  // implements Message ----------------------------------------------

  inline MapIn* New() const { return New(NULL); }

  MapIn* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapIn& from);
  void MergeFrom(const MapIn& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MapIn* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // optional string other = 1;
  void clear_other();
  static const int kOtherFieldNumber = 1;
  const ::std::string& other() const;
  void set_other(const ::std::string& value);
  void set_other(const char* value);
  void set_other(const char* value, size_t size);
  ::std::string* mutable_other();
  ::std::string* release_other();
  void set_allocated_other(::std::string* other);

  // repeated string things = 2;
  int things_size() const;
  void clear_things();
  static const int kThingsFieldNumber = 2;
  const ::std::string& things(int index) const;
  ::std::string* mutable_things(int index);
  void set_things(int index, const ::std::string& value);
  void set_things(int index, const char* value);
  void set_things(int index, const char* value, size_t size);
  ::std::string* add_things();
  void add_things(const ::std::string& value);
  void add_things(const char* value);
  void add_things(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& things() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_things();

  // map<string, string> map_input = 3;
  int map_input_size() const;
  void clear_map_input();
  static const int kMapInputFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      map_input() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_map_input();

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.maps.MapIn)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr other_;
  ::google::protobuf::RepeatedPtrField< ::std::string> things_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MapIn_MapInputEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > map_input_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();

  void InitAsDefaultInstance();
  static MapIn* default_instance_;
};
// -------------------------------------------------------------------

class MapOut : public ::google::protobuf::Message {
 public:
  MapOut();
  virtual ~MapOut();

  MapOut(const MapOut& from);

  inline MapOut& operator=(const MapOut& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapOut& default_instance();

  void Swap(MapOut* other);

  // implements Message ----------------------------------------------

  inline MapOut* New() const { return New(NULL); }

  MapOut* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapOut& from);
  void MergeFrom(const MapOut& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MapOut* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .google.protobuf.testing.maps.MapM> map1 = 1;
  int map1_size() const;
  void clear_map1();
  static const int kMap1FieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapM >&
      map1() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapM >*
      mutable_map1();

  // map<string, .google.protobuf.testing.maps.MapOut> map2 = 2;
  int map2_size() const;
  void clear_map2();
  static const int kMap2FieldNumber = 2;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapOut >&
      map2() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapOut >*
      mutable_map2();

  // map<int32, string> map3 = 3;
  int map3_size() const;
  void clear_map3();
  static const int kMap3FieldNumber = 3;
  const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
      map3() const;
  ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
      mutable_map3();

  // optional string bar = 4;
  void clear_bar();
  static const int kBarFieldNumber = 4;
  const ::std::string& bar() const;
  void set_bar(const ::std::string& value);
  void set_bar(const char* value);
  void set_bar(const char* value, size_t size);
  ::std::string* mutable_bar();
  ::std::string* release_bar();
  void set_allocated_bar(::std::string* bar);

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.maps.MapOut)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::google::protobuf::testing::maps::MapM,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      MapOut_Map1Entry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::google::protobuf::testing::maps::MapM,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > map1_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::google::protobuf::testing::maps::MapOut,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      MapOut_Map2Entry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::google::protobuf::testing::maps::MapOut,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > map2_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::google::protobuf::int32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 >
      MapOut_Map3Entry;
  ::google::protobuf::internal::MapField<
      ::google::protobuf::int32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > map3_;
  ::google::protobuf::internal::ArenaStringPtr bar_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();

  void InitAsDefaultInstance();
  static MapOut* default_instance_;
};
// -------------------------------------------------------------------

class MapM : public ::google::protobuf::Message {
 public:
  MapM();
  virtual ~MapM();

  MapM(const MapM& from);

  inline MapM& operator=(const MapM& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapM& default_instance();

  void Swap(MapM* other);

  // implements Message ----------------------------------------------

  inline MapM* New() const { return New(NULL); }

  MapM* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapM& from);
  void MergeFrom(const MapM& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MapM* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string foo = 1;
  void clear_foo();
  static const int kFooFieldNumber = 1;
  const ::std::string& foo() const;
  void set_foo(const ::std::string& value);
  void set_foo(const char* value);
  void set_foo(const char* value, size_t size);
  ::std::string* mutable_foo();
  ::std::string* release_foo();
  void set_allocated_foo(::std::string* foo);

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.maps.MapM)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr foo_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto();

  void InitAsDefaultInstance();
  static MapM* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MapIn

// optional string other = 1;
inline void MapIn::clear_other() {
  other_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MapIn::other() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.maps.MapIn.other)
  return other_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapIn::set_other(const ::std::string& value) {
  
  other_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.maps.MapIn.other)
}
inline void MapIn::set_other(const char* value) {
  
  other_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.maps.MapIn.other)
}
inline void MapIn::set_other(const char* value, size_t size) {
  
  other_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.maps.MapIn.other)
}
inline ::std::string* MapIn::mutable_other() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.maps.MapIn.other)
  return other_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MapIn::release_other() {
  
  return other_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapIn::set_allocated_other(::std::string* other) {
  if (other != NULL) {
    
  } else {
    
  }
  other_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), other);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.maps.MapIn.other)
}

// repeated string things = 2;
inline int MapIn::things_size() const {
  return things_.size();
}
inline void MapIn::clear_things() {
  things_.Clear();
}
inline const ::std::string& MapIn::things(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.maps.MapIn.things)
  return things_.Get(index);
}
inline ::std::string* MapIn::mutable_things(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.maps.MapIn.things)
  return things_.Mutable(index);
}
inline void MapIn::set_things(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.testing.maps.MapIn.things)
  things_.Mutable(index)->assign(value);
}
inline void MapIn::set_things(int index, const char* value) {
  things_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.maps.MapIn.things)
}
inline void MapIn::set_things(int index, const char* value, size_t size) {
  things_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.maps.MapIn.things)
}
inline ::std::string* MapIn::add_things() {
  return things_.Add();
}
inline void MapIn::add_things(const ::std::string& value) {
  things_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.testing.maps.MapIn.things)
}
inline void MapIn::add_things(const char* value) {
  things_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.testing.maps.MapIn.things)
}
inline void MapIn::add_things(const char* value, size_t size) {
  things_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.testing.maps.MapIn.things)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MapIn::things() const {
  // @@protoc_insertion_point(field_list:google.protobuf.testing.maps.MapIn.things)
  return things_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MapIn::mutable_things() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.testing.maps.MapIn.things)
  return &things_;
}

// map<string, string> map_input = 3;
inline int MapIn::map_input_size() const {
  return map_input_.size();
}
inline void MapIn::clear_map_input() {
  map_input_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
MapIn::map_input() const {
  // @@protoc_insertion_point(field_map:google.protobuf.testing.maps.MapIn.map_input)
  return map_input_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
MapIn::mutable_map_input() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.testing.maps.MapIn.map_input)
  return map_input_.MutableMap();
}

// -------------------------------------------------------------------

// MapOut

// map<string, .google.protobuf.testing.maps.MapM> map1 = 1;
inline int MapOut::map1_size() const {
  return map1_.size();
}
inline void MapOut::clear_map1() {
  map1_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapM >&
MapOut::map1() const {
  // @@protoc_insertion_point(field_map:google.protobuf.testing.maps.MapOut.map1)
  return map1_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapM >*
MapOut::mutable_map1() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.testing.maps.MapOut.map1)
  return map1_.MutableMap();
}

// map<string, .google.protobuf.testing.maps.MapOut> map2 = 2;
inline int MapOut::map2_size() const {
  return map2_.size();
}
inline void MapOut::clear_map2() {
  map2_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapOut >&
MapOut::map2() const {
  // @@protoc_insertion_point(field_map:google.protobuf.testing.maps.MapOut.map2)
  return map2_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::testing::maps::MapOut >*
MapOut::mutable_map2() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.testing.maps.MapOut.map2)
  return map2_.MutableMap();
}

// map<int32, string> map3 = 3;
inline int MapOut::map3_size() const {
  return map3_.size();
}
inline void MapOut::clear_map3() {
  map3_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
MapOut::map3() const {
  // @@protoc_insertion_point(field_map:google.protobuf.testing.maps.MapOut.map3)
  return map3_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
MapOut::mutable_map3() {
  // @@protoc_insertion_point(field_mutable_map:google.protobuf.testing.maps.MapOut.map3)
  return map3_.MutableMap();
}

// optional string bar = 4;
inline void MapOut::clear_bar() {
  bar_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MapOut::bar() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.maps.MapOut.bar)
  return bar_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapOut::set_bar(const ::std::string& value) {
  
  bar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.maps.MapOut.bar)
}
inline void MapOut::set_bar(const char* value) {
  
  bar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.maps.MapOut.bar)
}
inline void MapOut::set_bar(const char* value, size_t size) {
  
  bar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.maps.MapOut.bar)
}
inline ::std::string* MapOut::mutable_bar() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.maps.MapOut.bar)
  return bar_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MapOut::release_bar() {
  
  return bar_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapOut::set_allocated_bar(::std::string* bar) {
  if (bar != NULL) {
    
  } else {
    
  }
  bar_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bar);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.maps.MapOut.bar)
}

// -------------------------------------------------------------------

// MapM

// optional string foo = 1;
inline void MapM::clear_foo() {
  foo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MapM::foo() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.maps.MapM.foo)
  return foo_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapM::set_foo(const ::std::string& value) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.maps.MapM.foo)
}
inline void MapM::set_foo(const char* value) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.maps.MapM.foo)
}
inline void MapM::set_foo(const char* value, size_t size) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.maps.MapM.foo)
}
inline ::std::string* MapM::mutable_foo() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.maps.MapM.foo)
  return foo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MapM::release_foo() {
  
  return foo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MapM::set_allocated_foo(::std::string* foo) {
  if (foo != NULL) {
    
  } else {
    
  }
  foo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), foo);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.maps.MapM.foo)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace maps
}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fmaps_2eproto__INCLUDED
