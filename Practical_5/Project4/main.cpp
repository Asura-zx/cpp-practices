 #include <iostream>

using namespace std;
class B;
class A{
private:
    int a;
public:
    A(int x):a(x){}
    friend void Swap(A, B);
};
class B{
private:
    int b;
public:
    B(int y):b(y){}
    friend void Swap(A, B);
};
void Swap(A n, B m){
    int t;
    t=n.a;
    n.a=m.b;
    m.b=t;
    cout<<"value after swapping is "<<n.a<<" and "<<m.b<<endl;
}
int main()
{
    A a1(4);
    B b1(6);
    Swap(a1,b1);
    return 0;
}
