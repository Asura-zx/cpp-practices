//Fibonacci series
#include <iostream>

using namespace std;
class fibonacci{
  private:
      int now, next;
  public:
        fibonacci():now(0),next(1){}

        int operator++(int){
            int temp;
            temp=now;//0 1 1
            now=next;//1 1 1
            next=temp+next;//1 1 2
            cout<<now<<" ";//1 1

        }


};
int main()
{
    fibonacci fib;
    int a=9,b=0;
    while(b!=a){
        fib++;
        b++;
    }
    return 0;
}



//112358
