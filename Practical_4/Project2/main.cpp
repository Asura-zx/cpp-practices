#include <iostream>

using namespace std;

class counter{
private:
    static int count;
    int n;
public:
    counter(){
        count++;
        cout<<"The object:"<<count<<" of class is created !"<<endl;
        n=count;
    }
    ~counter(){
        cout<<"The object:"<<n<<" of class destroyed !"<<endl;
    }
};
int counter::count;
int main()
{
    counter c1;
    counter c2;
    {
        counter c3;
    }
    counter c4;
    return 0;
}
