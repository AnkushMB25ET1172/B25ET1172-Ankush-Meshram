
#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    virtual void calculateSalary() {
        cout << "Calculating employee salary" << endl;
    }
};

// Derived class Manager
class Manager : public Employee {
public:
    void calculateSalary() override {
        cout << "Manager Salary = Rs. 60000" << endl;
    }
};

// Derived class Developer
class Developer : public Employee {
public:
    void calculateSalary() override {
        cout << "Developer Salary = Rs. 40000" << endl;
    }
};

int main() {
    Employee *e;

    Manager m;
    Developer d;

    e = &m;
    e->calculateSalary();

    e = &d;
    e->calculateSalary();

    return 0;
}
