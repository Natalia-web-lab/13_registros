#include <iostream>
#include <string>
using namespace std;

struct EMP {
    int num;
    string nom;
    float ven[12], sal;
};

int main() {
    EMP EMPLEADOS[100];
    int n;

    cout << "Ingrese la cantidad de empleados: " << endl;
    cin >> n;

    // Entrada de datos
    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado #" << i + 1 << endl;
        cout << "Número de empleado: ";
        cin >> EMPLEADOS[i].num;
        cin.ignore();

        cout << "Nombre: ";
        getline(cin, EMPLEADOS[i].nom);

        cout << "Ventas mensuales (12 meses):\n";
        for (int j = 0; j < 12; j++) {
            cout << "Mes " << j + 1 << ": ";
            cin >> EMPLEADOS[i].ven[j];
        }

        cout << "Salario: ";
        cin >> EMPLEADOS[i].sal;
    }

    // Impresión de datos
    cout << "\n====================================" << endl;
    cout << "CANTIDAD TOTAL DE EMPLEADOS: " << n << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado #" << i + 1 << endl;
        cout << "Número: " << EMPLEADOS[i].num << endl;
        cout << "Nombre: " << EMPLEADOS[i].nom << endl;
        cout << "Ventas por mes: ";
        for (int j = 0; j < 12; j++) {
            cout << EMPLEADOS[i].ven[j] << " ";
        }
        cout << "\nSalario: " << EMPLEADOS[i].sal << endl;
    }

    return 0;
}
