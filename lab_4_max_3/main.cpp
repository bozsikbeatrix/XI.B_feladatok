#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, S=0;
    ifstream in ("input.txt");
    in >> n;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for(i=0;i<n;i+=2){
        for (j=0;j<n;j+=2){
           S+=v[i][j];
        }
    }
    cout << "S=" << S;
    in.close();
    return 0;
}
