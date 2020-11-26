
# Code coverage <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [Using logpoints](#using-logpoints)
- [References](#references)

---

## Overview

This documentation shows some debugging related stuff.

---

## Using logpoints

[Logpoints](https://devblogs.microsoft.com/cppblog/visual-studio-code-c-extension-july-2020-update-doxygen-comments-and-logpoints/) are are a very nice way to print stuff of interest during a debug session without using good old printf or cout debugging.

![Using logpoints](https://devblogs.microsoft.com/cppblog/wp-content/uploads/sites/9/2020/07/logpoint.gif)

Simply do a right click besides the line number, select `Add Logpoint` and write a message that should be printed during the debugging session. Use curly braces to denote variables that should be printed.

---

## References

- Microsoft dev blog on logpoints: [https://devblogs.microsoft.com/cppblog/wp-content/uploads/sites/9/2020/07/logpoint.gif](https://devblogs.microsoft.com/cppblog/wp-content/uploads/sites/9/2020/07/logpoint.gif)
