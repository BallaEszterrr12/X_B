#include <iostream>

using namespace std;

int main()
{
    int i,n,o,S=0,c;
    cout<<"n=";
    cin>> n;
    for (int i=0;i<n;i++){
        int a;
        cout << "a=";
        cin>> a;
       while (a>0){
        c=a%10;
        a=a/10;
       if (c%4!=0){
        S=S+c;
       }
       }
    }
    cout<<S<<endl;
    return 0;
}
