#include <iostream>

using namespace std;

int main()
{
    int a,i,n, min=INT_MIN,S=0;
    for (i=0;i<10;i++){
    cout<<"a=";
    cin>>a;
    if(a<min){
    a=min;
    }
    S=S+a;
    }
    cout<<"A legkisebb="<<a<<endl;
    cout<<"A szamok osszege="<<S;
    return 0;
}
