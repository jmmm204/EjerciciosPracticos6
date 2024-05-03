#include <iostream>
using namespace std;

int main() {
    int suma_pares = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            suma_pares += i;
        }
    }

    cout << "\nLa suma de los numeros pares entre 100 y 200 es: " << suma_pares;

    return 0;
}
