#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, second;
    cout << "Kerem az elso szot: ";
    getline(cin, str);
    cout << "Kerem a tobbi szot: ";
    getline(cin, second);
    size_t found=second.find(" ");
    str.append(second, 0, found);
    cout << str;
    return 0;
}
