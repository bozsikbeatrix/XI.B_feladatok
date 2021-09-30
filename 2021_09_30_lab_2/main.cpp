#include <iostream>

using namespace std;

int main()
{
    int v[100][100], m, n, i, j, Sf=0, Sm=0;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if(i+j==n-1){
                Sm+=v[i][j];
            }
        }
        Sf+=v[i][i];
        cout << endl;
    }
    cout << Sf << " " << Sm << endl;
    return 0;
}
