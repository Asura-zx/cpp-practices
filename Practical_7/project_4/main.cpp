#include <iostream>
#include<string>
using namespace std;
class person{
protected:
    string name;
    int age;
public:
    void setname(string n){
    name=n;
    }
    void setage(int a){
    age=a;
    }
    void display();
};
class student:person{
private:
    int student_id;
public:
    void setid(int i){
        student_id=i;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"id : "<<student_id<<endl;

    }
};
class Employee:person{
private:
    int employee_id;
public:
    void setid(int i){
        employee_id=i;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"id : "<<employee_id<<endl;

    }
};
int main()
{
    student s1;
    s1.setname("Aayush");
    s1.setage(19);
    s1.setid(1234);
    Employee e1;
    e1.setname("karan");
    e1.setage(39);
    e1.setid(54254);
    s1.display();
    cout<<endl;
    e1.display();
    return 0;
}
