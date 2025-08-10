#include<iostream>
#include<string>
using namespace std;
int main()
{   //in general string does not support assignment but by using string keyword we can assign value in then and also concat them by using + sign
    string s1="Help";
    string s2=" me!";
    string s3;


    s3=s1;
    cout <<s3<<endl;

    s3=s1+s2;

    cout <<s3;
}
