#include<iostream>
using namespace std;
class person{
    public:
        string name ;
        int number;

        void display()
        {
            cout << name <<"\n"<<number<<endl;

        }

    };
class student : public person{
        public:
            int id;
            void display2()
            {
                cout <<"ID no. = "<<  id<<endl;
                cout <<"Name = "<< name <<"\n"<<"Number ="<< number<<endl;

            }


};




int main()
{
    student s1;
    s1.id =46;
    s1.name="Tahmid";
    s1.number=013332222;

    s1.display2();
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";
    cout <<"\n";

    s1.display();


}
