#include <iostream>

using namespace std;

class Number {
private:
    double value;

public:
    Number(double value) : value(value) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    Number operator-(const Number& other) const {
        return Number(value - other.value);
    }

    Number operator*(const Number& other) const {
        return Number(value * other.value);
    }

    Number operator/(const Number& other) const {
        if (other.value != 0) {
            return Number(value / other.value);
        } else {
            throw runtime_error("Division by zero is not allowed");
        }
    }

    void display() const {
        cout << value << std::endl;
    }
};

int main() {
    Number num1(10.5);
    Number num2(5.2);

    Number sum = num1 + num2;
    Number difference = num1 - num2;
    Number product = num1 * num2;
    Number quotient = num1 / num2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    cout << "Product: ";
    product.display();

    cout << "Quotient: ";
    quotient.display();

    return 0;
}
