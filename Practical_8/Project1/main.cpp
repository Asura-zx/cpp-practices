#include <iostream>

using namespace std;
class base{
protected:
    int data;
public:

    base(){}
        int setdata(int i){
            data=i;
        }
        void display(){
        cout<<" the base data is "<<data<<endl;
    }

};
class derived:public base{
private:
    int data2;
public:
    derived(int d):data2(d){}
    void display(){
        cout<<" the derived data is "<<data2<<endl;
    }
};
int main()
{
    derived d1(5);
    d1.base::setdata(7);
    d1.display();
    d1.base::display();
    return 0;
}
