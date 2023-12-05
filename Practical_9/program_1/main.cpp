#include<iostream>
#include<string.h>
using namespace std;
class media{
protected:
    char title[50];
    float price;
public:
    media(char *s, float a){
    strcpy(title,s);
    price=a;
    }
    virtual void display(){}
    };

class book:public media{
    int pages;
public:
    book(char *s, float a, int p):media(s,a){
        pages=p;
    }
    void display();
    };
class tape:public media{
    float time;
public:
    tape(char*s, float a, float t):media(s,a){
    time=t;
    }
    void display();
};

void book::display(){
    cout<<"\nTitle"<<title;
    cout<<"\npages"<<pages;
    cout<<"\nPrices "<<price;

}
void tape::display(){
    cout<<"\nTitle"<<title;
    cout<<"\\nplay time"<<time<<"mins";
    cout<<"\nPrices "<<price;

}

int main(){
    char *title = new char[30];
    float price, time;
    int pages;
    //book details
    cout<<"ENTER BOOK DETAILS\n";
    cout<<"TITLE";cin>>title;
    cout<<"PRICE:";cin>>price;
    cout<<"PAGES:";cin>>pages;
    book book1(title, price, pages);
    //tape details
    cout<<"ENTER TAPE DETAILS\n";
    cout<<"TITLE";cin>>title;
    cout<<"PRICE:";cin>>price;
    cout<<"PLAY TIME:";cin>>time;
    tape tape1(title, price, time);
    media*list[2];
    list[0]=&book1;
    list[1]=&tape1;
    cout<<"\n   BOOK"<<endl;
    list[0]->display();
    cout<<"\n   TAPE"<<endl;
    list[1]->display();
    return 0;
}

