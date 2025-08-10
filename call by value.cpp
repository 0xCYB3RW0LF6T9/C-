#include<iostream>
using namespace std;
void t(int);
int main()
{


    int x;
    cout <<"\nEnter your value : ";
    cin >>x;
    cout <<"\nBefore mofify = " <<x;

    t(x);
    cout <<"\nAfter modify = " <<x;


}
void t(int a)
{
    a+=10;
cout <<"\nin the function = "<<a ;


}
