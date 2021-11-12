#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Kerem a szoveget: ";
    getline (cin, str);
    size_t afound=str.find ("a");
    while(afound!= string::npos){
        str.replace(afound, 1 , "mpm");
        afound=str.find("a", afound+3);
    }
    size_t efound=str.find ("e");
    while(efound!= string::npos){
        str.replace(efound, 1 , "mpm");
        efound=str.find("e", efound+3);
    }
    size_t ifound=str.find ("i");
    while(ifound!= string::npos){
        str.replace(ifound, 1 , "mpm");
        ifound=str.find("i", ifound+3);
    }
    size_t ofound=str.find ("o");
    while(ofound!= string::npos){
        str.replace(ofound, 1 , "mpm");
        ofound=str.find("o", ofound+3);
    }
    size_t ufound=str.find ("u");
    while(ufound!= string::npos){
        str.replace(ufound, 1 , "mpm");
        ufound=str.find("u", ufound+3);
    }
    string betu;
    betu= "Z";
    size_t pfound=str.find ("p");
    while(pfound!= string::npos){
        str.insert(pfound+1, betu);
        pfound=str.find("p", pfound+3);
    }
    cout << str;
    return 0;
}
