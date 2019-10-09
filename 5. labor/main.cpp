#include <iostream>

using namespace std;

int main()
{
    double a,b,lnko;
    lnko=1;
    cout<< "a=";
    cin>> a;
    cout<< "b=";
    cin>>b;
    while (a!=b) {
        if (a>b) {
            a=a-b; }
            else {
                b=b-a;
            }
        }
    cout<< "lnko=" <<a;
    return 0;
}
