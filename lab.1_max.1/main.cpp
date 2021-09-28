#include <iostream>

using namespace std;

int main()
{
    int v[100][100], m, n, i, j;
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
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (v[i][j]%2 == 0){
                cout << v[i][j] << " ";
            }
        }
    }

    return 0;
}
