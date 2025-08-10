/*#include<iostream>
using namespace std;
void t(int *x);
int main()
{
    int a[3]={6,4,8};
    t(&a[0]);
}
void t(int *x)
{
    cout << *x<<endl;
    cout << *(x+1)<<endl;
    cout << *(x+2)<<endl;


}
*/

#include<iostream>
using namespace std;
void t(int *x);
int main()
{
    int a[3]={6,4,8};
    t(a);
}

void t(int x[3])
{

    for (int i=0;i<3;i++)
        cout <<x[i];
}
