#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Sf=0, Sm=0;
    cout << "n=";
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];

        }
    }
    for (i=0;i<n;i++){
        Sf=v[i][i];
        Sm=Sm+v[i][n-1-i];

    }
    cout << Sm << endl;
    cout << Sf << endl;
    return 0;
}
