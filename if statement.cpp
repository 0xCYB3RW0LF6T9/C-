#include<iostream>
using namespace std;

int main()
{
    char name[50];
    int a;
    cout << "Sir please Enter your name sir : ";
    cin >> name;

    cout << "\nWelcome to the program " << name << " sir" ;

    cout << "\nsir enter your number : ";

    cin >> a;

    if (a>0)
    {

        cout << "\n Sir your number is<" <<a <<"and it is" << "Positive" <<endl;

    }

    if(a<0)
    {
        cout << "\n it is negative sir ";


    }

    if(a == 0)
    {
        cout <<" \nsir it is xero";

    }




}
