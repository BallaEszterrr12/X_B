#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    d=0;
    cout<<"a=";
    cin>> a;
    while (a>0){
        c=a%10;
        a=a/10;
        d=d*10+c;
        if (c%2!=0){
        d=d*10+(c-1);
    }
    }

   cout<< d;
    return 0;
}
