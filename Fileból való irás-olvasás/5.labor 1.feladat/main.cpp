#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int a,;
    // file megnyitasa
    ifstream myfile("input.txt");
    while(myfile >> a){
        cout << a <<endl;
    }
    myfile.close();

    return 0;
}
