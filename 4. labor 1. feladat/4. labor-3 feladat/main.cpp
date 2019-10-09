#include <iostream>

using namespace std;

int main()
{
    int a=1, i=0;
    double S=0;
    while (a>0) {
        cout << "a=";
        cin >> a;
        if  (a>0 && a%2==0){
        S=S+a;
        i++;
    }
        }
    cout << "a paros szamok osszege="<< S;
    return 0;
}
