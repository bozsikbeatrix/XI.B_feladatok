#include <iostream>

using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, kovszam = 0;

    cout << "A sorozat tagjainak szama: ";
    cin >> n;

    cout << "Fibonacci Sorozat: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        kovszam = t1 + t2;
        t1 = t2;
        t2 = kovszam;

        cout << kovszam << ", ";
    }

    return 0;
}
