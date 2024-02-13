#ifndef CODETESTER_H
#define CODETESTER_H

#include "Developer.h"

class CodeTester
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    int _experience_years;
    Skills _skill;
public:
    CodeTester() = default;
    CodeTester(const CodeTester&) = delete;
    CodeTester& operator=(const CodeTester&) = delete;
    CodeTester(CodeTester&&) = delete;
    CodeTester& operator=(CodeTester&&) = delete;
    ~CodeTester() = default;

    CodeTester(std::string id, std::string name, float salary, int years, Skills sk);

    float CalculateBonus();

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    float salary() const { return _salary; }
    void setSalary(float salary) { _salary = salary; }

    int experienceYears() const { return _experience_years; }
    void setExperienceYears(int experience_years) { _experience_years = experience_years; }

    Skills skill() const { return _skill; }
    void setSkill(const Skills &skill) { _skill = skill; }

    friend std::ostream &operator<<(std::ostream &os, const CodeTester &rhs);
};


#endif // CODETESTER_H
