#include <iostream>

using namespace std;

int main() {
  float notas[10];
  float suma = 0.0;
  float promedio;

  cout << "Ingrese las notas de los 10 estudiantes:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Nota del estudiante " << (i + 1) << ": ";
    cin >> notas[i];
    suma += notas[i];
  }

  promedio = suma / 10.0;
  cout << "El promedio general es: " << promedio << endl;

  return 0;
}
