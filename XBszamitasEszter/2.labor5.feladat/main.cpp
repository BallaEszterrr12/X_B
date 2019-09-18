#include <iostream>

using namespace std;

int main ()
{
    double szam1,szam2,szam3;
    cout << "szam1:";
    cin >> szam1;
    cout << "szam2:";
    cin >> szam2;
    cout << "szam3:";
    cin >> szam3;
    if (szam1>szam2){
        if (szam2 > szam3){
        cout << szam1;
        } else {
        if (szam2>szam1)
            if (szam1>szam3)
        cout << szam2;
        }
    }
       return 0;
}
