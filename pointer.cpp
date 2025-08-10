#include<iostream>
using namespace std;

int main()
{

    int x,*p;
    x=6;
    p=&x;

   int *z, y=90;
    z=&y;

    int sum = *p+*z;
    cout << sum;



}
