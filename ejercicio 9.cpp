#include <iostream>
#include <string>
#include <vector>

// Declaración de la excepción personalizada
class MateriaYaRegistradaException : public std::exception {
public:
    MateriaYaRegistradaException(const std::string& materia) : mensaje("La materia '" + materia + "' ya ha sido registrada.") {}

    const char* what() const throw() {
        return mensaje.c_str();
    }

private:
    std::string mensaje;
};

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

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
    Estudiante estudiante1("Juan Perez", 18, "Ingenieria");

    try {
        estudiante1.registrarMateria("Matematicas");
        estudiante1.registrarMateria("Ciencias");
        estudiante1.registrarMateria("Matematicas");
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Materias registradas:" << std::endl;
    for (const std::string& materia : estudiante1.materias) {
        std::cout << "- " << materia << std::endl;
    }

    return 0;
}
