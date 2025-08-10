#include<iostream>
using namespace std;


int main()
{
    int i,sum=0,n;

    cout << "Enter limit : ";
    cin>>n;

    for (i=2;i<n;i+=2)
    {
        sum +=i;
    }
    cout << sum;

}
