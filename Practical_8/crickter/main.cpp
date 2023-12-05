#include <iostream>
#include<string>

using namespace std;
class cricketer{
protected:
    string name;
    int age;
    int noofmatchplayed;
public:

    void setname(string n){
        name=n;
    }
    void setage(int i){
    age=i;
    }
    void setnumberofmatch(int n){
    noofmatchplayed=n;
    }
    void getdata(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Number of match played: "<<noofmatchplayed<<endl;
    }
};

class bowler: public cricketer{
private:
    int wicketnumber;
public:
    void setdata(string name, int age, int matchplayed, int wicketnumber){
        wicketnumber=wicketnumber;
        setname(name);
        setage(age);
        setnumberofmatch(matchplayed);
    }
    void display(){
        getdata();
        cout<<"the number of wickets are "<<wicketnumber<<endl;
    }
};

class batsman: public cricketer{
private:
    int runnumber, centurynumber;
public:
    void setbatsmandata(string name, int age, int matchplayed, int r, int c){
        runnumber=r;
        centurynumber=c;
        setname(name);
        setage(age);
        setnumberofmatch(matchplayed);
    }
    void getbatsmannumbers(){
        getdata();
        cout<<"the runnumber is "<<runnumber<<" centurynumber is "<<centurynumber<<endl;
    }
};


    int main()
{
    bowler person1;
    batsman person2;
    person1.setdata("Aayush", 19, 23, 12 );
    person2.setbatsmandata("Aashutosh", 68, 100, 0, 0);
    person1.display();
    person2.getbatsmannumbers();

    return 0;
}
