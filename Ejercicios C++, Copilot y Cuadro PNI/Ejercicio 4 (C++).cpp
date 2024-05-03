#include <iostream>

using namespace std;

int main(){
	const int numEstudiantes = 10;
	int notas[numEstudiantes];
	int suma = 0;
	
	cout << "Ingrese las notas de los " << numEstudiantes << " estudiantes:" << endl;
	for (int i = 0; i < numEstudiantes; i++){
		cout << "Nota del estudiante " << i + 1 << ": ";
		cin >> notas[i];
		suma += notas[i];
	}
	float promedio = static_cast<float>(suma) / numEstudiantes;
	
	cout << "El promedio de la seccion es: " << promedio << endl;
	
	return 0;
}
