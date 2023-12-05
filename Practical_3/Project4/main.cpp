//create a class called student with 3 data members (stdnt_name[20], faculty, roll no), a function called read data() to take the details
//of the student from the user and a function called display data() to dispaly the details of the students. in main create 2 objects of the
//class student and for each object call both of the functions.
#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        int roll_no;
        string stdnt_name;
        string Faculty;
    public:
        void readData(){
            cout<<"Type the roll no, student name and Faculty : ";
            cin>>this->roll_no>>this->stdnt_name>>this->Faculty;
        }
        void displayData(){
            cout<<"roll no :\t"<<this->roll_no<<endl;
            cout<<"student name :\t"<<this->stdnt_name <<endl;
            cout<<"Faculty :\t"<<this->Faculty<<endl;
        }
};

int main()
{
    Student s1, s2;
    s1.readData();
    cout<<endl;
    s2.readData();
    cout<<endl;
    s1.displayData();
    cout<<endl;
    s2.displayData();
    return 0;
}
