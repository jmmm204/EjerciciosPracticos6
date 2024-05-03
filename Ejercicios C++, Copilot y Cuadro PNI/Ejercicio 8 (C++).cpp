#include <iostream>
#include <vector>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    vector<int> vector1(longitud);
    vector<int> vector2(longitud);

    cout << "Ingrese los elementos del primer vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    int productoPunto = 0;
    for (int i = 0; i < longitud; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;

    return 0;
}
