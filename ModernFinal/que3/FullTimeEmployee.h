#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"
#include "Grade.h"
#include <ostream>

class FullTimeEmployee : public Employee
{
private:
    std::string _project_name;
    std::string _employee_location;
    Grade _grade;
    int _bonus_percent;

public:
    FullTimeEmployee() = default;
    FullTimeEmployee(const FullTimeEmployee&) = delete;
    FullTimeEmployee& operator=(const FullTimeEmployee&) = delete;
    FullTimeEmployee(FullTimeEmployee&&) = delete;
    FullTimeEmployee& operator=(FullTimeEmployee&&) = delete;
    ~FullTimeEmployee() = default;

    FullTimeEmployee(std::string name, std::string id, float salary, std::string pname, std::string loc, Grade gr, int bonus);

    float CalculateBonus() override;

    std::string projectName() const { return _project_name; }
    void setProjectName(const std::string &project_name) { _project_name = project_name; }

    std::string employeeLocation() const { return _employee_location; }
    void setEmployeeLocation(const std::string &employee_location) { _employee_location = employee_location; }

    Grade grade() const { return _grade; }
    void setGrade(const Grade &grade) { _grade = grade; }

    int bonusPercent() const { return _bonus_percent; }
    void setBonusPercent(int bonus_percent) { _bonus_percent = bonus_percent; }

    friend std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs);
};

#endif // FULLTIMEEMPLOYEE_H
