/*Create a Mountain class with data members name, height, location, a constructor that initializes the members to the values passes it to its parameters, a function called
compHeight to compare 2 objects and DisplInf to display the information of mountain. in main create 2 objects of the m=class mountain and print the information of the
mountain which is greatest height*/
#include <iostream>
#include <string>

using namespace std;

class mountain{
    private:
        string name;
        double height;
        string location;
    public:
        mountain(string n, double h, string l){
            this->name=n;
            this->height=h;
            this->location=l;
        }
        double compHeight(mountain m1){
            double great=m1.height-this->height;
            return great;
        }
        void DispInf(){
            cout<<"Name :\t\t "<<this->name<<endl;
            cout<<"Height :\t "<<this->height<<endl;
            cout<<"Location :\t "<<this->location<<endl;
        }
};

int main()
{
    mountain m1("Everest", 8848, "solukhumbu");
    mountain m2("myHouse", 894, "Myplace");
    double greHiet=m2.compHeight(m1);
    if(greHiet>0)
        m1.DispInf();
    else m2.DispInf();
    return 0;
}
