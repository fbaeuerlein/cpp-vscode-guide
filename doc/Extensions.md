# Other helpful extensions <!-- omit in toc -->

## Table of contents <!-- omit in toc -->

- [Overview](#overview)
- [Bracket Pair Colorizer](#bracket-pair-colorizer)
- [Todo Tree](#todo-tree)
- [Pomodoro Timer](#pomodoro-timer)
- [YAML](#yaml)
- [Code Spell Checker](#code-spell-checker)
- [Task Explorer](#task-explorer)
- [Markdown lint](#markdown-lint)

---

## Overview

Some other helpful (not necessarily C/C++ related) extensions to support developers.

---

## Bracket Pair Colorizer

[Bracket Pair Colorizer](https://marketplace.visualstudio.com/items?itemName=CoenraadS.bracket-pair-colorizer) adds different colors to brackets, so nested brackets could be distinguished much better.

![Bracket Pair Colorizer](https://raw.githubusercontent.com/CoenraadS/BracketPair/master/images/example.png)

---

## Todo Tree

[Todo Tree](https://marketplace.visualstudio.com/items?itemName=Gruntfuggly.todo-tree) shows all the todo tag within your files in a tree structure so you can easily have an eye on them.
<!-- **TODO:** remove old image -->

![TodoTree](https://raw.githubusercontent.com/Gruntfuggly/todo-tree/master/resources/screenshot.png)

---

## Pomodoro Timer

The [Pomodoro Timer](https://marketplace.visualstudio.com/items?itemName=lkytal.pomodoro) helps you to manage your workflow and focus time easily. It reminds you to take a break or focusing on the other task you have to do besides coding.

See [Pomodoro Technique](https://en.wikipedia.org/wiki/Pomodoro_Technique) for details about the method itself.

---

## YAML

The [RedHat YAML Extension](https://marketplace.visualstudio.com/items?itemName=redhat.vscode-yaml) helps you writing YAML files with formatting and checking the file content.

![RedHat YAML Extension](https://raw.githubusercontent.com/redhat-developer/vscode-yaml/master/images/demo.gif)

---

## Code Spell Checker

[Code Spell Checker](https://marketplace.visualstudio.com/items?itemName=streetsidesoftware.code-spell-checker) helps you to catch common spelling mistakes. It supports different dictionaries and also helps you to improve your documentation.

![Code Spell Checker](https://raw.githubusercontent.com/streetsidesoftware/vscode-spell-checker/master/packages/client/images/example.gif)

---

## Task Explorer

[Task Explorer](https://marketplace.visualstudio.com/items?itemName=spmeesseman.vscode-taskexplorer) provides a tree view to display all supported (also VS Code tasks and make targets) tasks. It's really helpful to manage and run your tasks just with a click.

It also detects script files (e.g. bash scripts) and shows it within the task list. Using installation and setup scripts was never that easy! See the automatically detected test script in the workspace root.

![https://raw.githubusercontent.com/spmeesseman/vscode-taskexplorer/master/res/taskview1.png](https://raw.githubusercontent.com/spmeesseman/vscode-taskexplorer/master/res/taskview1.png)

---

## Markdown lint

[Markdown lint](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint) supports you on writing markdown files by linting and style checking.

## Live Server

If you are developing within the dev containers, opening a browser from the tasks is not possible. So use the [Live Server](https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer) extension to display HTML files (e.g. from doxygen or coverage). It automatically reloads the pages on change. So you don't even to do a reload!

Adapt the port settings in `.vscode/settings.json` and `.devcontainer/devcontainer.json` to connect on localhost to the specified port with your browser.

<!-- TODO: HexInspector -->