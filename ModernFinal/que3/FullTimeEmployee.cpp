#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(std::string name, std::string id, float salary, std::string pname, std::string loc, Grade gr, int bonus)
    : Employee(name, id, salary), _project_name(pname), _employee_location(loc), _grade(gr), _bonus_percent(bonus)
{
    if (_bonus_percent < 0 || _bonus_percent > 100)
    {
        throw std::runtime_error("Bonus percent should be between 1 to 100");
    }
}
float FullTimeEmployee::CalculateBonus()
{
    if (_grade == Grade::A)
    {
        return _bonus_percent * this->salary() * 0.01f;
    }
    else if (_grade == Grade::B)
    {
        return _bonus_percent * this->salary() * 0.5f * 0.01f;
    }
    else
    {
        return _bonus_percent * this->salary() * 0.25f * 0.01f;
    }
}

std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs)
{
    os << static_cast<const Employee &>(rhs)
       << " _project_name: " << rhs._project_name
       << " _employee_location: " << rhs._employee_location
       << " _grade: " << static_cast<int> (rhs._grade)
       << " _bonus_percent: " << rhs._bonus_percent;
    return os;
}
