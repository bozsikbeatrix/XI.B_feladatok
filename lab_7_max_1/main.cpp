#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str= "bARAck", betuk;
    cout << str << endl;
    cout << "Milyen betukkel szeretned kiiratni?" << endl;
    cin >> betuk;
    if (betuk=="nagy"){
          transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    int pos= 'a' - 'A';
    }
    if (betuk=="kis"){
          transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    int pos= 'a' - 'A';
    }

    return 0;
}
