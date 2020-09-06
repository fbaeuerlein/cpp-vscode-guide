
# Clang Sanitizers <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [General integration with variants](#general-integration-with-variants)
- [Address Sanitizer](#address-sanitizer)
- [Memory Sanitizer](#memory-sanitizer)
- [UndefinedBehavior Sanitizer](#undefinedbehavior-sanitizer)
- [Thread Sanitizer](#thread-sanitizer)

---

## Overview

This section describes how to integrate the Clang sanitizers in your build process with VS Code.

---

## General integration with variants

With the use of `cmake-variants.yaml` it's pretty easy to add different sanitizer options to your build process.

Initially you can add a sanitizer section to your `cmake-variants.yaml` that contains a no-sanitizer configuration:

    sanitizer:
      default: NoSan # no sanitizer
      choices:
        NoSan:
          short: NoSan
          long: build without address sanitizer instrumentation

The following subsections show the use of the clang sanitizers. Simply add the configuration to the `sanitizer` section described above within the `cmake-variants.yaml`. You can see a sample file within the `.vscode/` folder of the project.

More about `cmake-variants.yaml` in the [About CMake variants](../README.md#about-cmake-variants) section.

---

## Address Sanitizer

The address sanitizer helps you to detect out-of-bound memory access, use-after-free, double frees, etc. To use the clang address sanitizer add the following snippet to the sanitizer section of the `cmake-variants.yaml`.

    ...
    choices: 
    ...
      ASan:
        short: ASan
        long: build with address sanitizer instrumentation
        settings:
          CMAKE_CXX_FLAGS: "-fsanitize=address -fno-omit-frame-pointer"
          CMAKE_C_FLAGS: "-fsanitize=address -fno-omit-frame-pointer"
          CMAKE_EXE_LINKER_FLAGS: "-fsanitize=address"

For more details see [https://clang.llvm.org/docs/AddressSanitizer.html](https://clang.llvm.org/docs/AddressSanitizer.html).

The following sections are utilizing the clang sanitizers. Some of them also available for gcc.

---

## Memory Sanitizer

The memory sanitizer helps you to find uninitialized reads.

    ...
    choices: 
    ...
      MSan:
        short: MSan
        long: build with memory sanitizer instrumentation
        settings:
          CMAKE_CXX_FLAGS: "-fsanitize=memory"
          CMAKE_C_FLAGS: "-fsanitize=memory"

For more details see [https://clang.llvm.org/docs/MemorySanitizer.html](https://clang.llvm.org/docs/MemorySanitizer.html).

---

## UndefinedBehavior Sanitizer

The undefined behavior sanitizer scans your code for occurrence of undefined behavior.

    ...
    choices: 
    ...
      UBSan:
        short: UBSan
        long: build with undefined behavior sanitizer instrumentation
        settings:
          CMAKE_CXX_FLAGS: "-fsanitize=undefined"
          CMAKE_C_FLAGS: "-fsanitize=undefined"
          CMAKE_EXE_LINKER_FLAGS: "-fsanitize=undefined"

For more details see [https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html).

For available checks see [https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#ubsan-checks](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html#ubsan-checks).

---

## Thread Sanitizer

The thread sanitizer helps you to detect data races.

    ...
    choices: 
    ...
      TSan:
        short: TSan
        long: build with thread sanitizer instrumentation
        settings:
          CMAKE_CXX_FLAGS: "-fsanitize=thread"
          CMAKE_C_FLAGS: "-fsanitize=thread"

Fore more details see: [https://clang.llvm.org/docs/ThreadSanitizer.html](https://clang.llvm.org/docs/ThreadSanitizer.html).
