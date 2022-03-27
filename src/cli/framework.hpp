#ifndef __SENTIENT_CLI_COMPILER_FRAMEWORK_HPP__
#define __SENTIENT_CLI_COMPILER_FRAMEWORK_HPP__

#include <boost/program_options/options_description.hpp>
#include <boost/program_options/variables_map.hpp>

namespace sentient
{
namespace compiler
{

class framework
{
public:
    explicit framework(int argc, char** argv);

    int execute();

private:
};

}
}


#endif