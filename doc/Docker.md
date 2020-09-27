
# Docker integration & extension <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [Docker extension](#docker-extension)
- [VS Code Remote Containers](#vs-code-remote-containers)
- [References](#references)
---

## Overview

Tools that support you managing and maintaining docker images or building your project directly within a container.

---

## Docker extension

The [docker extension](https://marketplace.visualstudio.com/items?itemName=ms-azuretools.vscode-docker) gives you a good insight on the current images on the system and helps you to build and manage containers. Also running the images is pretty easy that way.

![https://raw.githubusercontent.com/microsoft/vscode-docker/master/resources/readme/overview.gif](https://raw.githubusercontent.com/microsoft/vscode-docker/master/resources/readme/overview.gif)

For installing docker, see [https://docs.docker.com/get-docker/](https://docs.docker.com/get-docker/).

---

## VS Code Remote Containers

Developing in a container! The [VS Code Remote Containers extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) lets you use a docker container as development environment. No more installing toolchains and dependencies! Simply write a Dockerfile and share the development environment with others and use it simply with a click out of VS Code.

<!-- ![Remote Containers](https://microsoft.github.io/vscode-remote-release/images/remote-containers-readme.gif) -->

After installation map your development folder via the command palette (`Ctrl+Shift+P`), selecting **Remote-Containers: Open Folder in Container** to a specified docker container.

See the `.devcontainer/devcontainer.json` settings file for details. It refers to the container description in `examples/Dockerfile`.


## References

- Details on development containers: [https://github.com/Microsoft/vscode-dev-containers](https://github.com/Microsoft/vscode-dev-containers).
- Advanced container related topics: [https://code.visualstudio.com/docs/remote/containers-advanced](https://code.visualstudio.com/docs/remote/containers-advanced)