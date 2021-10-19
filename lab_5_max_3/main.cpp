#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    name= "Kis";
    //string keresztnev= "Pista";
    string keresztnev= "Pista Gyozo";
    //name.insert(3, keresztnev);
    name.insert(3, " ");
    //name.insert(4, keresztnev);
    //name.insert(4, keresztnev, 0, 5); //Pista lesz
    name.insert(4, keresztnev, 6, 5); //Gyozo lesz
    cout << name;
    return 0;
}
