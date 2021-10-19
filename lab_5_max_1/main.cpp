#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    name= "Kis";
    string keresztnev= "Pista Gyozo";
    name.append (" ");
    cout << name << endl;
    name.append ("Bela");
    cout << name << endl;
    name.append (" ");
    cout << name << endl;
    name.append (keresztnev);
    cout << name << endl;
    return 0;
}
