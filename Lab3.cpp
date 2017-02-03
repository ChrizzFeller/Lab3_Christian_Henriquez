#include <iostream>

using namespace std;

int menu();

int main() {
        int resp = menu();
        if (resp == 1) {
                int GR;
		cout << "Ingrese el grado mas alto del polinomio. \n";
		
        } else {
	
        }
        return 0;
}

int menu() {
        cout << "-------Menu-------\n";
        cout << "1) Ejercicio 1\n";
        cout << "2) Ejercicio 2\n";
        int resp;
        cin >> resp;
        return resp;
}

