#include <iostream>

using namespace std;

int main()
{
    double a,b,lkkt;
    lkkt=0;
    cout<< "a=";
    cin>> a;
    cout<< "b=";
    cin>>b;
    int c= a*b;
    while (a!=b) {
        if (a>b) {
            a=a-b; }
            else {
                b=b-a;
            }
        }

    cout<< "lkkt=" <<c/a;
    return 0;
}
