/*WAP to find area for a triangle (when its sides are given using the concept of overloaded constructor)*/

#include <iostream>
#include <math.h>

using namespace std;

class triangle{

    public:
       triangle(double a, double b, double c){
            double s= a+b+c;
            double Area= sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"The area of triangle is "<<Area<<" m^2"<<endl;
       }
        triangle(double a, double b){

            double Area= (a*b)/2;
            cout<<"The area of triangle is "<<Area<<" m^2"<<endl;
       }
};

int main()
{
    triangle t1(32, 2, 45.5);
    triangle t2(4,6.5);

    return 0;
}
