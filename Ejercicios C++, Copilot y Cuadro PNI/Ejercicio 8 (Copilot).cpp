#include <iostream>

int main() {
    int length;
    std::cout << "Enter the length of the vectors: ";
    std::cin >> length;

    int dot_product = 0;
    int v1[length], v2[length];

    for (int i = 0; i < length; i++) {
        std::cout << "Enter the " << i+1 << "th element of the first vector: ";
        std::cin >> v1[i];
        std::cout << "Enter the " << i+1 << "th element of the second vector: ";
        std::cin >> v2[i];

        dot_product += v1[i] * v2[i];
    }

    std::cout << "The dot product of the two vectors is: " << dot_product << std::endl;

    return 0;
}
