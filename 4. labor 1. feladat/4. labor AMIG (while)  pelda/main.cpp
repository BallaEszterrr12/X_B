#include <iostream>

using namespace std;

int main()
{
    int a, i=0;
    double S=0;
    while (i<10) {
        cout << "a=";
        cin >> a;
        S=S+a;
        i++;

    }
    S=S/10;
    cout << "a  szamok atlaga="<< S;
    return 0;
}
