#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    // Propiedades de la clase RegistroAsistencia
    std::string fecha;
    std::string estado;

    // Constructor para inicializar las propiedades
    RegistroAsistencia(const std::string& fecha, const std::string& estado) : fecha(fecha), estado(estado) {}

    // Función miembro para mostrar la asistencia
    void mostrar_asistencia() {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de asistencia: " << estado << std::endl;
    }
};

int main() {
    RegistroAsistencia asistencia1("2023-11-05", "Asistio");
    RegistroAsistencia asistencia2("2023-11-06", "Falta");

    std::cout << "Asistencia 1:" << std::endl;
    asistencia1.mostrar_asistencia();

    std::cout << "\nAsistencia 2:" << std::endl;
    asistencia2.mostrar_asistencia();

    return 0;
}
