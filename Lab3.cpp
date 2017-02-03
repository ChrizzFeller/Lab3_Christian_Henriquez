#include <iostream>
#include <vector>

using namespace std;

int menu();
void imprimir(int**, int);

int main() {
        int resp = menu();
        if (resp == 1) {
                int GR, cont, temp, a;
		cout << "Ingrese el grado mas alto del polinomio. \n";
		cin >> GR;
		while (GR <= 0) {
			cout << "Numero invalido, ingrese otro numero.\n";
			cin >> GR;
		}
		cont = GR;
		cout << "Ingrese a.\n";
		cin >> a;
		vector<int**> MaT;
		int** matriz = new int*[3];
		for(int i = 0; i < 3; i++) {
			matriz[i] = new int[GR] ;
		}
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < GR + 1; j++) {
				matriz[i][j] = 0;
			}
		}
		for(int i = 0; i < 1; i++) {
                        for(int j = 0; j < GR + 1; j++) {
				cout << "Ingrese el polinomio x^" << cont << ".\n";
				cont--;
				cin >> temp;
				matriz[i][j] = temp;
			}
		}
		for(int k = 0; k < GR + 1; k++) {
			for(int i = 0; i < 3; i++) {
                        	for(int j = 0; j < GR + 1; j++) {
					if (i == 1 && matriz[i][j] == 0) {
						matriz[i+1][j] = matriz[i-1][j];
					} else {
						matriz[i+1][j] = matriz[i-1][j] + matriz[i][j];
					}
					if (j != GR + 1) {
						matriz[i][j + 1] = matriz[i+1][j] * a;
					}
				}
			}
			imprimir(matriz, GR+1);
		}
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

void imprimir(int** mat, int size) {
	for(int i = 0; i < 3; i++) {
        	for(int j = 0; j < size; j++) {
			cout << "["  << mat[i][j] << "] ";
		}
	cout << "\n";
	}
}
