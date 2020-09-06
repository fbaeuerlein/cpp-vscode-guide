# cpp-vscode-guide <!-- omit in toc -->

A small guide for useful extensions to unleash the power of Visual Studio Code for C/C++ development. And damn, it's becoming better and better!

## Table of contents <!-- omit in toc -->

- [About the project](#about-the-project)
- [C/C++ Extension](#cc-extension)
- [GitHub integration](#github-integration)
- [Build system](#build-system)
  - [CMake](#cmake)
    - [Microsoft CMake Tools](#microsoft-cmake-tools)
    - [Support for writing CMake files](#support-for-writing-cmake-files)
- [Testing](#testing)
- [Docker](#docker)
  - [Docker extension](#docker-extension)
  - [VS Code Remote Containers](#vs-code-remote-containers)
- [Documentation](#documentation)
  - [doxygen](#doxygen)
  - [Markdown](#markdown)
- [Remote development](#remote-development)
  - [Remote SSH Extension](#remote-ssh-extension)
- [Static analysis](#static-analysis)
- [Code cleanup](#code-cleanup)
  - [Include what you use (IWYU)](#include-what-you-use-iwyu)
- [Code Coverage](#code-coverage)
- [Integrate Clang sanitizers](#integrate-clang-sanitizers)
- [Formatting](#formatting)
  - [clang-format](#clang-format)
- [Other nice extensions](#other-nice-extensions)
- [Some shortcuts and features](#some-shortcuts-and-features)
  - [Official VS Code shortcut cheat sheet](#official-vs-code-shortcut-cheat-sheet)
  - [Column selection mode](#column-selection-mode)
- [About CMake variants](#about-cmake-variants)
- [References](#references)
  - [General](#general)
  - [CMake](#cmake-1)
  - [Docker](#docker-1)

---

## About the project

This project should give an overview over some extensions and hints for C/C++ development with VS Code. There are a lot extensions around that really improve working with VCS. I want to show which of these are really valuable and give some tutorial how to use/integrate them.

Mostly i'm using CMake and Linux. So the main focus will be on this combination. Maybe i will extend this to the [Windows-Subsystem for Linux (WSL)](https://docs.microsoft.com/de-de/windows/wsl/install-win10) in future.

---

## C/C++ Extension

First of all you need the official Microsoft C/C++ extension found [here](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools).

A general introduction to develop C/C++ with VS Code under Linux could be found [here](https://code.visualstudio.com/docs/cpp/config-linux).

An official overview of editing C++ with VS Code could be found at [https://code.visualstudio.com/docs/cpp/cpp-ide](https://code.visualstudio.com/docs/cpp/cpp-ide).

---

## GitHub integration

For personal development, GitHub is a good resource for projects and a good point to store your project at. So the GitHub plugin (found [here](https://marketplace.visualstudio.com/items?itemName=GitHub.vscode-pull-request-github)) supports you working with issues and pull requests.

For more details of the plugin see [https://code.visualstudio.com/docs/editor/github](https://code.visualstudio.com/docs/editor/github).

---

## Build system

### CMake

Some nice tools and extension to help you with CMake projects.

---

#### Microsoft CMake Tools

To interact with CMake, the CMake Tools extension is there. It could be found [here](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools).

Especially the the CMake Quickstart feature, usable with the command palette (`Ctrl+Shift+P`) running **CMake: Quickstart**, is pretty nice to starting coding right away.

For details on how to setup, configure and build projects, see [https://github.com/microsoft/vscode-cmake-tools/blob/develop/docs/README.md](https://github.com/microsoft/vscode-cmake-tools/blob/develop/docs/README.md)

---

#### Support for writing CMake files

For support of writing CMakeLists files, the [CMake extension](https://marketplace.visualstudio.com/items?itemName=twxs.cmake) is pretty useful.

![twxs.cmake in action](https://raw.githubusercontent.com/twxs/vs.language.cmake/master/images/cmake1.gif)

---

## Testing

VS Code has some nice extensions to handle testing very comfortable. See the [Testing](doc/Testing.md) documentation for details.

---

## Docker

### Docker extension

The [docker extension](https://marketplace.visualstudio.com/items?itemName=ms-azuretools.vscode-docker) gives you a good insight on the current images on the system and helps you to build and manage containers.

![https://raw.githubusercontent.com/microsoft/vscode-docker/master/resources/readme/overview.gif](https://raw.githubusercontent.com/microsoft/vscode-docker/master/resources/readme/overview.gif)

For installing docker, see [https://docs.docker.com/get-docker/](https://docs.docker.com/get-docker/).

---

### VS Code Remote Containers

Developing in a container! The [VS Code Remote Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) lets you use a docker container as development environment. No more installing toolchains and dependencies! Simply write a Dockerfile and share the development environment with others and use it simply with a click out of VS Code.

<!-- ![Remote Containers](https://microsoft.github.io/vscode-remote-release/images/remote-containers-readme.gif) -->

After installation map your development folder via the command palette (`Ctrl+Shift+P`), selecting **Remote-Containers: Open Folder in Container** to a specified docker container.

See the `.devcontainer/devcontainer.json` settings file for details. It refers to the container description in `examples/Dockerfile`.

For more details, see [https://github.com/Microsoft/vscode-dev-containers](https://github.com/Microsoft/vscode-dev-containers).

---

## Documentation

### doxygen

Adding doxygen language support could be done by installing the [doxygen extension](https://marketplace.visualstudio.com/items?itemName=bbenoist.Doxygen).

To support you with automated comment templates in your code, the [Doxygen Documentation Generator](https://marketplace.visualstudio.com/items?itemName=cschlosser.doxdocgen) is very useful.

![Doxygen in action](images/doxygen.png)

To install doxygen:

    apt install doxygen

For enhanced visualization in doxygen, install graphviz.

    apt install graphviz

If you like easy visualization of customizable sequence charts, maybe mscgen is the right thing for you. You can install it with:

    apt install mscgen

To run doxygen from VS Code, the [Doxygen Runner extension](https://marketplace.visualstudio.com/items?itemName=betwo.vscode-doxygen-runner) is helpful.

Simply install the extension, add a `Doxyfile` to your workspace folder (e.g. with `doxygen -g`) and change the `settings.json` accordingly.

    "doxygen_runner.configuration_file_override": "${workspaceFolder}/Doxyfile"

Finally you can start doxygen via the command palette (`Ctrl+Shift+P`), selecting **Generate Doxygen generation**.

### Markdown

There are several markdown related extensions available. But currently a very nice one is [Markdown All in One](https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one#table-of-contents). It supports shortcuts, automated creation of TOCs and many more.

---

## Remote development

### Remote SSH Extension

If you are developing for remotely connected devices (e.g. RPi), the [Remote - SSH](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-ssh) extension saves a lot of time. It enables you to work with VS Code like you are used to work locally. The communication is done via SSH. So also autologin via certificates is possible.  

![SSH extension](images/ssh-ext.png)

---

## Static analysis

To use on-the-fly static analysis during development, see the [Static analysis](doc/StaticAnalysis.md) documentation.

## Code cleanup

This section should show some tools to do general code cleanup.

### Include what you use (IWYU)

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

---

## Code Coverage

To setup your CMake builds with coverage instrumentation and evaluate the coverage results, see the [coverage](doc/Coverage.md) documentation.

---

## Integrate Clang sanitizers

More about the integration of the Clang sanitizers could be found in the [Clang sanitizer](doc/Sanitizer.md) documentation.

---

## Formatting

### clang-format

Installing clang-format:

    apt install clang-format

To use clang-format within VS Code, you need to install the [clang-format extension](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format) and place a `.clang-format` within your workspace root directory.

To run the formatter, press `Ctrl+Shift+I`. Maybe you have to choose the right formatter on first usage.

A sample `.clang-format` file could be found in the project root.

---

## Other nice extensions

There are several, generally supporting extensions that leverage your effort in various ways.
See the [Extension](doc/Extensions.md) documentation for details on other supportive extensions that can enhance your development workflow.

---

## Some shortcuts and features

### Official VS Code shortcut cheat sheet

The basic VS Code shortcuts can be found [here](https://code.visualstudio.com/shortcuts/keyboard-shortcuts-windows.pdf)

---

### Column selection mode

That is a really cool feature, especially for refactoring/renaming tasks. So don't miss to use it with opening the command palette (`Ctrl+Shift+P`) and run **Toggle column selection mode**.

---

## About CMake variants

The `cmake-variants.yaml` is a nice tool to setup different compiler instrumentations and generally changing the flags. But there's one problem currently. If you use the same CMake definitions in different combined variants, only the last one will be taken. E.g. if you enable coverage and the address sanitizer, only one of it will work because they share the same `CMAKE_CXX_FLAGS` definition.

Another drawback is the use of the settings within a CI pipeline. So using an additional CMake include file might be a better approach. Then you can activate this over a variant definition and it it is also usable by a pipeline. I will provide an example if i got time to do it.

---

## References

### General

- More on VS Code, C/C++ & Linux: [https://code.visualstudio.com/docs/cpp/config-linux](https://code.visualstudio.com/docs/cpp/config-linux)
- Overview of C++ editing in VS Code: [https://code.visualstudio.com/docs/cpp/cpp-ide](https://code.visualstudio.com/docs/cpp/cpp-ide)

### CMake

- More on CMake variants and CMake extension: [https://code.visualstudio.com/docs/cpp/cmake-linux#_select-a-variant](https://code.visualstudio.com/docs/cpp/cmake-linux#_select-a-variantctrl)
- CTest: [https://cmake.org/cmake/help/latest/manual/ctest.1.html](https://cmake.org/cmake/help/latest/manual/ctest.1.html)

### Docker

- Installing docker: [https://docs.docker.com/get-docker/](https://docs.docker.com/get-docker/)
- Working with containers in VS Code: [https://code.visualstudio.com/docs/containers/overview](https://code.visualstudio.com/docs/containers/overview)
