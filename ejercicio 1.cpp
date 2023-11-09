#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 45;
    int num2 = 21;
    int resultado = suma(num1, num2);

    std::cout << "La suma de " << num1 << " y " << num2 << " es " << resultado << std::endl;

    return 0;
}
