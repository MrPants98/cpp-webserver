#include <iostream>

#include "ansi.h"
#include "logger.h"

int get_port(int argc, char* argv[]);

int main(const int argc, char* argv[])
{
    Ansi::enable_ansi();

    const int port = get_port(argc, argv);
    Logger::log_info("Starting server on port " + std::to_string(port));

    return 0;
}

int get_port(const int argc, char* argv[])
{
    int port = 8000;
    for (int i = 1; i < argc; i++)
    {
        std::string arg = argv[i];

        if (arg == "--port")
        {
            if (i + 1 < argc)
            {
                try
                {
                    port = std::stoi(argv[i + 1]);
                    i++; // skip next argument since we consumed it
                }
                catch (...)
                {
                    std::cerr << "Invalid value for --port\n";
                    return 1;
                }
            }
            else
            {
                std::cerr << "--port requires a number\n";
                return 1;
            }
        }
    }

    return port;
}
