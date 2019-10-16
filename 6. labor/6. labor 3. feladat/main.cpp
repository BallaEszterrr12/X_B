#include <iostream>

using namespace std;

int main()
{
    int n, i,S=0;
    cout<<"n=";
    cin>>n;
    for (i=0;i<n;i++){
    int a, oszto;
    bool prim=true;
    while (i<n){
    cout<<"a=";
    cin >> a;
    for (oszto=2;oszto<a/2+1;oszto++){
    if (a%oszto==0){
        prim=false;
    }
    }
    }

    if (prim){
    S=S+a;}
    }
    cout<<"A primek osszege"<<S;
return 0;
    }

