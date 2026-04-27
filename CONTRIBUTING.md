# Contributing to LLVM-DevKit

First of all, thank you becuase you are the people who, makes open source projects, really open source and again
Thanks for your interest in improving LLVM-DevKit.

This project is a portable LLVM toolchain wrapper designed to simplify LLVM usage in C++ projects. and Its great

---

## Before you start

LLVM-DevKit is NOT:
- A compiler replacement
- A full IDE
- A new programming language

It is:
- A portable LLVM toolchain bundle
- A C++ API wrapper over LLVM tools
- A developer utility kit

Keep changes aligned with this goal.

---

## Project structure

- `include/llvmc/` → public API headers
- `src/llvmc/` → implementation
- `llvm-kit/` → LLVM binaries and DLLs
- `DOCS/` → sample usage (optional)

---

## How to contribute

### 1. Fork the repository

### 2. Create a new branch
```bash
git checkout -b feature-name

```

### 3. Make changes

- But... Follow these rules:

* Keep API simple
* Avoid breaking existing function names
* Prefer minimal dependencies
* Keep LLVM wrapper logic stable
* and, your code must, atleast be *20* _to_ *35* **%** human-made.

4. Test your changes

- Make sure:

* llvmc::home() works
* llvmc::cmd() executes correctly
* llvmc::validate() passes
* DevKit runs from a fresh folder

5. Important rules
- Do NOT assume system LLVM is installed
- Do NOT require PATH setup
- Do NOT add unnecessary dependencies
- Keep everything portable inside the DevKit folder


---

### tip, here!

- please make your code, easy to understand and also small, for the next contributer **to not faint**
 and also... I am not sure about how the last guy is but... well I think he's okey?

- and dont, prefer complexity over **quality**

- and... the important of them all! **please make sure to, add your markings in the [list.md](\CONTRIBUTERS\list.md)