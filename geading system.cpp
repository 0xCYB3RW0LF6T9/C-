#include<iostream>
using namespace std;
int main()
{   int marks;
    char name[100];
    cout <<"Enter your name sir : ";
    cin>> name;

    cout << "\n Welcome to the program Mr. "<< name;

    cout << "\n Please enter your marks Mr."<<name<< " :";
    cin >>marks;

    if (marks >80)
    {
        cout << "\ncongratulations Mr. "<<name << ". \n Your result is A+";
    }

    else if (marks > 70) {
        cout << "Your result is A";
    }
    else if (marks > 60) {
        cout << "Your result is A-";
    }
    else if (marks > 50) {
        cout << "Your result is C";
    }
    else if (marks > 40) {
        cout << "Your result is D";
    }
    else {
        cout << "Your result is F";
    }




}
