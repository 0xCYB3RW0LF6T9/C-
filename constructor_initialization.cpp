#include<iostream>
using namespace std;

class t{

    public:
   const int addmissionFee,examFee;

    t(int x, int y)
    : addmissionFee(x),examFee(y)

{

}
    void display()
    {
        cout<<addmissionFee<<endl;
        cout<<examFee<<endl;

        }

};

int main()
{
    t n1(234,4234);
    n1.display();




}






