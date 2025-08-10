#include<iostream>
using namespace std;
int main()
{

    char x;
    cout << "Please enter a word : ";
    cin >>x;

    switch (x)
    {
    case 'a':
    case 'A':
    {
        cout << "Vowel" ;
        break;
    }


    case 'e':
    case 'E':
    {
        cout << "vowel ";
        break;


    }
    case 'i':
    case 'I':
    {
        cout << "Vowel";
        break;

    }
    case 'o':
    case'O':
    {
        cout << "Vowel ";
        break;
    }
    case 'u':
    case'U':
    {
        cout << "Vowel ";
        break;
    }

    default:
        {
        cout << "Consonant";
        }








    }




}
