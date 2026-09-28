#include <iostream>                 // Includes the input/output stream library.
#include <string>                   // Includes the string class from the C++ standard library.
using namespace std;                // Allows us to use standard names without writing std::.

// Defines a class named String.
class String
{
private:
    string word;                    // Declares a private variable to store the word.

public:
    // Constructor that accepts a word as an argument.
    String(string w)
    {
        word = w;                   // Stores the received word in the word variable.
        cout << "Constructor called." << endl; // Displays a message when constructor is called.
    }

    // Function to display the stored word.
    void display()
    {
        cout << "The word is: " << word << endl; // Displays the stored word.
    }

    // Destructor that is automatically called when the object is destroyed.
    ~String()
    {
        cout << "Destructor called." << endl; // Displays a message when destructor is called.
    }
};

// Main function where program execution begins.
int main()
{
    string input;                   // Declares a variable to store the user's input.

    cout << "Enter a single word: "; // Asks the user to enter a word.
    cin >> input;                   // Reads a single word from the user.

    String obj(input);              // Creates a String object and calls the constructor.

    obj.display();                  // Calls the display function to show the word.

    return 0;                       // Ends the program successfully.
}                                  // The destructor is automatically called here.
