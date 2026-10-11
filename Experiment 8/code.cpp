

#include <iostream>
using namespace std;

// Base class for basic employee information
class Employee {
protected:
    int id;
    string name;
    string department;

public:
    void getBasicInfo() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;
    }
};

// Base class for employee contact information
class Contact {
protected:
    string phone;
    string email;

public:
    void getContactInfo() {
        cout << "Enter Phone Number: ";
        cin >> phone;

        cout << "Enter Email: ";
        cin >> email;
    }
};

// Derived class using multiple inheritance
class EmployeeCard : public Employee, public Contact {
public:
    void displayCard() {
        cout << "\n===== EMPLOYEE CONTACT CARD =====\n";
        cout << "Employee ID : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Phone       : " << phone << endl;
        cout << "Email       : " << email << endl;
        cout << "=================================\n";
    }
};

int main() {
    EmployeeCard e;

    e.getBasicInfo();
    e.getContactInfo();
    e.displayCard();

    return 0;
}
