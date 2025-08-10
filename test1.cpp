#include<iostream>
using namespace std;

int main()
{
    char a,x;
    cout << "Enter your Character : ";
    cin >>a;
    x=tolower(a);
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        {
            cout << "Vowel"<<endl;
            break;
        }
    default:
        {
            cout <<"Consonent";


        }



    }








}







