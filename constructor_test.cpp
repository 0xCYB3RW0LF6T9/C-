#include<iostream>
using namespace std;


class t{


    public :

    int id,number;

    t(int x, int y)
    {
        id=x;
        number=y;}


    void display(){


    cout << id<<"\n";
    cout <<number;
    }

};

int main()
{   t n1(36,349553);



    n1.display();


}
