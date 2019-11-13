#include <iostream>

using namespace std;

int main()
{
    int a,i,n,o,S=0,b;
    cout<<"n=";
    cin>> n;
    for (int i=0;i<n;i++){
            cout<< "a=";
            cin>>a;
    for (o=2; o<(a+1)/2;o++){
       if (a%o>0){
        S=S+o;
       }
    }
    }
    cout<<S<<endl;
    return 0;
}
