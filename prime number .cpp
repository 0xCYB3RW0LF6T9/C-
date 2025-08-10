#include<iostream>
using namespace std;

int main()
{

    int i,x,flag=0;

    cout << "Enetr your number sir : ";
    cin>> x;

    for (i=2;i<x/2;i++)
    {
        if (x%i==0)
        {
            flag =1;
        }
    }

    if (flag==0)
    {
        cout << x << " is a Prime NUmber ";
    }

    if (flag==1)
    {
        cout << x << " is not a Prime NUmber ";
    }





}
