#include<iostream>
#include<cstring>
using namespace std;
class t{
public:
const int id;
const int number ;
char name[100];
        void display(){
        cout<< name<<endl;
            cout<< id<<endl;
                cout<< number<<endl;
                            }
    t (char a[100],int x, int y)
    :id(x),number(y)
    {

    strcpy(name,a);


    }




};
int main()
{
    t n1("Taz",23,34298);;
   //  cout  <<"Enter your name please : ";
   //  gets(n1.name);
    // cout <<"\n Enetr id : ";
    // cin >> n1.id;
     //cout << "\n Sir enter your number : ";
     //cin>> n1.number;


    n1.display();





}
