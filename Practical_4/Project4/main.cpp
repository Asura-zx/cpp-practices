#include <iostream>

using namespace std;

class Person{
private:
    int *newmarks=new int[5];
    bool pass;
public:
    void setMarks(){
        cout<<"Type the marks of 5 subjects :"<<endl;
        for(int i=0; i<5; i++){
            cin>>newmarks[i];
            pass=isPass(newmarks[i]);
            if(pass==false){
                cout<<"fail"<<endl;
                exit(0);
            }
            else continue;
        }
        cout<<"pass"<<endl;
    }
    bool isPass(int j){
        (j>=45)?true:false;
    }


};

int main()
{
    Person p1;
    p1.setMarks();
    return 0;
}
