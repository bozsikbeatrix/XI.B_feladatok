#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Se=0, Sd=0, Sk=0, Sn=0;
    ifstream in("input.txt");
    in >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i<j&&i+j<n-1){
                Se+=v[i][j];
            }
            if(i>j&&i+j>n-1){
                Sd+=v[i][j];
            }
            if(i<j&&i+j>n-1){
                Sk+=v[i][j];
            }
            if(i>j&&i+j<n-1){
                Sn+=v[i][j];
            }
        }

    }
    cout << "Se=" << Se << endl;
    cout << "Sd=" << Sd << endl;
    cout << "Sk=" << Sk << endl;
    cout << "Sn=" << Sn << endl;
    in.close();
    return 0;
}
