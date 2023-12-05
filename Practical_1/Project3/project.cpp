//to set a structure to hold date(mm,dd,yy) and print them
#include<iostream>
using namespace std;

void getdate(int , int, int);

struct date{
	int mm;
	int dd;
	int yy;
};

int main(){
	struct date d1;
	
	cout<<"Type the month:"<<endl;
	cin>>d1.mm;
	cout<<"Type the day:"<<endl;
	cin>>d1.dd;
	cout<<"Type the year:"<<endl;
	cin>>d1.yy;

	getdate(d1.mm, d1.dd, d1.yy);
	
	return 0;
}
void getdate(int mm, int dd, int yy){
	cout<<"The date is : "<<mm<<"/"<<dd<<"/"<<yy<<"/"<<endl;
}



