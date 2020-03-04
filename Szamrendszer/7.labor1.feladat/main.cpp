#include <iostream>

using namespace std;

int main()
{
    int a,b=0,hatvany=1,szamjegy,szamrendszer;
    //szam,ujszam
    cout<<"A szam=";
    cin>>a;
    cout<<"A szamrendszer=";
    cin>>szamrendszer;
    while(a>0){
    szamjegy=a%szamrendszer;
    a=a/szamrendszer;
    b=b+hatvany*szamjegy;
    hatvany=hatvany*10;
    }
    cout<<"ujszam="<<b;

    return 0;
}
