#include <iostream>
#include <vector>

// Función para calcular el promedio de calificaciones
double calcularPromedio(const std::vector<int>& calificaciones) {
    if (calificaciones.empty()) {
        return 0.0;  // En caso de un vector vacío, el promedio es 0.
    }

    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    return static_cast<double>(suma) / calificaciones.size();
}

int main() {
    // Ejemplo: vector de calificaciones
    std::vector<int> calificaciones = {90, 85, 78, 92, 88};

    // Calcular el promedio de las calificaciones
    double promedio = calcularPromedio(calificaciones);

    std::cout << "Calificaciones:";
    for (int calificacion : calificaciones) {
        std::cout << " " << calificacion;
    }
    std::cout << "\nPromedio: " << promedio << std::endl;

    return 0;
}
