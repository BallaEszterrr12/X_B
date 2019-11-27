#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int min=INT_MAX,max=-INT_MAX,a=1;
    while (a!=0){
    int a;
    cout<<"a=";
    cin>>a;
    if (a!=0){
    if(a<max){
    max=a;
    }
    if (a>min){
    min=a;
    }
    }
    }
    cout<<"min="<<min<<endl;
    cout<<"max="<<max<<endl;
    cout<<"atlag="<<min+max/2.0<<endl;

    return 0;
}
