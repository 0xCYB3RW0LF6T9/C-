#include<iostream>
using namespace std;
int t(int n);
int main()
{
    int x;
   cout<<"Enter your number : ";
    cin>>x;
      cout <<t(x);

}


int t(int n)
{
    if (n==1)
    {
        return 1;
    }
    else {

        return n*t(n-1);
    }


}
