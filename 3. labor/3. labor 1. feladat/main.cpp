
 #include <iostream>

using namespace std;

int main()
{

    int n, i, a, S=0;
    double darab=0;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
        cout << "a=";
        cin >> a;
    if (a%2==0) {
            S=S+a;
            darab++;
            }
    }
     cout << "atlag=" << S/darab;
    return 0;
}










