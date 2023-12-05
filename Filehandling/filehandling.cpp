#include <iostream>
#include<fstream>
#include<conio.h>
#include <string>
using namespace std;

int main()
{
    //ofstream fout;

    //fout.open("hello world");
    //fout<<"content to file \n";
    //fout<<42<<endl;
    //fout.close();
//
    //    //ofstream fout;
    //fout.open("hello world",ios::app);
    //fout<<"\n\n added hello";
    //fout.close();

    ifstream fin;
    fin.open("hello world");
    if (fin.fail()){
	    cout<<"failed to open the file !";
    }
    else if(fin.bad()){
	    cout<<"invalid operation !";
    }
    else{
    cout<<"opening the file: "<<endl;
    //const int no_of_char_in_line=80;
    //char array_to_store_characters[no_of_char_in_line];

    string name, age, dis;
    while(fin){
        fin>>name>>age>>dis;
        cout<<name<<"\t"<<age<<"\t"<<dis<<endl;
        cout<<endl;
    }
    }
    fin.close();
    return 0;
}

