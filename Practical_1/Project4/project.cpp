//To demonstrate the concept of namespace

#include<iostream>
namespace character1{
	int age=34;
	double height=5.5;
};
namespace character2{
	int age=56;
	double height=6.4;
};
using namespace std;

int main(){
	
	cout<<"The age of first character is "<<character1::age<<" and the height is "<<character1::height<<" !"<<endl;
	cout<<"The age of second character is "<<character2::age<<" and the height is "<<character2::height<<" !"<<endl;
	return 0;
}

