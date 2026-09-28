#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    double argument() {
        return atan2(imag, real);
    }

    void display() {
        double angle = argument();

        cout << "Complex number = " << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;

        cout << "Argument (in radians) = " << angle << endl;
        cout << "Argument (in degrees) = "
             << angle * 180.0 / M_PI << " degrees" << endl;
    }
};

int main() {
    Complex c;

    c.input();
    c.display();

    return 0;
}
