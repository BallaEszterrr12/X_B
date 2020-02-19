#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,i,n;
    ifstream myfile ("input.txt");
    ofstream out ("output.txt");
    myfile>>n;
     for (i=0;i<n;i++){
      myfile>>a;
     out<<a<<" "<<a/2<<endl;
    }
    myfile.close();
    out.close();
    return 0;
}
