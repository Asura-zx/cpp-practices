//WAP to create a class name Database for storage of personal information

#include <iostream>
#include<string>

using namespace std;

class Database{
    private:
        string name;
        int age;
        string address;
    public:
        void getData(){
            cout<<"Name :\t\t"<<this->name<<endl;
            cout<<"Age :\t\t"<<this->age<<endl;
            cout<<"Address :\t"<<this->address<<endl;
        }
        void setData(string n, int a, string addr){
            this->name=n;
            this->age=a;
            this->address=addr;
        }

};

int main()
{
    Database d1;
    d1.setData("Aayush", 20, "Bafal");
    d1.getData();
    return 0;
}
