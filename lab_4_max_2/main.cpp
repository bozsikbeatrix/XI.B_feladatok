#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, S=0, oszto;
    cout << "n=";
    cin >> n;
    ifstream in("input.txt");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           in >> v[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         bool prim=true;
            for(oszto=2;oszto<v[i][j]/2+1;oszto++){
                if(v[i][j]%oszto==0){
                    prim=false;
                }
            }
         if(prim){
            S+=v[i][j];
         }
        }
    }
    cout << "S=" << S;
    in.close();
    return 0;
}
