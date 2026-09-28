#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // Overload != operator
    bool operator != (Complex c)
    {
        if (real != c.real || imag != c.imag)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(3, 5);

    if (c1 != c2)
        cout << "The complex numbers are different.";
    else
        cout << "The complex numbers are same.";

    return 0;
}
