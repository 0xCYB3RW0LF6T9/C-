#include<iostream>
using namespace std;

int main()
{
    int sum,averange,i,n;
    int marks[100];

    cout << "Enter a limit : ";
    cin >>n;

    for(i=0;i<n;i++)
    {

        cout << "Enter marks for "<<i+1 <<" :";
        cin >>marks[i];
    }


    for(i=0;i<n;i++)
    {
        cout << "\nStudent "<<i+1<<" = "<<marks[i];



    }

    for (i=0;i<n;i++)
    {
        sum= sum+marks[i];


    }

    cout << "\nTotal Sum = "<<sum ;


float avg;

avg= (float)sum/n;
cout << "\nAverage : "<< avg;


int max=-1111,min=99999;

for (i=0;i<n;i++)
{
    if (min>marks[i])
    {
        min=marks[i];
    }
    }

    for (i=0;i<n;i++)
    {if (max<marks[i]) {
        max=marks[i];
    }
    }

    cout << "\n Max = "<< max ;
     cout << "\n Minimum = "<< min ;



















}
