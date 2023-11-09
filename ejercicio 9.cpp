#include <iostream>
#include <string>
#include <stdexcept>

// Definición de la excepción personalizada
class MateriaYaRegistradaException : public std::exception {
public:
    MateriaYaRegistradaException(const std::string& materia) : mensaje("La materia '" + materia + "' ya ha sido registrada.") {}

    const char* what() const throw() {
        return mensaje.c_str();
    }

private:
    std::string mensaje;
};

// Clase Estudiante
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
                throw MateriaYaRegistradaException(materia); // Lanzar la excepción personalizada
            }
        }
        materias.push_back(materia);
    }
};

int main() {
    Estudiante estudiante1("Juan Perez", 18, "12º grado");

    // Registrar algunas materias
    try {
        estudiante1.registrarMateria("Matemáticas");
        estudiante1.registrarMateria("Ciencias");
        estudiante1.registrarMateria("Matemáticas"); // Intentar registrar la misma materia nuevamente
    } catch (const MateriaYaRegistradaException& e) {
        std::cerr << "Excepción capturada: " << e.what() << std::endl;
    }

    // Mostrar las materias registradas
    std::cout << "Materias registradas:" << std::endl;
    for (const std::string& materia : estudiante1.materias) {
        std::cout << "- " << materia << std::endl;
    }

    return 0;
}
