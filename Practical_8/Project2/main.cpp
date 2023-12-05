#include <iostream>

using namespace std;
class base{

public:

    virtual void getdata()const{
    cout<<"the base data "<<endl;
    }
};


class derived11:virtual public base{

public:

    void getdata()const override{
        cout<<"the derived11 data "<<endl;
    }
};

class derived12:virtual public base{

public:

    void getdata()const override{
        cout<<"the derived12 data "<<endl;
    }
};
class derived2:public derived11, public derived12{
public:
    void getdata() const override{
        cout<<"derived 2"<<endl;
        derived11::getdata();
    }
};
int main()
{
    base b;
    derived11 d11;
    derived12 d12;
    derived2 d2;
    b.getdata();
    d11.getdata();
    d12.getdata();
    d2.getdata();
    return 0;
}
