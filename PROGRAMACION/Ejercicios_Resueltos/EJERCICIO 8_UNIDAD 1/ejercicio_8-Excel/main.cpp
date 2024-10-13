#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    int nro;
    string dni;
    string apellido;
    string nombre;
    bool clases[7]; // 7 clases, true = presente, false = ausente
    int presentes;
    int ausentes;
    double porcentajeAsistencia;
};

int main() {
    const int numEstudiantes = 50;
    Estudiante estudiantes[numEstudiantes];
    int totalAusentes = 0, totalPresentes = 0;
    double porcentajePromedio = 0.0;
    int maxAusentes = 0;
    string estudianteMaxAusentes;

    // Ingreso de datos
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Ingresar datos del estudiante " << i+1 << ":\n";
        cout << "Nro: "; cin >> estudiantes[i].nro;
        cout << "DNI: "; cin >> estudiantes[i].dni;
        cout << "Apellido: "; cin >> estudiantes[i].apellido;
        cout << "Nombre: "; cin >> estudiantes[i].nombre;

        estudiantes[i].presentes = 0;
        estudiantes[i].ausentes = 0;

        // Ingreso de asistencias
        for (int j = 0; j < 7; j++) {
            cout << "Asistencia en clase " << j+1 << " (1=Presente, 0=Ausente): ";
            cin >> estudiantes[i].clases[j];
            if (estudiantes[i].clases[j]) {
                estudiantes[i].presentes++;
            } else {
                estudiantes[i].ausentes++;
            }
        }

        // Cálculo de porcentaje de asistencia
        estudiantes[i].porcentajeAsistencia = (estudiantes[i].presentes / 7.0) * 100;

        // Acumular para el promedio
        totalPresentes += estudiantes[i].presentes;
        totalAusentes += estudiantes[i].ausentes;
        porcentajePromedio += estudiantes[i].porcentajeAsistencia;

        // Verificar máximo ausentes
        if (estudiantes[i].ausentes > maxAusentes) {
            maxAusentes = estudiantes[i].ausentes;
            estudianteMaxAusentes = estudiantes[i].apellido + " " + estudiantes[i].nombre;
        }
    }

    // Calcular porcentaje promedio de asistencia
    porcentajePromedio /= numEstudiantes;

    // Mostrar resumen por estudiante
    cout << "\nResumen de asistencias:\n";
    for (int i = 0; i < numEstudiantes; i++) {
        cout << estudiantes[i].nro << " " << estudiantes[i].dni << " "
             << estudiantes[i].apellido << " " << estudiantes[i].nombre
             << " Ausentes: " << estudiantes[i].ausentes
             << " Presentes: " << estudiantes[i].presentes
             << " %Asistencia: " << estudiantes[i].porcentajeAsistencia << "%\n";
    }

    // Mostrar resultados generales
    cout << "\nPorcentaje de asistencia promedio: " << porcentajePromedio << "%\n";
    cout << "Estudiante con más ausentes: " << estudianteMaxAusentes
         << " con " << maxAusentes << " ausencias.\n";

    return 0;
}
