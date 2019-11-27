#include <iostream>

using namespace std;

int main()
{
    int a,i,n,o,S=0,darab=0;
    for (i=0;i<6;i++){
    cout<<"a=";
    cin>>a;
    if (a%2==0){
    S=S+a;
    darab++;
    }
    }
    cout<<"A paros szamok atlaga="<<S/darab;
    return 0;
}
