#include<iostream>
using namespace std;

int main()
{
    int n1,n2,i,next=0,limit;

    next=n1+n2;
   cout<< "Enetr limit : " ;
   cin >>limit;
    cout <<"Enetr two number : ";
    cin >>n1>>n2;
    cout << "Fibonacci series : "<<"" <<n1<<" "<<n2;
    for(i=0;i<limit;i++)
    {
        cout <<" "<< next;
        n1=n2;
        n2=next;
        next=n1+n2;
    }


    }

