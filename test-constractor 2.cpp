#include<iostream>
#include<string.h>
using namespace std;

class t {


public :
    char name[50];
    int id;
    int number;
    t(char xs[50],int a,int b){
        strcpy(name,xs);
        id=a;
        number=b; }

    void display()
    {
        cout << name<<endl;
        cout << id<<endl;
        cout << number<<endl;
    }





};




int main()
{
t s("Tahmid Tazowar Sachhya",04,017110);
s.display()
;



}



