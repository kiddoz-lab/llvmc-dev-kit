#include "llvmc.h"
#include <string>
#include <cstdlib>
#include <filesystem>

namespace llvmc {

static std::string _home = "";

void home(const std::string& path) {
    _home = path;
    if (!_home.empty() && _home.back() != '/' && _home.back() != '\\') {
        _home += "/";
    }
}

static std::string clang() {
    return _home + "clang.exe";
}

static bool exists(const std::string& p) {
    return std::filesystem::exists(p);
}

bool validate() {
    return
        exists(clang()) &&
        exists(_home + "llc.exe") &&
        exists(_home + "opt.exe") &&
        exists(_home + "libLLVM-21.dll") &&
        exists(_home + "libclang-cpp.dll") &&
        exists(_home + "libstdc++-6.dll") &&
        exists(_home + "libgcc_s_seh-1.dll") &&
        exists(_home + "libwinpthread-1.dll");
}

int cmd(const std::string& args) {
    if (_home.empty()) return -1;
    if (!validate()) return -2;

    std::string full = "\"" + clang() + "\" " + args;
    return std::system(full.c_str());
}

int O0(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + " -O0");
}

int O1(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + " -O1");
}

int O2(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + " -O2");
}

int O3(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + "-O3");
}

int Os(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + " -Os");
}

int Ofast(const std::string& file, const std::string& out) {
    return cmd(file + " -o " + out + " -Ofast");
}

}