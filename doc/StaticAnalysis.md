
# Static analysis <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [clang-tidy](#clang-tidy)

---

## Overview

This documentation shows how to configure and run VS Code to support you with static analysis.

---

## clang-tidy

**Doing a static analysis on the fly during your coding session without any additional effort!**

![clang-tidy extension in action](images/clang-tidy.png)

The curly underlined statement was discovered by clang-tidy to be problematic (assign to nullptr).

Installing clang-tidy:

    apt install clang-tidy

Install the following extension for VS Code

<https://marketplace.visualstudio.com/items?itemName=notskm.clang-tidy>

Add to your settings.json:

    "clang-tidy.checks": [
        "bugprone-",
        "cert-",
        "clang-analyzer-",
        "cppcoreguidelines-",
        "-cppcoreguidelines-pro-type-vararg",
        "-cppcoreguidelines-pro-bounds-array-to-pointer-decay",
        "llvm-",
        "-llvm-include-order",
        "misc-",
        "modernize-",
        "-modernize-use-trailing-return-type",
        "-modernize-concat-nested-namespaces",
        "performance-",
        "readability-*"
        ],

        "clang-tidy.compilerArgs" : [ "-std=c++11" ], 
        "clang-tidy.buildPath" : "build/", 
        "clang-tidy.executable" : "clang-tidy"    

Enable/disable the checks you need accordingly. Also configure your compiler arguments.

It's also possible to use the `.clang-tidy` file (in the workspace root) to easily configure the settings for clang-tidy.

To avoid linting of "special" code:

    some_code_that_should_be_excluded_from_linting(); // NOLINT or /* NOLINT */

For details on clang-tidy, see [https://clang.llvm.org/extra/clang-tidy/](https://clang.llvm.org/extra/clang-tidy/).
