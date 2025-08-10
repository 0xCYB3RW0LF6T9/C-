#include<iostream>

using namespace std;

int main()
{
    int d;
    cout << "Please enter your digit : ";
    cin >> d;

    jump:
    switch (d)
        {
        case 0:
            {
                cout << "Zero";
                break;

            }
        case 1:
            {

            cout <<"One ";
            break;
            }
        case 2:
            {
                cout << "Two";
                break;

            }
        case 3:
            {
                cout << "three";
                break;

            }
         case 4:
            {
                cout << "Four ";
                break;

            }
          case 5:
            {
                cout << "Five";
                break;

            }


          default:
            {

                cout << "Nigga Enter number under 1 to 5";

            }

goto jump;

        }













}
