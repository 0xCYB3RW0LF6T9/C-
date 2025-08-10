#include<iostream>
using namespace std;

class test{
    public:

        int number,id;
        test(int x ,int y)
        {    id = x;
                number=y;
                }
    void display()
    {
        cout << id;
        cout << number ;


    }

};

int main()
{
    test n1(28,234);
    n1.display();


}
