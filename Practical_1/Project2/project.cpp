//To check if the number is prime or not
//
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	for(int i=2;i<num;i++){
		if(num%i==0){
			cout<<"Number is not prime !"<<endl;
			break;
		}
		else {
			cout<<"Number is prime !"<<endl;
			break;
		}
	}
	return 0;
}
