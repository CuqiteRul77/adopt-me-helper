// care.cpp — part of adopt-me-helper.

#include "adoptmehelper/care.h"

#include <cstdio>

namespace adoptmehelper {

Care::Care(const std::string& config_path)
    : config_path_(config_path) {}

void Care::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Care::run() {
    if (verbose_) std::fprintf(stderr, "[adopt-me-helper] care: run\n");
    // core logic lives here
    return true;
}

}  // namespace adoptmehelper
