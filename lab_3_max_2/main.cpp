#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], n, i, j, Sf_felett=0, Sf_alatt=0, lkkt;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i<j){
                Sf_felett+=v[i][j];
            }
            if(i>j){
                Sf_alatt+=v[i][j];
            }

        }

    }

    lkkt=Sf_felett*Sf_alatt;
    while(Sf_felett!=Sf_alatt){
        if(Sf_felett>Sf_alatt){
            Sf_felett=Sf_felett-Sf_alatt;
        }else{
            Sf_alatt=Sf_alatt-Sf_felett;
        }
    }
    lkkt=lkkt/Sf_felett;
    out << lkkt;

    in.close();
    out.close();
    return 0;
}
