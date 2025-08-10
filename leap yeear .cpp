#include<iostream>
#include<iomanip>
using namespace std ;


int main()
{
    int year;
    cout <<setw(20)<< "Sir enetr you desire year = ";
    cin >> year;
    if(year %400==0 || year%4==0&& year%100!=0)
        cout<<setw(20)<<"\n " <<year<<" is a LEap year";
                   else
        {
            cout<<setw(20) << "Not a leap year";
        }




}

