#include<iostream>
using namespace std;

int a=50;

void t();

int main()
{
  int x=10;//local variable

  cout << x <<endl;//accessing local variable
  cout <<a<<endl;//accessing the global variable

    t();



}
void t()
{

    cout << a<<endl;//global variable
}
