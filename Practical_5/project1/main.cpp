#include <iostream>

using namespace std;

class myClass{
private:
    int data1;
public:
    myClass(int a):data1(a){}
    void display() const{
        cout<<"the data is "<<data1<<endl;
    }
};

int main()
{
    const myClass c1(5);
    c1.display();

    return 0;
}
