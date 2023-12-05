#include <iostream>

using namespace std;
class base{protected: int c=0;public:base(){c++;cout<<"base "<<c<<endl;}~base(){cout<<"base executed"<<endl;}};
class derived{protected: int d=0; public: derived(){d++;cout<<"derived "<<d<<endl;} ~derived(){cout<<"derived executed"<<endl;}};
class child{protected: int e=0; public: child(){e++;cout<<"child "<<e<<endl;} ~child(){cout<<"child executed"<<endl;}};


int main()
{
    base b1;
    derived d1;
    child e1;
    return 0;
}

