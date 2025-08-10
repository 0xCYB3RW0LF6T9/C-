#include<iostream>
using namespace std;

int main()
{
    int i,j,row,col,limit,a[100][100];


    cout <<"enter Row number : " ;
    cin >> row;
    cout << "Enter column number : ";
    cin >> col;

    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {

            cout << "Enter element for a["<<i<<"]["<<j<<"] :";


            cin >> a[i][j];
        }


}

   for (i=0;i<row;i++)
   {
        for(j=0;j<col;j++)
        {
            cout <<" "<< a[i][j];
        }
   cout <<"\n";

   }









}
