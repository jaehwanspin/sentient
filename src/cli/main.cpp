#include "./framework.hpp"
#include "./version.hpp"

#include <cstring>

constexpr const char* compiler_title_base =
" ____  _____ _   _ _____ ___ _____ _   _ _____\n"
"/ ___|| ____| \\ | |_   _|_ _| ____| \\ | |_   _|\n"
"\\___ \\|  _| |  \\| | | |  | ||  _| |  \\| | | |\n"
" ___) | |___| |\\  | | |  | || |___| |\\  | | |\n"
"|____/|_____|_| \\_| |_| |___|_____|_| \\_| |_|\n"
"\n"
"  ____ ___  __  __ ____ ___ _     _____ ____\n"
" / ___/ _ \|  \/  |  _ \_ _| |   | ____|  _ \\\n"
"| |  | | | | |\\/| | |_) | || |   |  _| | |_) |\n"
"| |__| |_| | |  | |  __/| || |___| |___ | _ <\n"
" \\____\\___/|_|  |_ | _|  |___ | _____ | _____ | _ | \\_\\\n"
"\n"
"version : % s\n"
"build   : % s\n"
"license : % s\n\n";

#include <type_traits>

int main(int argc, char** argv)
{
    
    char sentient_compiler_title[512] = { 0, };
    std::sprintf(sentient_compiler_title, compiler_title_base,
        SENTIENT_COMPILER_VERSION,
        SENTIENT_COMPILER_BUILD_ENV,
        SENTIENT_COMPILER_LICENSE);

    return sentient::compiler::framework(argc, argv, sentient_compiler_title).execute();
}