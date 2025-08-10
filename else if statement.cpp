#include<iostream>
using namespace std;

int main ()
{
    int a;
    cout << "sir enter a number ";
    cin >> a;

    if (a<0)
    {

        cout << "Negative";


    }
    else if (a>0)
    {
        cout <<"positive";

    }
    else if (a!=0)
    {
        cout << " Invalid input";
    }
    else{

        cout << "Zero ";

    }


}
