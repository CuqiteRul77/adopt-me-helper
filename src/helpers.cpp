// helpers.cpp — part of adopt-me-helper.

#include "adoptmehelper/helpers.h"

#include <cstdio>

namespace adoptmehelper {

Helpers::Helpers(const std::string& config_path)
    : config_path_(config_path) {}

void Helpers::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Helpers::run() {
    if (verbose_) std::fprintf(stderr, "[adopt-me-helper] helpers: run\n");
    // core logic lives here
    return true;
}

}  // namespace adoptmehelper
