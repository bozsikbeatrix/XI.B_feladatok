#include <iostream>
#include <string>

using namespace std;

int main()
{
    //string name;
    string name("Bozsik Beatrix");
    cout << "What's your name?" << endl;
    //cin >> name;
    //getline (cin,name);
    cout << "Hello," << name << "!" << endl;
    cout << name.size();
    return 0;
}
