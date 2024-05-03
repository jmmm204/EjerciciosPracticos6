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
    int filas, columnas;

    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int> > matriz(filas, vector<int>(columnas));

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    vector<vector<int> > matrizTranspuesta(columnas, vector<int>(filas));
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "La matriz transpuesta es:" << endl;
    imprimirMatriz(matrizTranspuesta);

    return 0;
}
