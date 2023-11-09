#include <iostream>
#include <string>

class Profesor {
public:
    std::string nombre;
    int edad;
    std::string materiaQueImparte;
    int añosExperiencia;

    // Constructor para inicializar las propiedades
    Profesor(const std::string& n, int e, const std::string& materia, int experiencia)
            : nombre(n), edad(e), materiaQueImparte(materia), añosExperiencia(experiencia) {}

    // Función para mostrar la información del profesor
    void mostrar_info_profesor() {
        std::cout << "Nombre del profesor: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Materia que imparte: " << materiaQueImparte << std::endl;
        std::cout << "Años de experiencia: " << añosExperiencia << " años" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Profesor
    Profesor profesor1("Ana Lopez", 35, "Matematicas", 10);

    // Llamar a la función para mostrar la información del profesor
    profesor1.mostrar_info_profesor();

    return 0;
}
