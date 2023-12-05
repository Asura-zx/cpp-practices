#include <iostream>
#include <math.h>

using namespace std;

class Complex{
private:
    double real, imag;
public:
    Complex(double r, double i) : real(r), imag(i){}
    Complex(){}

    void addition(Complex c1, Complex c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
        cout<<"The Addition of the complex is "<<real<<" +i("<<imag<<")"<<endl;
    }
    void Subtraction(Complex c1, Complex c2){
        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;
        cout<<"The Subtraction of the complex is "<<real<<" +i("<<imag<<")"<<endl;
    }
    void Multiplication(Complex c1, Complex c2){
        real=c1.real*c2.real-c1.imag*c2.imag;
        imag=(c1.imag*c2.real)+(c2.imag*c1.real);

        cout<<"The multiplication of the complex is "<<real<<" +i("<<imag<<")"<<endl;
    }
    void Division(Complex c1, Complex c2){

        int divisor=(pow(c2.real,2)+pow(c2.imag,2));
        real=((c1.real*c2.real)+(c1.imag*c2.imag))/divisor;
        imag=((c1.imag*c2.real)-(c1.real*c2.imag))/divisor;
        cout<<"The Division of the complex is "<<real<<" +i("<<imag<<")"<<endl;
    }

};

int main()
{
    Complex c1(4.6,5.7);
    Complex c2(9.8, 2.4);
    Complex c3;
    c3.addition(c1,c2);
    cout<<endl;
    c3.Subtraction(c1,c2);
    cout<<endl;
    c3.Multiplication(c1,c2);
    cout<<endl;
    c3.Division(c1,c2);
    cout<<endl;
    return 0;
}
