#include <iostream>
#include <string>
#include <vector>  // Agregar esta línea para incluir la biblioteca vector

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;  // Utilizar vector para almacenar materias

    Estudiante(const std::string& n, int e, const std::string& g) : nombre(n), edad(e), grado(g) {}

    // Función para registrar una materia
    void registrarMateria(const std::string& materia) {
        for (const std::string& m : materias) {
            if (m == materia) {
                throw MateriaYaRegistradaException(materia);
            }
        }
        materias.push_back(materia);
    }
};

int main() {
    Estudiante estudiante1("Juan Perez", 18, "12º grado");

    try {
        estudiante1.registrarMateria("Matemáticas");
        estudiante1.registrarMateria("Ciencias");
        estudiante1.registrarMateria("Matemáticas");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    std::cout << "Materias registradas:" << std::endl;
    for (const std::string& materia : estudiante1.materias) {
        std::cout << "- " << materia << std::endl;
    }

    return 0;
}
