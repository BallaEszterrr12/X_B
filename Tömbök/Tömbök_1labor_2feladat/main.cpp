
#include <iostream>

using namespace std;

int main()
{
    int n,i,P=1;
    int tomb[100];
    cout<<"n=";
    cin>>n;
    for (i=0;i<n;i++){
    cout<<"tomb["<<i<<"]=";
    cin>>tomb[i];
    P=P*tomb[i];
    }
