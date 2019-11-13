#include <iostream>

using namespace std;

int main()
{
    int n,o,p=1;
    cout<<"n=";
    cin>> n;
    for (int i=0;i<n;i++){
        int a;
        cout << "a=";
        cin>> a;
        for (o=3; o<a/2+1;o+=2){
            p=p*o;
        }
    }
    cout<<"A paratlan osztok szorzata="<<p<<endl;
    return 0;
}
