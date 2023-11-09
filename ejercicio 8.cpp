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
            Estudiante("Juan", 16, "Ingenieria"),
            Estudiante("Maria", 17, "11º grado"),
            Estudiante("Carlos", 15, "10º grado"),
            Estudiante("Luisa", 18, "12º grado"),
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
