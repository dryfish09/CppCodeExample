# C++ code example
### What is it?
This repository is a simple, hand-written C++ code example.

Each `.cpp` file is lesson about basic C++.
### How to use?

Each folder and `.cpp` file has its number, like `01_Hello_World/`, `01_HelloWorldBasic.cpp`.

You should read from `01` to the biggest number on its folder.

### Can you trust this?
All codes in here are **safe, verified by C++ senior**. You can trust it, but **it CAN'T replace official docs**.
### Contributing:
Contributing are welcome! You can send me **pull request** or **open an issue** to:
- Requesting add/fix some examples.
- Fix/add more example to make this repository more useful and help more people who new to C++.

#### Code style:
Code style in all file **should** be same, here is some stuff you need to follow befor send me a **pull request**:
- Spacing: 4 Spaces or 1 Tab.
- Code convention: variables, function: `camelCase`, class: `PascalCase`.
- Function, `class`, `struct` must be:
```cpp
void getInput() {
    // code here
}
```

Not this:
```cpp
void getInput()
{
    // stuff
}
```

- Commit message, comment, variable, class, etc name must be in English, readable, clear.
There're some example about **good and bad** commit message:
**Good commit message**
```text
feat: add 01_map.cpp to teach about std::map.
```
or:
```text
Fix typos
```
**Bad commit message**
Just `asd`, `idk`, `stuff`,...
  
- Should comment (`//` or `/**/`) to explain new stuff in lesson.
### Requirement:
- **Compiler**: GCC 14+ / Clang 18+ / or any compilers/IDE supports C++ 17 or later, C++ 23 or later (optional).
- **C++ Standard**: C++17 or later (some files use C++23)
- **Build**: `g++ -std=c++23 filename.cpp -o output` (For GCC only, if you use Clang, use Clang command instead)

### License:
This repository is a **public domain** under The Unlicense.
