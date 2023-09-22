#include <iostream>
#include <cstdlib>

#define maxf 3
#define maxc 5

using namespace std;

int main(int argc, char* argv[]) {

    float a[maxf][maxc];

    for (int f = 0; f < maxf; f++) {
        for (int c = 0; c < maxc; c++) {
            cout << "Introduce un valor para a[" << f << "][" << c << "]: ";
            cin >> a[f][c];
        }
    }

    cout << "La matriz ingresada es:" << endl;

    for (int f = 0; f < maxf; f++) {
        for (int c = 0; c < maxc; c++)
            cout << a[f][c] << " ";
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}