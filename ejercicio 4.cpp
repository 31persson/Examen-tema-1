#include <iostream>
#include <stdexcept>

int dividir(int numerador, int denominador) {
    if (denominador == 0) {
        throw std::runtime_error("Error: Division por cero no permitida");
    }
    return numerador / denominador;
}

int main() {
    int numerador, denominador;
    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;
    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;

    try {
        int resultado = dividir(numerador, denominador);
        std::cout << "Resultado de la division: " << resultado << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Excepcion capturada: " << e.what() << std::endl;
    }

    return 0;
}
