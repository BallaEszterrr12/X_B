#include <iostream>

using namespace std;

int main()
{
    int kezdeti,vegso,c,d,o,i,prim,p;
    cout << "kezdeti=";
    cin >> kezdeti;
    cout << "vegso=";
    cin >> vegso;
    for (i=kezdeti;i<vegso;i++){
        p=0;
        for (o=2;o<i/2+1;o++){
    if (i%o==0){
        p++;
    }
             }
    if (p==0){
     prim=i;
     d=0;
    while (prim!=0){
        c=prim%10;
        prim=prim/10;
        d=d*10+c;}
    }
    if (i==d){
            cout << i << endl;
    }


    }
    return 0;
}
