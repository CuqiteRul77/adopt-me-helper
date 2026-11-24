// main.cpp — entry point. Wires config and subsystems together.

#include "adoptmehelper/settings.h"
#include "adoptmehelper/care.h"
#include "adoptmehelper/quests.h"
#include "adoptmehelper/money.h"
#include "adoptmehelper/cli.h"
#include "adoptmehelper/helpers.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    adoptmehelper::Settings settings = adoptmehelper::Settings::load_default();
    adoptmehelper::Care care(settings.store_path);
    adoptmehelper::Quests quests(settings.store_path);
    adoptmehelper::Money money(settings.store_path);
    adoptmehelper::Cli cli(settings.store_path);
    adoptmehelper::Helpers helpers(settings.store_path);
    std::fprintf(stderr, "[adopt-me-helper] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
