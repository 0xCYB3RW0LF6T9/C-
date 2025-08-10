#include<iostream>
#include<stdlib.h>

using namespace std;


int main()
{
    int z,x;

while (1)
{
    cout << "Please enter a number sir (Between 1-5): ";
    cin>>x;
    z=rand()%6;
    cout << "The number was : "<<z<<endl ;
    if(x==z)
    {cout <<"Well done sir!"<<endl;
    break;

    }
    else{
        cout << "Try again !";
    }

}



}

