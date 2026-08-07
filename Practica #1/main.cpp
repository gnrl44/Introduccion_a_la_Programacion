#include <iostream>
using namespace std;
int main() {
        string carrera;
        int carnet;

        cout << "Ingrese su numero de carnet de 4 digitos: ";
        cin >> carnet;
        cout << "Cual es su carrera?: ";
        cin >> carrera;
        cout << "Usted pertenece a " << carrera << " y su carnet es " << carnet << endl;
        return 0;
}