#include <iostream>


using namespace std;

int main()
{

    int n, i, a, S1=0, S2=0;
    double darab1=0, darab2=0;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
        cout << "a=";
        cin >> a;
    if (a%2==0) {
            S1=S1+a;
            darab1++;
            } else {
            S2=S2+a;
            darab2++; }
    }
     cout << "A paros szamok atlaga=" << S1/darab1 << endl;
     cout << "A paratlan szamok atlaga=" << S2/darab2;
    return 0;
}
