//
// Created by oceci on 1/28/2026.
//

#ifdef _WIN32
#include <windows.h>
#endif


#include "logger.h"
#include "ansi.h"

#include <iostream>


void Logger::log_info(const std::string& message)
{
    std::cout << "[INFO] " << message << std::endl;
}

void Logger::log_error(const std::string& message)
{
    std::cout << Ansi::RED << "[ERROR] " << message << Ansi::RESET << std::endl;
}

void Logger::log_warning(const std::string& message)
{
    std::cout << Ansi::YELLOW << "[WARNING] " << message << Ansi::RESET << std::endl;
}

void Logger::log_success(const std::string& message)
{
    std::cout << Ansi::GREEN << "[SUCCESS] " << message << Ansi::RESET << std::endl;
}
