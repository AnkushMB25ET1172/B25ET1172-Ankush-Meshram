#include <iostream>
using namespace std;

class Demo {
public:
    // Display integer
    void display(int n) {
        cout << "Integer: " << n << endl;
    }

    // Display float
    void display(float n) {
        cout << "Float: " << n << endl;
    }

    // Display character
    void display(char ch) {
        cout << "Character: " << ch << endl;
    }
};

int main() {
    Demo obj;

    obj.display(10);
    obj.display(10.5f);
    obj.display('A');

    return 0;
}
