#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display()" << std::endl;
    }


};

class Derived : public Base {
public:
    void display(int num) {
        std::cout << "derived class display(int): " << num << std::endl;
    }
        void display() {
        std::cout << "derived class display()" << std::endl;
    }
};

int main() {
    Derived derivedObj;

    derivedObj.display();              // Ambiguous call

    derivedObj.Base::display();        // Call Base class display()
    derivedObj.display(123);           // Call Base class display(int)

    return 0;
}
