#include<iostream>
using namespace std;

int main()

{
    int n,reverse=0,reminder,original;

    cout << "Enter your number : ";
    cin >> n;
    original =n;
    while (n!=0)
    {
        reminder=n%10;
        reverse=reverse *10+reminder;
        n=n/10;




    }


    cout << reverse;



    if (original == reverse)
    {
        cout<< "\n The number is palindrome ! ";

    }
    else{
        cout << "Not Palindrome! ";
    }



















}
