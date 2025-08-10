#include<iostream>>
using namespace std;

class nex{

public:
const int id,number;
        nex(int x, int y)
        : id(x),number(y)
        {

        }
    void display(){

    cout << id << "\n"<< number;

    }

};
int main()
{

    nex n1(54,3843945);
    n1.display();


}
