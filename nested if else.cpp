#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Please enter your marks : ";
    cin>>marks;
    if (marks>40)
        {
            if(marks>80)
            {
                cout <<"A+";

            }
            else if (marks>70)
            {

                cout << "A";
            }
            else if (marks > 60)
            {
                cout <<"A-";

            }

            else if (marks>50)
            {cout <<"B";}

            else if (marks >40 )
            {
                cout << "C";
            }
            else if (marks >33)
            {
                cout << "D";
            }





        }




    else{
        cout << "Failed";
    }






}
