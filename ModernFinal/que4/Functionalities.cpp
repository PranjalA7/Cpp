#include "Functionalities.h"

void CreateObjects(Container& data){
    data.emplace(
        std::make_pair("E101", std::make_shared<Developer>
        ("E101", "Harshit", 7000.0f, 7,
        std::vector<SkillSet>{SkillSet::CODING, SkillSet::UNIT_TESTING, SkillSet::CODE_REVIEW}))
    );
    data.emplace(
        std::make_pair("E102", std::make_shared<CodeTester>
        ("E102", "Pranjal", 6000.0f, 3,
        std::vector<SkillSet>{SkillSet::CODING, SkillSet::CODE_REVIEW}))
    );
    data.emplace(
        std::make_pair("E103", std::make_shared<CodeTester>
        ("E103", "Sid", 5000.0f, 2,
        std::vector<SkillSet>{SkillSet::UNIT_TESTING, SkillSet::INTEGRATION_TESTING}))
    );
}

std::optional<Container> EmployeesBelowSixYearsExp(const Container &data)
{
    Container result;
    
    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
            if (val->experienceYears() < 6)
            {
                result.emplace(std::make_pair(k, v));
            }
        },
        v
        );
    }

    if (result.empty())
    {
        return std::nullopt;
    }
    return result;
}

float AverageSalaryOfTester(const Container &data)
{
    float result = 0.0f;
    int count = 0;
    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (std::holds_alternative<TestPointer>(v))
            {
                result += val->salary();
                count++;
            }
        },
        v
        );
    }
    
    return result/count;
}

int CountOfEmployeesAboveThreshold(const Container& data){
    int count = 0;

    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (val->salary() > 5000)
            {
                count++;
            }
        },
        v
        );
    }

    return count;
}

float SalaryOfGivenEmployee(const Container &data, const std::string& id)
{
    float result = 0.0f;

    for(auto& [k, v] : data){
        if (k == id)
        {
            std::visit([&](auto &&val){ result = val->salary(); },v);
        }
    }
    return result;

}

bool CheckEmployeesHaveSalaryAboveThreshold(const Container& data){

    bool result = true;

    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (val->salary() < 6000)
            {
                result = false;
            }
        },
        v
        );
    }
    return result;

}
