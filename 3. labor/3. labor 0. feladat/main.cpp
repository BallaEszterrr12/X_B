#include <iostream>

using namespace std;

int main()
{
    int n, i, a, S=0;
    cout << "n=";
    cin >> n;
    for (i=0; i<n; i++) {
        cout << "a=";
        cin >> a;
        S=S+a;
    }
    cout << "S=" << S;
    return 0;
}
