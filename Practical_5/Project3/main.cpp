#include <iostream>

using namespace std;
class Teacher{
private:
    int age;
    int id_number;
    static int Count, Decount;
public:
    Teacher(int a,int i){
        age=a;
        id_number=i;
        Count++;
    }
    ~Teacher(){
        Decount++;
        cout<<Decount<<" number of objects eliminated"<<endl;
    }
    static int getcount(){
        return Count;
        //age++ will result in error
    }
    void showData()const{
        cout<<"the age of the teacher is "<<age<<" and id number is "<<id_number<<endl;
    }

};
int Teacher::Count=0;
int Teacher::Decount=0;

int main()
{

    Teacher t1(23, 23453);
    {
        Teacher t2(34,54335);
    }
    Teacher t3(45,45345);
    cout<<"after initialization: count = "<<Teacher::getcount()<<endl;
    return 0;
}
