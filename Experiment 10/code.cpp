#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n--- Calculator Menu ---" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    try
    {
        if (choice < 1 || choice > 4)
        {
            throw choice;
        }

        switch (choice)
        {
            case 1:
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Result = " << a * b;
                break;

            case 4:
                if (b == 0)
                    throw "Division by zero is not allowed!";
                cout << "Result = " << a / b;
                break;
        }
    }
    catch (int)
    {
        cout << "Error: Invalid menu choice!";
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg;
    }

    return 0;
}
