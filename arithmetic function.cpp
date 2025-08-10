#include<iostream>
using namespace std ;

int main()
{

    int num1 , num2;

    cout << "Enter your value for num1 : ";
    cin>> num1 ;
    cout << "\n Enter your value num2 : ";
    cin >> num2 ;


    int sum,dif,mul,mod;
    float div;

    sum = num1+num2;
    dif = num1-num2;
    mul = num1*num2;
    mod = num1%num2;
    div = (float)num1/num2;

    cout << "Total sum is = " << sum;
    cout << "\nTotal difference is = " << dif;
    cout << "\nTatl mulitiplication is = " << mul ;
    cout << "\n diffracion is = "<<div;
    cout << "\n MOd is = "<<mod;



}
