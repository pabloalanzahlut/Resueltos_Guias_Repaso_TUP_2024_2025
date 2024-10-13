#include <iostream>
#include <string>

int main() {
    const int totalAlumnos = 60;
    std::string nombre, apellido, dni;
    int nota1, nota2;
    int promocionados = 0, regulares = 0, desaprobados = 0;

    for (int i = 0; i < totalAlumnos; ++i) {
        std::cout << "Ingrese nombre y apellido del alumno " << (i + 1) << ": ";
        std::cin >> nombre >> apellido;

        std::cout << "Ingrese DNI del alumno " << (i + 1) << ": ";
        std::cin >> dni;

        std::cout << "Ingrese Nota 1 del alumno " << (i + 1) << ": ";
        std::cin >> nota1;

        std::cout << "Ingrese Nota 2 del alumno " << (i + 1) << ": ";
        std::cin >> nota2;

        // Calcular el promedio
        int promedio = (nota1 + nota2) / 2;

        // Determinar la situación del alumno
        if (promedio >= 8) {
            promocionados++;
        }
        if (promedio < 6) {
            desaprobados++;
        }
        if (promedio >= 6 && promedio < 8) {
            regulares++;
        }
    }

    // Mostrar el resumen
    std::cout << "\nResumen de Alumnos:\n";
    std::cout << "Promocionados: " << promocionados << "\n";
    std::cout << "Regulares: " << regulares << "\n";
    std::cout << "Desaprobados: " << desaprobados << "\n";

    return 0;
}
