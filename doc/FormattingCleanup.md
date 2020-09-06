
# Formatting & cleanup integration <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [clang-format](#clang-format)
- [Include what you use (IWYU)](#include-what-you-use-iwyu)

---

## Overview

This documentation shows how to configure VS Code to enhance the look and structure of your code with extensions.

## clang-format

Installing clang-format:

    apt install clang-format

To use clang-format within VS Code, you need to install the [clang-format extension](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format) and place a `.clang-format` within your workspace root directory.

To run the formatter, press `Ctrl+Shift+I`. Maybe you have to choose the right formatter on first usage.

A sample `.clang-format` file could be found in the project root.

---

## Include what you use (IWYU)

Include what you use helps you to reduce inclusions of header files and thus can help you to speed up compilation time and also can lead to fewer recompiles.

To use it under Linux (Ubuntu/Debian) just install by:

    apt install iwyu

To run it for the currently opened file from VS Code, install the [Include what you use extension](https://marketplace.visualstudio.com/items?itemName=pokowaka.pokowaka-iwyu).

Initially you have to add at least the following entries to you `settings.json`:

    "iwyu.exe": "/usr/bin/iwyu", 
    "iwyu.compile_commands": "${workspaceFolder}/build/compile_commands.json"

<!-- TODO: extend configuration -->

![https://raw.githubusercontent.com/pokowaka/vscode-iwyu/master/images/small_demo.gif](https://raw.githubusercontent.com/pokowaka/vscode-iwyu/master/images/small_demo.gif)

For more details see [https://github.com/include-what-you-use/include-what-you-use](https://github.com/include-what-you-use/include-what-you-use)

Especially when you want to keep certain includes, this [site](https://github.com/include-what-you-use/include-what-you-use/blob/master/docs/IWYUPragmas.md) gives you an overview of pragmas that turn off IWYU.
