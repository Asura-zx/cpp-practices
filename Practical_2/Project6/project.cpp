//WAP to create a program to calculate the area of circle, triangle, and rectangle using the overloaded funtion area
#include<iostream>
#include<math.h>
using namespace std;
const double PI=3.1415;

double area (int );
double area(int, int);
double area(int, int, int);

int main(){
    int a,b,c;
    double area_circle, area_rectangle, area_triangle;

    cout<<"Type the radius of circle: ";
    cin>>a;
    area_circle=area(a);
    cout<<"Type the length and breadth of rectangle: ";
    cin>>a>>b;
    area_rectangle=area(a, b);
    cout<<"Type the 3 sides of triangle: ";
    cin>>a>>b>>c;
    area_triangle=area(a, b, c);

    cout<<"The area of circle is "<<area_circle<<endl;
    cout<<"The area of rectangle is "<<area_rectangle<<endl;
    cout<<"The area of triangle is "<<area_triangle<<endl;

    return 0;
}

double area(int r){

    return PI*r*r;
}

double area(int l, int b){

    return l*b;
}

double area(int a, int b, int c){
    double s= (double(a)+double(b)+double(c))/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}