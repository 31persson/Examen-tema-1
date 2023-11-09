#include <iostream>
#include <string>

class Estudiante {
public:
    // Propiedades de la clase Estudiante
    std::string nombre;
    int edad;
    std::string grado;

    // Constructor para inicializar las propiedades
    Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}

    // Función miembro para mostrar la información del estudiante
    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante estudiante1("Juan Perez", 18, "Informatica");

    // Llamar a la función para mostrar la información del estudiante
    estudiante1.mostrar_info();

    return 0;
}
