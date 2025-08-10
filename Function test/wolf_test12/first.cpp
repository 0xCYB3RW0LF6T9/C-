#include <iostream>
#include "first.h"
using namespace std;

first::first()
{
   cout <<"Auto call from constructor";
}
first:: ~first()
{

    cout<<"\n This is destructor ! ";
}
void first::display()
{


    cout <<"\n this is the display function";


}
void first::display1() const{

cout <<"This is constant part of program !";
}
