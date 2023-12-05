//Write a class Time with integer attributes hour, minute and second. INclude the following responsitbilities in class
//      a. Default and parameterized constructor
//      b. Display method to display time in hour, minute and second format
//      c. Appropriate function overload to realize addition of two time object with '+' operator.

#include <iostream>

using namespace std;
class time{
private:
    int hour, minute, second;
public:
    time(){}
    time(int h, int m, int s): hour(h), minute(m), second(s){}
    void display(){
        minute+=second/60;
        second=second%60;
        hour+=minute/60;
        minute=minute%60;
        cout<<hour<<" hours : "<<minute<<" minutes : "<<second<<" second :"<<endl;
    }
    time operator+(time t1){
        time temp;
        temp.hour=hour+t1.hour;
        temp.minute=minute+t1.minute;
        temp.second=second+t1.second;
        temp.minute+=temp.second/60;
        temp.second=temp.second%60;
        temp.hour+=temp.minute/60;
        temp.minute=temp.minute%60;
        return temp;

    }
};
int main()
{
    time t1(14,15,16);
    time t2(3,4,5);
    time temp;
    temp=t1+t2;
    temp.display();
    return 0;
}
