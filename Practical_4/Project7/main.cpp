#include <iostream>

using namespace std;

class MyClass {
public:
    int data;
    MyClass(){}
    MyClass(int value) : data(value){}

    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    // Dynamic memory allocation for a single object
    MyClass* obj1 = new MyClass(10);
    obj1->display();

    // Dynamic memory allocation for an array of objects
    int size = 3;
    MyClass* objArray = new MyClass[size];

    for (int i = 0; i < size; i++) {
        objArray[i].data = i + 1;
        objArray[i].display();
    }

    // Deallocating memory for the single object
    delete obj1;

    // Deallocating memory for the array of objects
    delete[] objArray;

    return 0;
}
