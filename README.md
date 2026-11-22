# my-first-repository

just tutorial

## 内容

C/C++ 练习文件：`2.cpp`–`18.cpp`、`A.cpp`，以及 C 语言的 `4.c`、`5.c`、`8.c`。

## 编译与运行

VS Code 里按 `Ctrl+Shift+B` 会用 `.vscode/tasks.json` 里的任务编译当前文件：

- 编译器：`C:\Program Files\mingw64\bin\g++.exe`
- 输出：与源文件同目录的 `.exe`（如 `9.cpp` → `9.exe`）
- 参数：`-g` 调试信息，`-finput-charset=UTF-8` / `-fexec-charset=UTF-8` 保证中文输出不乱码

也可以用命令行：

```bash
g++ -g -finput-charset=UTF-8 -fexec-charset=UTF-8 9.cpp -o 9.exe
./9.exe
```

`.exe`、`.o` 等编译产物已由 `.gitignore` 忽略，不会进入版本库。
