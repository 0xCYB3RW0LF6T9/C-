#include<iostream>
using namespace std;

int main()
{
    int i ;

    for (i=0;i<100;i++)
    {
        if (i==10)
        {
            break;
        }
        if(i==5)
        {
            continue;
        }
        cout << i<<endl;
    }





}
