 #include <iostream>

using namespace std;

int main()
{

    int a, i=0;
    double S=0;
    for (i=0; i<10; i++) {
        cout << "a=";
        cin >> a;
        S=S+a;
    }
    S=S/10;
    cout << "atlag=" << S;
    return 0;
}
