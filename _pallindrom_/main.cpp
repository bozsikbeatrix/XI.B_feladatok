#include <iostream>

using namespace std;

int main()
{
    int ideiglenes, szam, szamjegy, ujszam = 0;

     cout << "Kerem a szamot: ";
     cin >> szam;
     ideiglenes = szam;
     while (szam != 0){
         szamjegy = szam % 10;
         ujszam = (ujszam * 10) + szamjegy;
         szam = szam / 10;
     }

     cout << " A szam forditottja: " << ujszam << endl;

     if (ideiglenes == ujszam)
         cout << " a szam pallindrom";
     else
         cout << " a szam nem pallindrom";

    return 0;
}
