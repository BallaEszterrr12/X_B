#include <iostream>

using namespace std;

int main()
{
    int szam1, szam2, szam3, szam4,szam5,szam6,S,P;
    S=0;
    P=0;
    cout << "szam1:";
    cin >> szam1;
    cout << "szam2:";
    cin >> szam2;
    cout << "szam3:";
    cin >> szam3;
    cout << "szam4:";
    cin >> szam4;
    cout << "szam5:";
    cin >> szam5;
    cout << "szam6:";
    cin >> szam6;
    if (szam1%2==0) {
        S=S+szam1;
    } else {
        P=P+szam1;}
    if (szam2%2==0) {
        S=S+szam2;
    } else {
        P=P+szam2;}
    if (szam3%2==0) {
        S=S+szam3;
    } else {
        P=P+szam3;}
    if (szam4%2==0) {
        S=S+szam4;
    } else {
        P=P+szam4;}
    if (szam5%2==0) {
        S=S+szam5;
    } else {
        P=P+szam5;}
    if (szam6%2==0) {
        S=S+szam6;
    } else {
        P=P+szam6;}

    cout << "Paros"<<S <<endl;
    cout << "Paratlan"<<P<< endl;

return 0;
}


