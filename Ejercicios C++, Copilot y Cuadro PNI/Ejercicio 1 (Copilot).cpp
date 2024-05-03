#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Introduzca un numero natural: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << "La suma de los numeros naturales del 1 al " << n << " es: " << sum << std::endl;

    return 0;
}
