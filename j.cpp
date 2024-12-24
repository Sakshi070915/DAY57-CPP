//WAP to demonstrate copy constructor in C++
#include <iostream>
using namespace std;

class CopyDemo {
private:
    int value;

public:
    // Default constructor
    CopyDemo(int val) : value(val) {
        cout << "Default constructor called with value: " << value << endl;
    }

    // Copy constructor
    CopyDemo(const CopyDemo &obj) {
        value = obj.value;
        cout << "Copy constructor called. Copied value: " << value << endl;
    }

    // Display function to show the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Create an object using the default constructor
    CopyDemo obj1(42);
    obj1.display();

    // Create another object using the copy constructor
    CopyDemo obj2 = obj1; // Invokes the copy constructor
    obj2.display();

    return 0;
}
