#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mondat;
    cout << "Kerem a szoveget ";
    cin >> mondat;
    getline(cin, mondat);
    int pos=0, nr=1;
    while(mondat.find(" ", pos)!=string::npos){
        nr++;
        pos=mondat.find(" ", pos+1);
        }
    cout << nr;
    return 0;
}
