#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Se=0, Sd=0;
    ifstream in("input.txt");
    in >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i<j&&i+j<n-1){
                Se+=v[i][j];
            }
            if(i>j&&i+j>n-1){
                Sd+=v[i][j];
            }
        }

    }
    if(Se>Sd){
        cout << "az eszaki nagyobb:" << Se;
    }else{
        cout << "a deli a nagyobb:" << Sd;
    }
    in.close();
    return 0;
}
