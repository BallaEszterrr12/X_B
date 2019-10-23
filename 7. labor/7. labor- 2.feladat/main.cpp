#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    double S=0, P=1;
    cout<<"a=";
    cin>> a;
    while (a>0){
        c=a%10;
    if (c%4==0){
        S=S+c;
    }
    if (c%5!=0){
        P=P*c;}
        a=a/10;
    }
    cout<<"A 4-el oszthato szamjegyek osszege="<<S<< endl;
    cout<< "Az 5-el nem oszthato szamjegyek szorzata= "<<P;
    return 0;
}
