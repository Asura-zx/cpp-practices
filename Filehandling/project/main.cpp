
#include<iostream>
#include<fstream>
#include<conio.h>

using namespace  std;

  class person{
    char name[40];
    int roll;
    int marks;
    public:
    void getdata(){
      cout<<"Enter name: ";cin >>name;
      cout<<"Enter roll: "; cin>>roll;
      cout<<"Enter marks: "; cin>>marks;
    }
    int getroll(){
        return roll;
    }
    void showdata(){
      cout<<"\n Name : "<<name;
      cout<<"\n Roll : "<<roll;
      cout<<"\n Marks : "<<marks;
    }
  };

  void display(){
      system("cls");
      static int i=0;

      ifstream fin;
      person per2;
      fin.open("person.txt");
      fin.read((char*) & per2, sizeof(per2));
      while(!fin.eof()){

        cout<<"\n\nshowing person "<<i<<" : "<<endl;
        per2.showdata();
   
        fin.read((char*) & per2, sizeof(per2));
      }
      fin.close();
  }

void clean(){
  ofstream fout;
  fout.open("person.txt");
  fout.clear();
  cout<<"file cleared!"<<endl;
  fout.close();
}

void seek(int rollnumber){
  ifstream fin;
  person per;
  fin.open("person.txt");
  fin.seekg(0,ios::end);
  if(!fin){
    cout<<"cannot find file!";

  }

  fin.read((char*) & per, sizeof(per));
  while(!fin.eof()){
    if(per.getroll()==rollnumber){
        per.getdata();
    }
    fin.read((char*) & per, sizeof(per));
  }

  per.showdata();
  fin.close();
  }

void addrecord(){
    person pers;
    pers.getdata();
  ofstream fout;
  fout.open("Person.txt",ios::app);
  fout.write((char*)&pers, sizeof(pers));
  cout<<"data added !"<<endl;
  fout.close();
}

void deleterecord(int roll){
    person per;
    ofstream fout;
    ifstream fin;
    fout.open("temp.txt");
    fin.open("person.txt");
    fin.read((char*) & per, sizeof(per));
    while(!fin.eof()){
        if(per.getroll()==roll){
            cout<<"data deleted";
        }
        else{
            fout.write((char*)&per, sizeof(per));
        }
        fin.read((char*) & per, sizeof(per));
    }

    fin.close();
    fout.close();
    remove("person.txt");
    rename("temp.txt","person.txt");

}

int main(){

  cout<<"welcome to file handling !"<<endl;
  cout<<"what do you want to do : "<<endl;
  cout<<"a. Add Record"<<endl<<
        "b. Display Record"<<endl<<
        "c. Search in Record"<<endl<<
        "d. Modify Record"<<endl<<
        "e. Delete Record"<<endl<<
        "f. Clear file"<<endl<<endl;
    int r;
    char c=getch();
  switch(c){
    case 'a':
       addrecord();
       break;
    case 'b':
        display();
        break;
    case 'c':

        cout<<"Type the roll number you want to search: ";cin>>r;
        seek(r);
        break;
    case 'd':
        break;
    case 'e':
        cout<<"Enter roll number to delete: ";cin>>r;
        deleterecord(r);
        break;
    case 'f':
        clean();
    default:
        cout<<"exited";
                break;
  }



return 0;
}
