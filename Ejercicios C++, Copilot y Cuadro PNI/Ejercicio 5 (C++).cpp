#include <iostream>

using namespace std;

int main(){
	const int numEstudiantes = 8;
	int notas[numEstudiantes];
	int aprobados = 0;
	int reprobados = 0;
	int suma = 0;
	
	cout << "Ingrese las notas de los " << numEstudiantes << " estudiantes:" << endl;
	for (int i = 0; i < numEstudiantes; i++){
		cout << "Nota del estudiante " << i + 1 << ": ";
		cin >> notas[i];
		suma += notas[i];
		if(notas[i] >= 70){
			aprobados++;
		}else{
			reprobados++;
		}
}

float promedio = static_cast<float>(suma) / numEstudiantes;

cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
cout << "Promedio general del grupo: " << promedio << endl;

return 0;

}
