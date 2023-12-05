 #include <iostream>

using namespace std;

class myClass{
private:
    static int Count;
public:
    myClass(){
    Count++;
    }
    static int getCount(){
    return Count;
    }
};
int myClass::Count=0;
int main()
{
    cout<<"count before initialization: "<<myClass::getCount()<<endl;
    myClass c1;
    myClass c2;
    cout<<"count after object creations : "<<myClass::getCount()<<endl;
    return 0;
}
