//
// Created by oceci on 1/28/2026.
//

#ifndef CPP_WEB_SERVER_LOGGER_H
#define CPP_WEB_SERVER_LOGGER_H
#include <string>


class Logger
{
public:
    static void log_info(const std::string& message);
    static void log_error(const std::string& message);
    static void log_warning(const std::string& message);
    static void log_success(const std::string& message);
};


#endif //CPP_WEB_SERVER_LOGGER_H