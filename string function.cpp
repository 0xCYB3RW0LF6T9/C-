#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char x[50]="Tahmuid Tazowar";
    char x1[100];
    char x2[50]="Hacked by ";

    int len = strlen(x);
    cout <<"Length of the string is = "<< len;


    strcpy(x1,x);
    cout <<"\nCopied version ===>  "<<x1<<endl;


    strcat(x2,x);
    cout << x2<<endl;

    strupr(x2);
    cout<<x2<<endl;


    int comp = strcmp(x1,x2);
    cout << comp;





}
