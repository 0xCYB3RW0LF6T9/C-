
#include<iostream>
#include<string.h>
using namespace std;

class xss{

public:
char name [50];
int id;
int number ;


    xss(char b[50],int x, int y){

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
    xss n1({"TazZ",04,18319});

    n1.display();

}

