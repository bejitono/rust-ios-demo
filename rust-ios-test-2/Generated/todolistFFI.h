// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, RustBuffer, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_todolist_bf87_TodoList_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull todolist_bf87_TodoList_new(
      
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_add_item(
      void*_Nonnull ptr,RustBuffer todo,
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_add_entry(
      void*_Nonnull ptr,RustBuffer entry,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_entries(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_items(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_items_copy(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_items_copy2(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_add_entries(
      void*_Nonnull ptr,RustBuffer entries,
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_add_items(
      void*_Nonnull ptr,RustBuffer items,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_last_entry(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_last(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_last_copy2(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_get_first(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_clear_item(
      void*_Nonnull ptr,RustBuffer todo,
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_TodoList_make_default(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_TodoList_hello(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_get_default_list(
      
    RustCallStatus *_Nonnull out_status
    );
void todolist_bf87_set_default_list(
      void*_Nonnull list,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer todolist_bf87_create_entry_with(
      RustBuffer todo,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_todolist_bf87_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_todolist_bf87_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_todolist_bf87_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_todolist_bf87_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );
