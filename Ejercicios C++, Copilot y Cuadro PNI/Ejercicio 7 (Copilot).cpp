#include <iostream>
using namespace std;

int main() {
    int n, vector1[100], vector2[100], vector_suma[100];

    cout << "Ingrese el tamaño de los vectores (menor o igual a 100): ";
    cin >> n;

    cout << "\nIngrese los valores del vector 1:\n";
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "\nIngrese los valores del vector 2:\n";
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        vector_suma[i] = vector1[i] + vector2[i];
    }

    cout << "\nEl vector suma es:\n";
    for (int i = 0; i < n; i++) {
        cout << vector_suma[i] << " ";
    }

    return 0;
}
