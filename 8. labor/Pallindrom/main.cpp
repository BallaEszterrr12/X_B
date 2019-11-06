#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout<<"a=";
    cin>> a;
    b=a;
    d=0;
    while (a>0){
        c=a%10;
        a=a/10;
        d=d*10+c;
    }
    if (b==d){
        cout<< "A szam pallindrom";
    }else{
    cout<<"A szam nem pallindrom";
    }
    return 0;
}
