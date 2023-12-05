#include <iostream>

using namespace std;
class Array{
private:
    int Size;
    int* arr;
public:
    Array(int s){
        Size=s;
        arr=new int(Size);
    }
    ~Array(){
        delete[] arr;
    }
    int& operator[](int i){
        return arr[i];
    }
    void display(){
        for(int i=0; i<Size; i++){
            cout<<arr[i]<<endl;
        }
    }



};
int main()
{
    Array a1(4);
    a1[0]=3;
    a1[1]=4;
    a1[2]=5;
    a1[3]=6;
    a1.display();
    return 0;
}
