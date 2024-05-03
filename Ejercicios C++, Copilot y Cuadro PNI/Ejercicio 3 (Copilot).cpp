#include <iostream>

int main() {
  int suma = 0;
  for (int i = 1; i <= 100; i++) {
    suma += i * i; // equivalente a i^2
  }
  std::cout << "La suma de los cuadrados es: " << suma << std::endl;
  return 0;
}
