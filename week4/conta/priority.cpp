#include <iostream>
#include <queue>

class Person
{
public:
    int age;
    std::string name;

    friend std::ostream &operator<<(std::ostream &os, const Person &rhs) {
        os << "age: " << rhs.age
           << " name: " << rhs.name
           << "\n";
        return os;
    }
};

class LessThanByAge
{
    public:
    bool operator()(const Person& lhs, const Person& rhs) const
    {
        return lhs.age > rhs.age;
    }
};

int main(){

    std::priority_queue<Person, std::vector<Person>, LessThanByAge> pq;

    Person t[5] = { {1, "one"}, {5, "two"}, {5, "three"}, {4, "four"}, {2, "five"}};

    for (int i = 0; i < 5; ++i)
       pq.push(t[i]);

    while (! pq.empty()) {
       
       std::cout << pq.top();
       
       pq.pop();
    }
}