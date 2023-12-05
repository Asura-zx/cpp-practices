//to swap 2 variable with reference variable and normal variable
#include<iostream>
using namespace std;
void refSwap(int& a, int& b){
    int t;
    t=a;
    a=b;
    b=t;
}

void nromSwap(int a, int b){
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"the value after swapping is "<<a<<" and  "<<b<<endl<<endl;
}
int main(){
    int i=2, j=3, k=6, l=8;
    refSwap(i,j);
    cout<<"the value after swapping is "<<i<<" and  "<<j<<endl;

    nromSwap(k,l);
    return 0;
}