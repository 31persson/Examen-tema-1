#include <iostream>

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    std::cout << "Antes:" << std::endl;
    std::cout << "numero 1 = " << num1 << ", numero 2 = " << num2 << std::endl;

    // Llamar a la función para intercambiar los valores
    intercambiar(&num1, &num2);

    std::cout << "Despues:" << std::endl;
    std::cout << "numero 1 = " << num1 << ", numero 2 = " << num2 << std::endl;

    return 0;
}
