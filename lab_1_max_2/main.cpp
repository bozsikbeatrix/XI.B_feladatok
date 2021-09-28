#include <iostream>

using namespace std;

int main()
{
    int n, i ,j, m[100][100], E=1, K=1, D=1, N=1;
    cout << "n=";
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "m[" << i << "][" << j << "]=";
            cin >> m[i][j];
        }
    }
    cout << endl;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i<j && i+j<n-1){
                E*=m[i][j];
            }
            if (i<j && i+j>n-1){
                K*=m[i][j];
            }
            if (i>j && i+j>n-1){
                D*=m[i][j];
            }
            if (i>j && i+j<n-1){
                N*=m[i][j];
            }
        }
    }
    cout << "E=" << E << endl;
    cout << "K=" << K << endl;
    cout << "D=" << D << endl;
    cout << "N=" << N << endl;
    return 0;
}
