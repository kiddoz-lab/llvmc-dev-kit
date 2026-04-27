# LLVM-DevKit

hello, everyone! this is an huge deal! you can now just download this kit and, make your own compiled coding language! via using llvm IR coding language!

A portable LLVM toolchain wrapper for C++ projects.

No system LLVM installation required.  
No PATH setup needed.

---

## Structure

llvm-kit/
- clang.exe
- clang++.exe
- llc.exe
- opt.exe
- llvm-dis.exe
- llvm-as.exe
- libLLVM-21.dll
- libclang-cpp.dll
- libstdc++-6.dll
- libgcc_s_seh-1.dll
- libwinpthread-1.dll
- zlib1.dll
- libzstd.dll

include/llvmc/
- llvmc.h

src/llvmc/
- llvmc.cpp

---

## Setup

1. Download or clone LLVM-DevKit
2. Include header in your project;

   ```cpp
   #include "llvmc/llvmc.h"
   ```

   **just, downlaod and extract the kit and, use it on your next coding language project.**

3. Set DevKit location;

```cpp
 llvmc::home("C:/path/to/llvm-kit/");
 ```

 4. compile LLVM IR;
 ```cpp
  llvmc::O3("test.ll", "test.exe");
```

**OR**

```cpp
 llvmc::cmd("test.ll -o test.exe -O3");
```

**both** do the **same** but... still 😜

5. are you scared you missed any files! 😨

```cpp
if (!llvmc::validate()) {
    // this thingy... will do the trick
}

```


---

**thats all!, bye guys 👋**

## licence

**[LiCENCE](\LICENCE)**

## Contributing

**Really, thank you becuase we need more people like you <3**

**[Contributing.md](\CONTRIBUTING.md)**

***