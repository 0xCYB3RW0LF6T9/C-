
#include<iostream>
using namespace std;

void add (int a,int b);

void subt(int a, int b);
void divi(int a, int b);
void multi(int a, int b);


int main()
{
    int x,y;
    cout << "Enter two numbers : ";
    cin >> x>> y;
    add(x,y);
    multi(x,y);
    divi(x,y);
    subt(x,y);
}
void add (int a,int b)
{
    int sum =a+b;
    cout <<sum<<endl;
}
void subt(int a, int b)
{
    int result=a-b;
    cout <<result<<endl;

}
void multi(int a, int b)
{
    int result=a*b;
    cout <<result<<endl;

}
void divi(int a, int b)
{
    float result=(float)a/b;
    cout <<result<<endl;

}



