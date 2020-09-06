
# Code coverage <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [doxygen](#doxygen)
- [Markdown](#markdown)

## Overview

This document shows how to enhance your documentation capabilities with VS Code.

## doxygen

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

---

## Markdown

There are several markdown related extensions available. But currently a very nice one is [Markdown All in One](https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one#table-of-contents). It supports shortcuts, automated creation of TOCs and many more.
