#include "command.h"
#include "Value.h"
using namespace zeyu::utility;

int main(int argc,char** argv)
{
    CommandLine cmd;
    cmd.add("a",CommandLine::ARG_NO);
    cmd.add("b",CommandLine::ARG_OPTIONAL);
    cmd.add("c",CommandLine::ARG_NECESSARY);
    cmd.add("d",CommandLine::ARG_NO);
    cmd.add("age",CommandLine::ARG_NO);
    cmd.add("name",CommandLine::ARG_OPTIONAL);
    cmd.add("addr",CommandLine::ARG_NECESSARY);
    cmd.add("gender",CommandLine::ARG_NECESSARY);
    cmd.parse(argc,argv);
    cmd.show();
    int b=cmd.get("b");
    Value v=5;
    std::cout<<v.type()<<std::endl;
    std::cout<<v<<std::endl;
    std::cout<<cmd.has("a")<<std::endl;
    std::cout<<cmd.has("b")<<std::endl;
    bool bo=cmd.get("d");
    std::cout<<bo<<std::endl;
    std::cout<<cmd.get("gender")<<std::endl;
    std::cout<<cmd.get("addr")<<std::endl;
    Value v2=5;
    std::cout<<(v==v2)<<std::endl;
    std::cout<<(v!=v2)<<std::endl;
    return 0;
}