//calculate the volume of cube, cuboid and cylinder using the concept of function overloading

#include <iostream>
using namespace std;

const double PI=3.1415;

double volume(int);
double volume(int, int);
double volume(int, int, int);

int main(){
	double l,b,h,r;
	double vol_cube, vol_cuboid, vol_cyl;
	
	cout<<"Please type the length of cube: ";
	cin>>l;
	vol_cube=volume(l);
	
	cout<<"Please type the length, breadth and height of cuboid: ";
	cin>>l>>b>>h;
	vol_cuboid=volume(l, b, h);

	cout<<"Please type the radius and height of cylinder: ";
	cin>>r>>h;
	vol_cyl=volume(r, h);

	cout<<"The volume of cube is"<<vol_cube<<endl;
	cout<<"The volume of cuboid is"<<vol_cuboid<<endl;
	cout<<"The volume of cylinder is"<<vol_cyl<<endl;
}

double volume(int l){
	return l*l*l;
}

double volume(int l, int b, int h){
	return l*b*h;
}

double volume(int r, int h){
	return PI*r*r*h;
}
