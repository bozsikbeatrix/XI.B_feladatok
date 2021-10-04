#include <iostream>

using namespace std;

int main()
{
    int a, b, lkkt;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    lkkt=a*b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    lkkt=lkkt/a;
    cout << "a legkisebb kozos tobbszoros: " << lkkt;
    return 0;
}
