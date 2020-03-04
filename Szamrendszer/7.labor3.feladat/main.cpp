#include <iostream>

using namespace std;

int main()
{
    int a,b=0,hatvany=1,szamjegy,szamrendszer;
    //szam=a,ujszam=b
    cout<<"A szam=";
    cin>>a;
    cout<<"A szamrendszer=";
    cin>>szamrendszer;
    while (a>0){
    szamjegy=a%szamrendszer;
    a=a/10;
    b=hatvany*szamjegy+b;
    hatvany=hatvany*10;
    }
    cout<<"F";
    return 0;
}
