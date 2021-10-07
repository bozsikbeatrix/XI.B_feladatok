#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int v[100][100], n, i, j;
    cout << "n=";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            v[i][j]=rand()%10;

        }
    }
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            v[i][i]=0;
            if(i>j){
                v[i][j]=-v[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << v[i][j] << "  ";

        }
        cout << endl;
    }
    return 0;
}
