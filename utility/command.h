#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <unordered_map>
#include "Value.h"
using std::string;

namespace zeyu
{
    namespace utility
    {
        class CommandLine
        {
        public:
            enum Type
            {
                ARG_UNKNOWN=0,          //参数未知  
                ARG_NO,                 //无参数
                ARG_OPTIONAL,           //可选参数
                ARG_NECESSARY           //必要参数
            };
        public:
            CommandLine();
            ~CommandLine()=default;
            void init();                               //初始化
            Type type(const string& opt) const;        //获取参数类型
            void add(const string& opt,Type type);     //添加待解析参数
            void parse(int argc,char** argv);          //解析命令行参数
            void show();                               //显示所有参数及参数值
            bool has(const string& opt);               //判断命令行是否有该参数
            Value get(const string& opt);              //获取参数值
        private:
            std::unordered_map<string,Type> m_opts;    //参数类型映射
            std::unordered_map<string,string> m_args;  //参数值映射
        };
    }
}