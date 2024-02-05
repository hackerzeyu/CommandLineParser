#pragma once
#include <iostream>
#include <string>
#include <sstream>
using std::string;

namespace zeyu
{
    namespace utility
    {
        class Value
        {
        public:
            enum Type
            {
                V_NULL=0,           //空类型
                V_BOOL,
                V_INT,
                V_UINT,
                V_FLOAT,
                V_DOUBLE,
                V_STRING
            };
        public:
            Value();
            Value(bool val);
            Value(int val);
            Value(unsigned int val);
            Value(float val);
            Value(double val);
            Value(const char* val);
            Value(string val);
            Value(const Value& val);
            Value& operator=(const Value& val);

            Type type() const;

            operator bool();
            operator bool() const;
            operator int();
            operator int() const;
            operator unsigned int();
            operator unsigned int() const;
            operator float();
            operator float() const;
            operator double();
            operator double() const;
            operator string();
            operator string() const;

            bool is_null() const;
            bool is_bool() const;
            bool is_int() const;
            bool is_uint() const;
            bool is_float() const;
            bool is_double() const;
            bool is_string() const;

            bool operator==(const Value& val);
            bool operator!=(const Value& val);

            friend std::ostream & operator << (std::ostream & os, const Value & val)
            {
                os << val.m_val;
                return os;
            }

            ~Value()=default;
        private:
            Type m_type;
            string m_val;
        };
    }
}