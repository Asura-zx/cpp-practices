//Program to add 2 time time objects
#include <iostream>
#include <math.h>

using namespace std;


 class Time{
private:
    int minute;
    int second;
    int hour;
public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s){}
    void addTime(Time t1){
        second+=t1.second;
        minute+=t1.minute;
        hour+=t1.hour;

        minute+=second/60;
        second=second%60;
        hour+=minute/60;
        minute=minute%60;

    }
    void subtractTime(Time t1){
        second-=t1.second;
        minute-=t1.minute;
        hour-=t1.hour;

        minute-=second/60;
        second=second%60;
        hour-=minute/60;
        minute=minute%60;

    }
    void Displaytime(){
        cout<<fabs(hour)<<" "<<fabs(minute)<<" "<<fabs(second);
    }
};

int main()
{
    Time t1(3,45,56);
    Time t2(4,30,26);
    Time t3(6,20,45);
    t3.subtractTime(t1);
    t2.addTime(t1);
    t2.Displaytime();
    cout<<endl;
    t3.Displaytime();
    return 0;
}
