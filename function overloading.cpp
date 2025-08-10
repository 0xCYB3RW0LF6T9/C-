#include<iostream>
using namespace std;

void sum(int a, int b);
void sum(int a, int b, int c);

int main()
{
    sum(34,34,43);
    sum(10,20);

}
void sum(int a, int b)
{

    int result =a+b;
    cout << result <<endl;


}
void sum(int a, int b,int c)
{

    int result =a+b+c;
    cout << result<<endl;


}
