#include <iostream>

using namespace std;

int main()
{
    int kezdeti, vegso,a,b,c,d,p=0,o,i,prim;
    cout<< "kezdeti=";
    cin>>kezdeti;
    cout<< "vegso=";
    cin>> vegso;
    for (i=kezdeti;i<vegso;i++){
             for (o=2;o<i/2+1; o++){
    if (i%o==0){
        p++;
    }
    if (p==0){
    i=prim;}
             }
     while (prim>0){
        c=prim%10;
        prim=prim/10;
        d=d*10+c;}
    }
    if (d==prim){
            cout<<"Prim-pallindromok="<< prim<< endl;
    }


    return 0;
}
