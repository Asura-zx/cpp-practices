//Create a class named city that will have two member variables cityName(char[20]) and DistFromKtm(float). Add member function
//to set and retrieve the cityName and distfromKtm saperatedly. Add operator overloading to
//find the distance between the cities (just find the difference of DIstFromKtm) and sum of distance of those cities from kathmandu.
//In the main function, initialize three city objects. set the first and second city to be pokhara and Dhangadi. Display the sum of
//DIstfromKtm of pokhara and Dhangadi and distance between pokhara and Dhangadi.
#include <iostream>
#include<cstring>

class city{
private:
    char cityName[20];
    float distFromKtm;
public:
    void setCityName(char* name){
       strcpy(cityName,name);
    }
    void setdistFromKtm(float dist){
        distFromKtm=dist;
    }
    char* getcityName(){
        return cityName;
    }

};

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
