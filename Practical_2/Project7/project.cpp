//wap to calculate average of students using DMA

#include<iostream>
#include<iterator>
using namespace std;
int main(){
    int *avgptr, n, num;
    double avg=0;

    cout<<"type the number of data you want to add: ";
    cin>>n;

    avgptr=new int(n);

    for(int i=0; i<n; i++){
        cin>>avgptr[i];
    }

    for(int i=0; i<n; i++){
        avg+=avgptr[i];
    }

    cout<<"The average of given data is : "<<static_cast<float>(avg/n);
    delete avgptr;
    return 0;
}