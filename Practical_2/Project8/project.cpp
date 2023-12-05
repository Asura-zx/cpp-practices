//WAP that displays the current monthly salary of CEO, Information officer, System Analyst and programmer 
//that has been increased by 9, 10 , 12 , 12 percentage respectively in year 2020. let us assume the salary in 2005 are ceo 80000 rs/m
// IO 40000 rs/m, SA 30000 rs/m
//and programmer 25000 rs/m

#include<iostream>
using namespace std;

double newSalary(double salary, double increment=12){
    double nsalary=salary+(salary*increment/100);
    return nsalary;
}
 
void display_salary(){
    cout<<"The initial salary is: \n\tceo\t:80000rs/m\n\tInformation officer\t:40000 rs/m\n\tSA\t:30000rs/m\n\tprogrammer\t:25000rs/m\n"<<endl;
    cout<<"The new salary for: "<<endl;
    cout<<"CEO is "<<newSalary(80000,9)<<endl;
    cout<<"Information Officer is "<<newSalary(40000,10)<<endl;
    cout<<"System Analyst is "<<newSalary(30000)<<endl;
    cout<<"Programmer is "<<newSalary(25000)<<endl;
}

int main(){
    display_salary();
    return 0;
}