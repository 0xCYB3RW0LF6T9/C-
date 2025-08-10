#include<iostream>
#include<string.h>
using namespace std;

class t{
public:

char name[100];
int id;
int number;

 t(char tx[100],int x,int y)
 {
     strcpy(name,tx),
     id=x;
     number=y;
 }


};

int main()
{
    t s1("Tahmid",04,92749238572);
    cout <<s1.name ;
    cout<<"\n"<<s1.number;
    cout << "\n"<<s1.id ;

}
