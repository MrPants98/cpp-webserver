//
// Created by oceci on 1/28/2026.
//

#pragma once
#ifndef CPP_WEB_SERVER_ANSI_H
#define CPP_WEB_SERVER_ANSI_H

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

namespace Ansi
{
    // Enable ANSI escape codes on Windows
    inline void enable_ansi()
    {
    #ifdef _WIN32
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD mode = 0;
        GetConsoleMode(hOut, &mode);
        SetConsoleMode(hOut, mode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    #endif
    }

    // Reset
    inline constexpr const char* RESET = "\x1b[0m";

    // Foreground colors
    inline constexpr const char* BLACK   = "\x1b[30m";
    inline constexpr const char* RED     = "\x1b[31m";
    inline constexpr const char* GREEN   = "\x1b[32m";
    inline constexpr const char* YELLOW  = "\x1b[33m";
    inline constexpr const char* BLUE    = "\x1b[34m";
    inline constexpr const char* MAGENTA = "\x1b[35m";
    inline constexpr const char* CYAN    = "\x1b[36m";
    inline constexpr const char* WHITE   = "\x1b[37m";
    inline constexpr const char* DEFAULT = "\x1b[39m";

    // Bright foreground colors
    inline constexpr const char* BRIGHT_BLACK   = "\x1b[90m";
    inline constexpr const char* BRIGHT_RED     = "\x1b[91m";
    inline constexpr const char* BRIGHT_GREEN   = "\x1b[92m";
    inline constexpr const char* BRIGHT_YELLOW  = "\x1b[93m";
    inline constexpr const char* BRIGHT_BLUE    = "\x1b[94m";
    inline constexpr const char* BRIGHT_MAGENTA = "\x1b[95m";
    inline constexpr const char* BRIGHT_CYAN    = "\x1b[96m";
    inline constexpr const char* BRIGHT_WHITE   = "\x1b[97m";

    // Background colors
    inline constexpr const char* BG_BLACK   = "\x1b[40m";
    inline constexpr const char* BG_RED     = "\x1b[41m";
    inline constexpr const char* BG_GREEN   = "\x1b[42m";
    inline constexpr const char* BG_YELLOW  = "\x1b[43m";
    inline constexpr const char* BG_BLUE    = "\x1b[44m";
    inline constexpr const char* BG_MAGENTA = "\x1b[45m";
    inline constexpr const char* BG_CYAN    = "\x1b[46m";
    inline constexpr const char* BG_WHITE   = "\x1b[47m";

    // Text styles
    inline constexpr const char* BOLD      = "\x1b[1m";
    inline constexpr const char* DIM       = "\x1b[2m";
    inline constexpr const char* ITALIC    = "\x1b[3m";
    inline constexpr const char* UNDERLINE = "\x1b[4m";
    inline constexpr const char* BLINK     = "\x1b[5m";
    inline constexpr const char* REVERSE   = "\x1b[7m";
}

#endif //CPP_WEB_SERVER_ANSI_H