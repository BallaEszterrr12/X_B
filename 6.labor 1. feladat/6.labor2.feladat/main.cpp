#include <iostream>
#include<fstream>

using namespace std;

int main()
{
  int a,n,min, max, szamlalo=0,i=0;
  double S=0;
  ifstream in ("input.txt");
  ifstream limits ("limits.txt");
  ofstream out ("output.txt");
  limits>>min;
  limits>>max;
  while (in>>a){
  if(i<min || i>max){
  S=S+a;
  szamlalo++;
  }
  i++;
  }
  out<< S/szamlalo;
  in.close();
  out.close();
  limits.close();

    return 0;
}
