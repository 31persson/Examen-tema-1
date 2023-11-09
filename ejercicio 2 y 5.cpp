#include <iostream>
#include <string>
#include <vector>

class Estudiante {
public:
    // Propiedades de la clase Estudiante
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;  // Vector para almacenar las materias registradas

    // Constructor para inicializar las propiedades
    Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}

    // Función miembro para mostrar la información del estudiante
    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }

    // Función miembro para registrar una materia
    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    // Función miembro para mostrar las materias registradas
    void mostrar_materias() {
        std::cout << "Materias registradas:" << std::endl;
        for (const std::string& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante1("Juan Perez", 18, "Informatica");

    // Registrar algunas materias
    estudiante1.registrar_materia("Programacion");
    estudiante1.registrar_materia("Matematicas");
    estudiante1.registrar_materia("Fisica");

    // Mostrar la información del estudiante y las materias registradas
    estudiante1.mostrar_info();
    estudiante1.mostrar_materias();

    return 0;
}
