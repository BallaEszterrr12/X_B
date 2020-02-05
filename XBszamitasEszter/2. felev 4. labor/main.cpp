#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int v[1000];
    srand(time(NULL));
    //veletlenszeru szamok
    int i,j,n,k,p,lnko,max=-INT_MAX,min=INT_MAX,max2=-INT_MAX+1, min2=INT_MAX, min3=INT_MAX;
    cout<<"n=";
    cin>>n;
    for (i=0;i<n;i++){
    v[i]= rand ()%100;
    cout<<v[i]<<"  ";
   }
   for(i=0;i<n+1;i++){
     for(j=i+1;j<n;j++){
     if(v[i]>max){
     max=v[i];
     if(v[i]>max2){
     max2=v[i];}
     }
     if(v[j]<min){
     min=v[j];
     if(v[j]<min2){
     min2=v[j];}
     if(v[j]<min3){
     min3=v[j];
     }
     }
     }



    return 0;
}
