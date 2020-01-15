#include <iostream>

using namespace std;

int main()
{
    int tomb[1000];
    int i,n,S=0;
    cout<<"n=";
    cin>>n;
    for (i=0;i<=n;i++){
    cout<<"tomb["<<i<<"]=";
    cin>>tomb[i];
    }
    for (i=0;i<=n;i++){
    if (tomb[i]>0){
    S=S+tomb[i];
    }
    }
    cout<<"A pozitiv szamok osszege="<<S;
}
