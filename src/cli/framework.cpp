#include "./framework.hpp"

namespace sentient
{
namespace compiler
{

framework::framework(int argc, char** argv, const std::string& arg_title) :
    argh_(arg_title)
{

}

void framework::initialize(int argc, char** argv)
{
    this->argh_.add_options()
        ("", "");
    this->argh_.parse(argc, argv);
}

int framework::execute()
{
    int exit_code = EXIT_SUCCESS;



    return exit_code;
}

}
}