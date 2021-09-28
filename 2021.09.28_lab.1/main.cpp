#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, i, j, Sf=0, Sm=0;
    cout << "n=";
    cin >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            cout << "m[" << i << "][" << j << "]=" ;
            cin >> m[i][j];

        }
    }
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i==j){
                Sf=Sf+m[i][j];
            }
            if (i+j==n-1){
                Sm=Sm+m[i][j];
            }
        }
        cout << endl;
    }
    cout << "Sf=" << Sf;
    cout << endl;
    cout << "Sm=" << Sm;
    return 0;
}
