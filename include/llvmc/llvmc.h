#ifndef LLVMC_H
#define LLVMC_H

#include <string>

namespace llvmc {

void home(const std::string& path);

bool validate();

int cmd(const std::string& args);

int O0(const std::string& file, const std::string& out);
int O1(const std::string& file, const std::string& out);
int O2(const std::string& file, const std::string& out);
int O3(const std::string& file, const std::string& out);
int Os(const std::string& file, const std::string& out);
int Ofast(const std::string& file, const std::string& out);

}

#endif