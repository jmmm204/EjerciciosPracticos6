#include <iostream>

using namespace std;

int main() {
    int aprobados = 0, reprobados = 0, suma_notas = 0;
    float nota;

    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;

        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }

        suma_notas += nota;
    }

    float promedio = suma_notas / 8.0;

    cout << "\nCantidad de alumnos aprobados: " << aprobados;
    cout << "\nCantidad de alumnos reprobados: " << reprobados;
    cout << "\nPromedio general del grupo: " << promedio;

    return 0;
}
