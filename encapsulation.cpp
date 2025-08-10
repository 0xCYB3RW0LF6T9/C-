#include<iostream>
using namespace std;
class t{
 private :
     string name;

 public :
    void writeName(string x)
    {
        name =x;

    }

    string read()
    {

    return name;

    }
};

int main()
{


    t n1;
    n1.writeName("Hacked");
    cout << n1.read();


}
