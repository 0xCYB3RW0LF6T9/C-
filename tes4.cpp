#include<iostream>
#include<iomanip>
using namespace std;

class test
{   public:

    char name[100];
    int id;
    int roll;
    char bg[5];

    void dis()
        {
    cout << id <<"\n" << roll;

        }



    test(int x, int y)
        {
            id =x;
            roll=y;


        }




        };

int main()
{
    test p1(2350924,29304);
  //  cout<<setw(25) <<"Enter name for person 1 : ";
  //  gets(p1.name);
   // cout<<setw(25) <<"\n Enter id : ";
  //  /cin>>p1.id;
  //  cout<<setw(25) <<"\n Enter roll : ";
   // cin>>p1.roll;
   // cout<<setw(25) << "Enter  your Blood_Group : ";
   // cin>> p1.bg;


    //cout <<setw(25)<< "\n Name : "<<p1.name <<"\nId : "<< p1.id <<"\nBlood group : " <<p1.bg;

    p1.dis();



}
