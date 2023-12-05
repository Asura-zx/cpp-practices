//To check if number is even or odd
//
//
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int number;
	cout<<"please type the number"<<endl;
	cin>>number;
	if(number%2==0){
		cout<<"The number is even !"<<endl;
	}
	else cout<<"The number is odd !"<<endl;
	getch();
	return 0;
}
