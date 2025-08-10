#include<iostream>
using namespace std;


class student{

    public :
        int id ;
        int number;

 void display()
 {

     cout <<id<<"\n"<<number;

 }
    student(int x,int y)
    {
        id=x;
        number = y;

    }


};







int main()
{
  student s1(7234,256252374392);
    s1.display();
    student s2(23,3029402749);

    s2.display();

}
