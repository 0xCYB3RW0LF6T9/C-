#include<iostream>
#include<string.h>
using namespace std;

class xss{

public:

const int id,number;



    xss(int x, int y)
   : id(x),number(y)
       {

        }

};



int main()
{

    xss n1(04,274287);

        cout<<"\n"<<n1.id;
            cout<<"\n"<<n1.number;
}
