#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initialValue = 0) : count(initialValue) {}

    // Prefix increment operator overloading (returns value through object)
    Counter operator++() {
        Counter temp(count);
        ++count;
        return temp;
    }

    // Postfix increment operator overloading (returns value through object)
    Counter operator++(int) {
        Counter temp(count);
        ++count;
        return temp;
    }

    void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c1(5);

    // Prefix increment operator called
    Counter c2 = ++c1;
    c2.displayCount();  // Output: Count: 6

    // Postfix increment operator called
    Counter c3 = c1++;
    c3.displayCount();  // Output: Count: 6
    c1.displayCount();  // Output: Count: 7

    return 0;
}
