#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    cout << "n=";
    cin >> n;
    int m[n][n];
    for (i=0;i<n;i++){
        m[i][i]=1;
    }
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            cout << "m[" << i << "][" << j << "]=" ;
            cin >> m[i][j];
            m[j][i]=m[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
