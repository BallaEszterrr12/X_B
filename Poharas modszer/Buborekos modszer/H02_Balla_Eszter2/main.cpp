#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int v[10000];
    int i,j,n,aux;
    //cout<<"n=";
    //cin>>n;
    n=10;
    for (i=0; i<n;i++){
    //cout<<"tomb["<<i<<"]=";
    //cin>> tomb[i
    v[i]= rand () %100;
    for(i=0;i<n;i++){
    //cout<<tomb[i]<<"  ";
    }
    //cout<<endl;

    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if (tomb[i]>tomb[j]){
             aux=tomb[j];
             tomb[j]=tomb[i];
             tomb[i]=aux;
            }
          }
        }
    for(i=0;i<n;i++){
    //cout<<tomb[i]<<"  ";
    }
    return 0;
}
