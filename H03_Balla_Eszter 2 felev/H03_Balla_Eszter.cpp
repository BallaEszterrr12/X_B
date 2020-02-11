#include <iostream>


using namespace std;

int main()
{
    int v[1000];
    int i,c,n,max=-INT_MAX,min=INT_MAX,max2=-INT_MAX+1, min2=INT_MAX-1, min3=INT_MAX-2;
    cout<<"n=";
    if (n>5){
    cin>>n;}
    for (i=0;i<n;i++){
    cout<<"v["<<i<<"]=";
    cin>>v[i];
   }
   for(i=0;i<n;i++){
     if(v[i]>max){
     max2=max;
     max=v[i];
     }else if (v[i]>max2){
     max2=v[i];}
     if(v[i]<min){
     min3=min2;
     min2=min;
     min=v[i];
     }else if (v[i]<min2){
     min3=min2;
     min2=v[i];}
     else if (v[i]<min3){
     min3=v[i];}
   }
     int P=1;
     P=max2*min3;
     cout<<P;
     cout<<endl;
     int S=0;
     S=max2+min3;
     cout<<S;
     cout<<endl;
    while (max2!=min3){
        if (max2>min3){
        max2=max2-min3;
        } if(min3>max2){
        min3= min3-max2;}
     }
     cout<<max2;
     cout<<endl;
     cout<<P/max2;

    return 0;
}

