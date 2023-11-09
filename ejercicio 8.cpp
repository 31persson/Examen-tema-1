#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    Estudiante(const std::string& n, int e, const std::string& g) : nombre(n), edad(e), grado(g) {}
};

// Función para filtrar estudiantes por grado
std::vector<Estudiante> filtrarEstudiantesPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> estudiantesFiltrados;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }

    return estudiantesFiltrados;
}

int main() {
    // Ejemplo: lista de estudiantes
    std::vector<Estudiante> listaEstudiantes = {
            Estudiante("Juan", 21, "Ingenieria"),
            Estudiante("Maria", 19, "Fisica"),
            Estudiante("Carlos", 18, "Ingenieria"),
            Estudiante("Luisa", 18, "ADE"),
            Estudiante("Jaime", 20, "Ingenieria"),
            Estudiante("Lucas", 19, "Fisica"),
            Estudiante("Noelia", 18, "ADE"),
    };

    // Grado para filtrar
    std::string gradoFiltrado = "Ingenieria";

    // Filtrar estudiantes por grado
    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(listaEstudiantes, gradoFiltrado);

    std::cout << "Estudiantes en " << gradoFiltrado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << std::endl;
    }

    return 0;
}
