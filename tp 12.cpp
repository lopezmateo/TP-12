#include <iostream>
#include <string>
using namespace std;

double calcularSueldo(int anioIngreso, double sueldo) {
    if (anioIngreso < 15) {
        sueldo *= 0.2;
    } else if (anioIngreso > 16) {
        sueldo *= 0.8;
    }
    return sueldo;
}

int main() {
    string nombre;
    double sueldo;
    int anioIngreso;
    
    cout << "Ingrese el nombre del empleado: ";
    cin >> nombre;
    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;
    cout << "Ingrese el ano de ingreso del empleado: ";
    cin >> anioIngreso;

    sueldo = calcularSueldo(anioIngreso, sueldo);
    cout << "El sueldo final de " << nombre << " es: " << sueldo << endl;

    return 0;
}	
	
