#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Sk=0, Sny=0;
    ifstream in("input.txt");
    ofstream out("lnko.out");
    in >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j && i+j>n-1){
                Sk+=v[i][j];
            }
            if(i>j && i+j<n-1){
                Sny+=v[i][j];
            }
        }
    }
    while(Sk!=Sny){
        if(Sk>Sny){
            Sk=Sk-Sny;
        }else{
            Sny=Sny-Sk;
        }
    }
    out << Sk;
    return 0;
}
