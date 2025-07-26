// variables.cpp
// Demonstration of variables in C++
#include <iostream> // Include the input/output stream library
using namespace std; // Use the standard namespace to avoid std:: prefix

// Global variable example
// 'global' is not a valid keyword in C++. Use only the type and name.
int globalVar = 100; // Global variable, accessible throughout the file

int main() {
    // Local variable declaration and initialization
    int age = 20;              // Integer variable, stores whole numbers
    float height = 5.9f;       // Floating-point variable, stores decimal numbers (single precision)
    double weight = 70.5;      // Double precision floating-point variable, more precise than float
    char grade = 'A';          // Character variable, stores a single character
    bool isStudent = true;     // Boolean variable, stores true or false
    
    // Constant variable
    const float PI = 3.14159f; // Constant variable, value cannot be changed after initialization

    // Output variables
    // Print the values of the variables to the console
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl; // true prints as 1, false as 0
    cout << "Global Variable: " << globalVar << endl;
    cout << "PI: " << PI << endl;

    // Variable scope demonstration
    if (isStudent) {
        int localVar = 50; // Local to this block, only accessible inside this if statement
        cout << "Local Variable inside if block: " << localVar << endl;
    }
    // Uncommenting the next line will cause an error because localVar is out of scope
    // cout << localVar << endl;

    return 0; // End of main function, returns 0 to indicate successful execution
}
