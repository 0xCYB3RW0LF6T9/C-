#include<iostream>
#include<string.h>
using namespace std;

class xss{

public:
char name [50];
int id;
int number ;


   void lester(char b[50],int x, int y){

    strcpy(name,b);
    id=x;
    number =y;

    }
    void display(){

     cout<<"\n"<<name;
        cout<<"\n"<<id;
            cout<<"\n"<<number;
    }

};



int main()
{
    xss n1;
    n1.lester("taz",34,203502);
    n1.display();

}

