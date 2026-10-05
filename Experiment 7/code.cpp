#include <iostream>          // Includes the input/output library
#include <string>            // Includes the string data type
using namespace std;         // Allows us to use cout, cin and string without std::

class String                  // Defines a class named String
{
    string str;               // Declares a string variable to store the word

public:                       // Makes the following members accessible outside the class

    String()                  // Constructor of the String class
    {
        cout << "Enter a word: ";  // Asks the user to enter a word
        cin >> str;                 // Accepts a single word from the user
    }

    void display()             // Defines a member function named display
    {
        cout << "The word is: " << str << endl;  // Displays the stored word
    }

    ~String()                  // Destructor of the String class
    {
        cout << "Destructor called." << endl;    // Displays a message when destructor is called
    }
};

int main()                     // Main function where program execution begins
{
    String s;                   // Creates an object 's' and automatically calls the constructor

    s.display();                // Calls the display() function using object 's'

    return 0;                   // Ends the main function and terminates the program
}                               // Destructor is automatically called here
