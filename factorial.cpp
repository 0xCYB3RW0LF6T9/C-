
#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;
    cout <<  "enter your number : ";
    cin >>n;

    cout <<"Facotioal is = ";

    for (i=1;i<=n;i++)
    {
       fact=fact*i;

    }

cout <<fact;

}
