#include<iostream>
using namespace std;
class t{
public :
string name;
void display ()
{

    cout << name;


}
void write(string name){

this ->name=name;
}


};

int main()
{
    t n1;
    n1.write("taz");
    n1.display();


}
