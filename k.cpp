//WAP to demonstrate virtual function in C++
#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void display() {
        cout << "Display function in Base class" << endl;
    }

    virtual ~Base() { // Virtual destructor
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    // Override the base class function
    void display() override {
        cout << "Display function in Derived class" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Base *basePtr;        // Pointer to the base class
    Derived derivedObj;   // Object of the derived class

    // Base class pointer points to the derived class object
    basePtr = &derivedObj;

    // Call the display function
    basePtr->display(); // Calls the derived class version due to the virtual keyword

    return 0;
}


