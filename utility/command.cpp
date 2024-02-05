#include "command.h"
using namespace zeyu::utility;

CommandLine::CommandLine()
{
    this->init();
}

void CommandLine::init()
{
    m_opts.clear();
    m_args.clear();   
}

CommandLine::Type CommandLine::type(const string& opt) const
{
    auto it=m_opts.find(opt);
    if(it==m_opts.end())
        return ARG_UNKNOWN;
    return it->second;
}

void CommandLine::add(const string& opt,Type type)
{
    m_opts[opt]=type;
}

void CommandLine::parse(int argc,char** argv)
{
    for(int i=0;i<argc;i++)
    {
        string arg=argv[i];
        if(arg.substr(0,1)!="-")
        {
            //普通参数跳过
            continue;
        }
        else if(arg.substr(1,1)=="-")
        {
            //长参数 --arg
            string str=arg.substr(2);
            if(arg.length()<=3)
                throw std::logic_error("too short parameters:"+str);
            auto it=str.find('=');
            if(it==string::npos)
            {
                switch (type(str))
                {
                    case ARG_NO:
                    case ARG_OPTIONAL:
                        m_args[str]="";
                        break;
                    case ARG_NECESSARY:
                    {
                        if(i+1>=argc)
                            throw std::logic_error(str+" missing parameters.");
                        string val=argv[i+1];
                        if(val.substr(0,1)=="-")
                            throw std::logic_error(str+" with error parameters.");
                        m_args[str]=val;
                        i++;
                        break;
                    }
                    default:
                        throw std::logic_error("unknown parameters:"+str);
                }
            }
            else
            {
                string opt=str.substr(0,it);
                string val=str.substr(it+1);
                switch (type(opt))
                {
                    case ARG_NO:
                        throw std::logic_error(opt+" with extra parameters.");
                    case ARG_OPTIONAL:
                    case ARG_NECESSARY:
                        m_args[opt]=val;
                        break;
                    default:
                        throw std::logic_error("unknown parameters:"+opt);
                }
            }
        }
        else
        {
            //短参数 -arg
            string opt=arg.substr(1,1);
            switch (type(opt))
            {
                case ARG_NO:
                {
                    for(int k=1;k<arg.length();k++)
                    {
                        string s(1,arg[k]);
                        if(type(s)==ARG_NO)
                            m_args[s]="";
                        else
                            throw std::logic_error("error parameters:"+s);
                    }
                    break;
                }
                case ARG_OPTIONAL:
                {
                    if(arg.length()>2)
                    {
                        string val=arg.substr(2);
                        m_args[opt]=val;
                    }
                    else
                    {
                        m_args[opt]="";
                    }
                    break;
                }
                case ARG_NECESSARY:
                {
                    if(i+1>=argc)
                    {
                        throw std::logic_error(opt+" missing parameters.");
                    }
                    if(arg.length()>2)
                    {
                        throw std::logic_error(opt+"with too long parameters.");
                    }
                    string val=argv[i+1];
                    if(val.substr(0,1)=="-")
                    {
                        throw std::logic_error(opt+" with error parameters.");
                    }
                    m_args[opt]=val;
                    break;
                }
            default:
                throw std::logic_error("unknown parameters:"+opt);
            }
        }
    }
}

void CommandLine::show()
{
    for(const auto& pair:m_args)
    {
        std::cout<<pair.first<<":"<<pair.second<<std::endl;
    }
}

bool CommandLine::has(const string& opt)
{
    return m_args.find(opt)!=m_args.end();
}

Value CommandLine::get(const string& opt)
{
    auto it=m_opts.find(opt);
    if(it==m_opts.end())
    {
        return Value();
    }
    switch (type(opt))
    {
    case ARG_NO:
        return Value(m_args.find(opt)!=m_args.end());
    case ARG_OPTIONAL:
    case ARG_NECESSARY:
        return Value(m_args[opt]);
    default:
        break;
    }
    return Value();
}