#include<iostream>
using namespace std;

class student{
    public:
        char name[50];
        int id;
        char Subject[10];
        int test()
    {
            cout << id;


    }

};




int main()
{
    class student s1;

    cout << "Enter your name sir : ";
    gets(s1.name);
    cout<<"enetr your id : ";
    cin>>s1.id;

    cout <<s1.name<<" \n"<<s1.id<<endl;
    s1.test();

}
