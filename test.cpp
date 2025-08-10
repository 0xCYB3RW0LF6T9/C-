#include <iostream>
#include "test.h"

using namespace std;
test::test()
{
    cout<<"in constructor";
}
test :: ~test()
{
    cout<<"\nin Destructor";
}
void test::alex() const{

cout <<"\n in new function";
}
