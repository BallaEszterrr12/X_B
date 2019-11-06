#include <iostream>

using namespace std;

int main()
{

    int a,p,o;
    p=0;
    cout<<"a=";
    cin >> a;
    for (o=2,a/2; o<a; o++){
    if (a%o==0){
        p++;
    }
    }
    if (p==0){
    cout << "A szam prim";
    }else{
    cout<<"A szam nem prim"; }
return 0;
}
