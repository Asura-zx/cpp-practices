#include <iostream>
#include <math.h>

using namespace std;

class Time{
private:
    int minute;
    int second;
    int hour;
public:
    Time(int h, int m, int s) : hour(h), minute(m), second(s){} Time(){}
    void addTime(Time t1, Time t2){
        second=t1.second + t2.second;
        minute=t1.minute+t2.minute;
        hour=t1.hour+t2.hour;

        minute+=second/60;
        second=second%60;
        hour+=minute/60;
        minute=minute%60;

    }
    void subtractTime(Time t1, Time t2){
        second=t1.second-t2.second;
        minute=t1.minute-t2.minute;
        hour=t1.hour-t2.hour;

        minute-=second/60;
        second=second%60;
        hour-=minute/60;
        minute=minute%60;

    }
    void Displaytime(){
        cout<<fabs(hour)<<endl<<fabs(minute)<<endl<<fabs(second);
    }
};

int main()
{
    Time t1(2,23,34);
    Time t2(3,32,43);
    Time *t3;
    t3=new Time();
    t3->addTime(t1,t2);
    t3->Displaytime();
    delete(t3);

    return 0;
}
