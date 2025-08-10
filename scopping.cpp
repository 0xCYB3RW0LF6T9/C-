#include<iostream>
using namespace std;

int x=100;

int main()
{

    int x=1;
    cout <<x << endl; // it will print local variable only

    cout << ::x <<endl;



}
