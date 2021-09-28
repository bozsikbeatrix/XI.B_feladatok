#include <iostream>

using namespace std;

int main()
{
    int m[100][100], i, j, n, S1=0, S2=0;
    cout << "n=";
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "m[" << i << "][" << j << "]=" ;
            cin >> m[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << m[i][j] << " ";
            if (i+j<n-1){
                S1=S1+m[i][j];
            }
            if (i+j>n-1){
                S2=S2+m[i][j];
            }
        }
        cout << endl;
    }
    cout << S1 << endl;
    cout << S2 << endl;
    return 0;
}
