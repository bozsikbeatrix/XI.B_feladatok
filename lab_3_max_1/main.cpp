#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Sf=0, Sm=0;
    ifstream in("input.txt");
    in >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i==j){
                Sf+=v[i][j];
            }
            if(i+j==n-1){
                Sm+=v[i][j];
            }

        }

    }
    cout << "Sf=" << Sf << endl;
    cout << "Sm=" << Sm << endl;

    in.close();
    return 0;
}
