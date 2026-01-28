#include <iostream>

#include "ansi.h"
#include "logger.h"


int main()
{
    Ansi::enable_ansi();

    Logger::log_info("This is an info message");
    Logger::log_warning("This is a warning message");
    Logger::log_error("This is an error message");
    Logger::log_success("This is a success message");

    return 0;
}
