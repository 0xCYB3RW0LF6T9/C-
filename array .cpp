#include<iostream>
using namespace std;

int main()
{
 int marks[100],i,n;

 cout << "enter limit : ";
    cin >> n;

   for (i =0;i<n;i++ )
   {

       cout <<"\n Please enter marks for student_ "<<i+1<<":" ;
       cin >>marks[i];


   }
    for (i=0;i<n;i++)
        {

            cout <<"\n student [ "<< i<<"] = "<<marks[i] ;

        }



}
