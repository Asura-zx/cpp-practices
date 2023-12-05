//Create a class person with data members Name, age, address, and citizen number. write a constructor to initialize
//the value of the person. Assign citizenship number if the age is greater than 16 else assign value zero to citizenship number. Also create a funtion
//to display the values
#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
        int citizn;
    public:
        Person(string n, int a, string addr, int c){
            this->name=n;
            this->age=a;
            this->address=addr;
            if(this->age>16)
                this->citizn=c;
            else this->citizn=0;
        }
        void Display(){
            cout<<"Name : \t\t\t"<<this->name<<endl;
            cout<<"Age : \t\t\t"<<this->age<<endl;
            cout<<"Address : \t\t"<<this->address<<endl;
            cout<<"Citizenship Number : \t"<<this->citizn<<endl<<endl;
        }
};

int main()
{
    Person p1("Aayush",20,"Bafal", 23453);
    Person p2("Abhi",15,"kalanki", 34545);
    p1.Display();
    p2.Display();
    return 0;
}
