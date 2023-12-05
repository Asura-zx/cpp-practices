#include <iostream>
#include <string>

using namespace std;
class Person{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    void findPerson(Person p2){
        if(this->age>p2.age)
            cout<<this->name<<" is elder"<<endl;
        else cout<<p2.name<<" is elder"<<endl;
    }

};

int main()
{
    Person p1("Aayush", 20);
    Person p2("Abhi", 26);
    p1.findPerson(p2);
    return 0;
}
