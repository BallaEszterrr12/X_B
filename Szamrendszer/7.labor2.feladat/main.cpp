#include <iostream>

using namespace std;

int main()
{
    int szam,ujszam=0,hatvany=1,szamjegy,szamrendszer=2;
    cout<<"A szam=";
    cin>>szam;
    while (szam>0){
    szamjegy=szam%10;
    szam=szam/10;
    ujszam=ujszam+hatvany*szamjegy;
    hatvany=hatvany*szamrendszer;
    }
    cout<<"ujszam="<<ujszam;
    return 0;
}
