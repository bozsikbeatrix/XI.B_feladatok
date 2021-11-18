#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Kerem a szoveget: ";
    cin >> str;
    int n= str.size();
    int k;
    cout << "Kerem a szamot: ";
    cin >> k;
    for (int j=0; j<k ; j++){
    swap(str[0], str[n-1]);
    for (int i=1; i<n-1; i++){
        swap(str[i], str[n-1]);
    }
    }
    cout << str;
    return 0;
}
