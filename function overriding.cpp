#include<iostream>
using namespace std;

class student{
public:
void display(){

        cout<< "I am a student ";
            }
};

class person : public student
{
    public:
    void display(){
    cout << "I am a person ";
    }
};

int main()
{
    person n1;
    n1.display();
    student n2;
    n2.display();


}

