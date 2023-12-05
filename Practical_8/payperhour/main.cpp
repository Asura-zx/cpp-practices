#include <iostream>
#include<string>
using namespace std;
class lecturer{
protected:
    string name;
    int id;
public:
    void readdata(string n, int i){
        name=n;
        id=i;
    }
    void printdata(){
        cout<<"Name: "<<name<<" id: "<<id<<endl;
    }
};

class parttime:public lecturer{
private:
    float payperhour;
public:
    void readdata(string n, int i, float ph){
        lecturer::readdata(n,i);
        payperhour=ph;
    }
    void printdata(){
    lecturer::printdata();
    cout<<"the payperhour of this employee is "<<payperhour<<endl<<endl;
    }
};

class fulltime:public lecturer{
private:
    float paypermonth;
public:
    void readdata(string n, int i, float pm){
        lecturer::readdata(n,i);
        paypermonth=pm;
    }
    void printdata(){
    lecturer::printdata();
    cout<<"the payperhour of this employee is "<<paypermonth<<endl<<endl;
    }
};


int main()
{
    parttime p1;
    p1.readdata("Aayush", 1243, 34.45);
    fulltime f1;
    f1.readdata("Aashutosh", 0000, 023.1);
    p1.printdata();
    f1.printdata();
}
