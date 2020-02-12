#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int jegy,felevi,i=0.0;
   double S=0.0;
    // file megnyitasa
    ifstream myfile("input.txt");
    ofstream output ("output.txt");
    while(myfile >> jegy){
        S=S+jegy;
        i++;
    }
    felevi=jegy;
    S=S-felevi;
    S=S/(i-1.0);
    S=S*3.0;
    S=S+felevi;
    S=S/4.0;
    myfile.close();
    output<<S<<endl;
    output.close();
    return 0;
}
