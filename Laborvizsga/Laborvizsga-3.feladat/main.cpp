#include <iostream>

using namespace std;

int main()
{
    int a,i,n,min=INT_MIN,max=-INT_MAX,darab=0,S=0;
    cout<<"n=";
    cin>>n;
    for (i=0;i<n;i++){
    cout<<"a=";
    cin>>a;
    while(a>0){
    if(a<min){
    min=a;
    }
    if (a>max){
    max=a;
    }
    S=S+a;
    darab++;
    }
    }
    cout<<"A legkisebb="<<a<<endl;
    cout<<"A legnagyobb="<<a<<endl;
    cout<<"A szamok atlaga="<<S/darab;
    return 0;
}
