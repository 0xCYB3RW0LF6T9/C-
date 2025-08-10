#include<iostream>
using namespace std;
void t(int *a);
int main()
{


    int x,*e;
    cout <<"\nEnter your value : ";
    cin >>x;
    e=&x;
    cout <<"\nBefore mofify = " <<x;

    t(e);
    cout <<"\nAfter modify = " <<x;


}
void t(int *a)
{
    *a+=10;
cout <<"\nin the function = "<<*a ;


}

