#include <bits/stdc++.h>
using namespace std;

void menu() {
    cout << "¡Bienvenido a #nombre del juego!\n";
    string name;
    cout << "Ingrese su nombre : ";
    cin >> name;
    cout << "\nBienvenido " << name << "!\n";
    cout << "Jugar: 1\n";
    cout << "Ver Estadisticas: 2\n";
    cout << "Salir: 3\n";
    cout << "Ingrese la opcion elegida: ";
    string x; cin >> x;
    while (x!="3" and x!="2" and x!="1") {
        cout << "\nOpcion no valida, ingrese correctamente: ";
        cout << "\nIngrese nuevamente: ";
        cin >> x;
    }
    if (x=="1") {
        //funcion jugar();
    }
    else if (x=="2") {
        fstream Estadisticas("stat", ios::out);
        string line;
        while (getline(Estadisticas, line)) {
            cout << line << "\n";
        }
        Estadisticas.close();
    }
    else {
        cout << "Gracias por jugar :)" << "\n";
    }
}
