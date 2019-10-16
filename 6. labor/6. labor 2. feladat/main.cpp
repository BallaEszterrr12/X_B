#include <iostream>

using namespace std;

int main()
{
    int a, oszto=2;
    bool prim=true;
    cout<<"a=";
    cin >> a;
    while (oszto<a/2+1){
    if (a%oszto==0){
        prim=false;
    }
    oszto++;
    }
    if (prim){
    cout << "A szam prim";
    }else{
    cout<<"A szam nem prim"; }
return 0;
    }

