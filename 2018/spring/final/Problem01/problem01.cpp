#include "problem01.h"

Student::Student(int _id, std::string& _name, int _point)
:m_id(_id), m_name(_name), m_point(_point)
{
    
}

int Student::get_id()
{
    return m_id;
}
std::string Student::get_name()
{
    return m_name;
}
    
int Student::get_point()
{
    return m_point;
}