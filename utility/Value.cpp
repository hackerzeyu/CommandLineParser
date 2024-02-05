#include "Value.h"
using namespace zeyu::utility;

Value::Value():m_type(V_NULL)
{
    m_val="";
}

Value::Value(bool val):m_type(V_BOOL)
{
    m_val=val?"true":"false";
}

Value::Value(int val):m_type(V_INT)
{
    m_val=std::to_string(val);
}

Value::Value(unsigned int val):m_type(V_UINT)
{
    m_val=std::to_string(val);
}

Value::Value(float val):m_type(V_FLOAT)
{
    m_val=std::to_string(val);
}

Value::Value(double val):m_type(V_DOUBLE)
{
    m_val=std::to_string(val);
}

Value::Value(const char* val):m_type(V_STRING)
{
    m_val=val;
}

Value::Value(string val):m_type(V_STRING)
{
    m_val=val;
}

Value::Value(const Value& val)
{
    m_val=val.m_val;
    m_type=val.m_type;
}

Value& Value::operator=(const Value& val)
{
    if(this==&val)
        return *this;
    m_type=val.m_type;
    m_val=val.m_val;
    return *this;
}

Value::Type Value::type() const
{
    return m_type;
}

Value::operator bool()
{
    return m_val=="true";
}

Value::operator bool() const
{
    return m_val=="true";
}

Value::operator int()
{
    std::stringstream ss;
    int val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator int() const
{
    std::stringstream ss;
    int val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator unsigned int()
{
    std::stringstream ss;
    unsigned int val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator unsigned int() const
{
    std::stringstream ss;
    unsigned int val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator float()
{
    std::stringstream ss;
    float val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator float() const
{
    std::stringstream ss;
    float val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator double()
{
    std::stringstream ss;
    double val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator double() const
{
    std::stringstream ss;
    double val;
    ss<<m_val;
    ss>>val;
    return val;
}

Value::operator string()
{
    return m_val;
}

Value::operator string() const
{
    return m_val;
}

bool Value::is_null() const
{
    return m_type==V_NULL;
}

bool Value::is_bool() const
{
    return m_type==V_BOOL;
}

bool Value::is_int() const
{
    return m_type==V_INT;
}

bool Value::is_uint() const
{
    return m_type==V_UINT;
}

bool Value::is_float() const
{
    return m_type==V_FLOAT;
}

bool Value::is_double() const
{
    return m_type==V_DOUBLE;
}

bool Value::is_string() const
{
    return m_type==V_STRING;
}

bool Value::operator==(const Value& val)
{
    if(m_type!=val.m_type || m_val!=val.m_val)
        return false;
    return true;
}

bool Value::operator!=(const Value& val)
{
    return !(*this==val);
}




