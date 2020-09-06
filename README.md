# cpp-vscode-guide <!-- omit in toc -->

A small guide for useful extensions to unleash the power of Visual Studio Code for C/C++ development. And damn, it's becoming better and better!

## Table of contents <!-- omit in toc -->

- [About the project](#about-the-project)
- [C/C++ Extension](#cc-extension)
- [CMake](#cmake)
- [Testing](#testing)
- [Docker](#docker)
- [Documentation](#documentation)
- [Remote development](#remote-development)
  - [Remote SSH Extension](#remote-ssh-extension)
- [Static analysis](#static-analysis)
- [Code formatting & cleanup](#code-formatting--cleanup)
- [Code Coverage](#code-coverage)
- [Integrate Clang sanitizers](#integrate-clang-sanitizers)
- [GitHub integration](#github-integration)
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

## CMake

How to manage CMake projects with VS Code could be found in the [CMake](doc/CMake.md) section.

---

## Testing

VS Code has some nice extensions to handle testing very comfortable. See the [Testing](doc/Testing.md) documentation for details.

---

## Docker

The [docker](doc/Docker.md) section describes how to use extensions for building, managing and running containers from VS Code.

---

## Documentation

Some extensions can greatly enhance your documentation capabilities. See the [documentation](doc/Documentation.md) section for details.

---

## Remote development

### Remote SSH Extension

If you are developing for remotely connected devices (e.g. RPi), the [Remote - SSH](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-ssh) extension saves a lot of time. It enables you to work with VS Code like you are used to work locally. The communication is done via SSH. So also autologin via certificates is possible.  

![SSH extension](images/ssh-ext.png)

---

## Static analysis

To use on-the-fly static analysis during development, see the [Static analysis](doc/StaticAnalysis.md) documentation.

---

## Code formatting & cleanup

The [Code formatting & cleanup](doc/FormattingCleanup.md) documentation shows some tools to do general automated cleanup and formatting of you're code.

---

## Code Coverage

To setup your CMake builds with coverage instrumentation and evaluate the coverage results, see the [coverage](doc/Coverage.md) documentation.

---

## Integrate Clang sanitizers

More about the integration of the Clang sanitizers could be found in the [Clang sanitizer](doc/Sanitizer.md) documentation.

---

## GitHub integration

For personal development, GitHub is a good resource for projects and a good point to store your project at. So the GitHub plugin (found [here](https://marketplace.visualstudio.com/items?itemName=GitHub.vscode-pull-request-github)) supports you working with issues and pull requests.

For more details of the plugin see [https://code.visualstudio.com/docs/editor/github](https://code.visualstudio.com/docs/editor/github).

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
