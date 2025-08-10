#include<iostream>
#include<string.h>
using namespace std;
class t{

    public:
        int id;
        char name[50];
        void show()
        {
            cout <<id<<endl;
        }
        void Set(int a)
        {
            id=a;
        }
};
int main()
{
    t n1;
    n1.Set(45843250);
    n1.show();
    cin>>n1.name;
   gets(n1.name);
   cout<<n1.name;

}
