#include <iostream>

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    std::cout << "Antes del intercambio:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Llamar a la función para intercambiar los valores
    intercambiar(&num1, &num2);

    std::cout << "Después del intercambio:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
