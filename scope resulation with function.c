#include<iostream>

using namespace std;

class test{

int num1,num2;
public:
    void set_value(int a, int b);
    void show();


};


void test::set_value(int a, int b)
{
    num1=a;
    num2=b;


}
void test ::show(){

cout <<"x = "<<num1 <<"  y = " << num2 <<endl;
}




int main()
{
    test n1;
    n1.set_value(2,1);
    n1.show();

}

