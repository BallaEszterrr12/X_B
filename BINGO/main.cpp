#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand( (unsigned) time (NULL));
    int x=rand()%101;
    int a=-1;
    while(a!=x){
    cout<<"Kerem a tippet:";
    cin>>a;
    if (a==x){
    cout<<"BINGO";
    }
    else if (a>x){
    cout<<"A szam amire gondoltam kisebb"<<endl;
    }
    else{
    cout<<"A szam amire gondoltam nagyobb"<<endl;
    }
    }


    return 0;
}


