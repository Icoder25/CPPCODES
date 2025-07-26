// 1. Basic Hello World
#include <iostream>
using namespace std;


// 2. Fundamental Data Types


void fundamentalTypes() {
    // Integer types
    int regularInt = 42;              // Regular integer
    short shortInt = 32767;           // Short integer
    long longInt = 2147483647L;       // Long integer
    long long longlongInt = 9223372036854775807LL; // Long long integer
    
    // Floating point types
    float floatNum = 3.14159f;        // Single precision
    double doubleNum = 3.14159265359; // Double precision
    
    // Character type
    char singleChar = 'A';            // Single character
    
    // Boolean type
    bool isTrue = true;               // Boolean value

    // Output all values
    cout << "Regular Int: " << regularInt << endl;
    cout << "Short Int: " << shortInt << endl;
    cout << "Long Int: " << longInt << endl;
    cout << "Long Long Int: " << longlongInt << endl;
    cout << "Float: " << floatNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Char: " << singleChar << endl;
    cout << "Boolean: " << boolalpha << isTrue << endl;
}

// 3. Type Modifiers
void typeModifiers() {
    signed int signedNum = -100;      // Can be negative
    unsigned int unsignedNum = 100;   // Only positive
    const int constantNum = 50;       // Cannot be changed
    volatile int volatileNum = 75;    // Can change unexpectedly

    cout << "Signed: " << signedNum << endl;
    cout << "Unsigned: " << unsignedNum << endl;
    cout << "Constant: " << constantNum << endl;
    cout << "Volatile: " << volatileNum << endl;
}

// 4. Derived Types
void derivedTypes() {
    // Arrays
    int intArray[5] = {1, 2, 3, 4, 5};
    
    // Pointers
    int* pointer = &intArray[0];
    
    // References
    int original = 100;
    int& reference = original;
    
    cout << "Array first element: " << intArray[0] << endl;
    cout << "Pointer value: " << *pointer << endl;
    cout << "Reference value: " << reference << endl;
}

// 5. User-Defined Types
struct Person {
    string name;
    int age;
};

enum DayOfWeek {
    SUNDAY,
    MONDAY,
    TUESDAY
};

void userDefinedTypes() {
    // Structure
    Person person;
    person.name = "John";
    person.age = 25;
    
    // Enumeration
    DayOfWeek today = MONDAY;
    
    cout << "Person name: " << person.name << endl;
    cout << "Person age: " << person.age << endl;
    cout << "Today is day number: " << today << endl;
}

// Main function to demonstrate all types
int main() {
    cout << "\n=== Fundamental Types ===" << endl;
    fundamentalTypes();
    
    cout << "\n=== Type Modifiers ===" << endl;
    typeModifiers();
    
    cout << "\n=== Derived Types ===" << endl;
    derivedTypes();
    
    cout << "\n=== User-Defined Types ===" << endl;
    userDefinedTypes();
    
    return 0;
}