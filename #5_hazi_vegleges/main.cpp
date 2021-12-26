#include <iostream>

using namespace std;

int hatvany(int n){
   int oszto=2, osztomin=0, szamlalomin=100000000;
   while(n!=1){
    int szamlalo=0;
    while(n%oszto==0){
        n/=oszto;
        szamlalo++;
    }
    if(szamlalo){
    if (szamlalo<szamlalomin){
        szamlalomin=szamlalo;
        osztomin=oszto;
    }
   }
    oszto++;
   }
   return osztomin;
}

int main()
{
    cout<<hatvany(880);
    return 0;
}
