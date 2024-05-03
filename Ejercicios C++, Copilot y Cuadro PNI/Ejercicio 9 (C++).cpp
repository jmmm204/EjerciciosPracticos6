#include <iostream>
#include <vector>

using namespace std;

void imprimirMatriz(const vector<vector<int> >& matriz) {
    for (size_t i = 0; i < matriz.size(); ++i) {
        for (size_t j = 0; j < matriz[i].size(); ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int filasA, columnasA, filasB, columnasB;
    
    cout << "Ingrese el numero de filas de la primera matriz: ";
    cin >> filasA;
    cout << "Ingrese el numero de columnas de la primera matriz: ";
    cin >> columnasA;

    cout << "Ingrese el numero de filas de la segunda matriz: ";
    cin >> filasB;
    cout << "Ingrese el numero de columnas de la segunda matriz: ";
    cin >> columnasB;

    if (columnasA != filasB) {
        cout << "No se pueden multiplicar las matrices. Las dimensiones no son compatibles." << endl;
        return 1;
    }

    vector<vector<int> > matrizA(filasA, vector<int>(columnasA));
    vector<vector<int> > matrizB(filasB, vector<int>(columnasB));
    vector<vector<int> > matrizResultado(filasA, vector<int>(columnasB));

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasA; ++j) {
            cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filasB; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            cout << "Ingrese el elemento B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < filasA; ++i) {
        for (int j = 0; j < columnasB; ++j) {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < columnasA; ++k) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << "La matriz resultante de la multiplicacion es:" << endl;
    imprimirMatriz(matrizResultado);

    return 0;
}
