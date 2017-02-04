#include <iostream>
#include <vector>

using namespace std;

int menu();
void imprimir(int**, int);

int main() {
        int resp = menu();
        if (resp == 1) {
                int GR, cont, temp = 0, a;
		cout << "Ingrese el grado mas alto del polinomio. \n";
		cin >> GR;
		while (GR <= 0) {
			cout << "Numero invalido, ingrese otro numero.\n";
			cin >> GR;
		}
		GR++;
		cont = GR - 1;
		cout << "Ingrese a.\n";
		cin >> a;
		vector<int**> MaT;
		int** matriz = new int*[3];
		for(int i = 0; i < 3; i++) {
			matriz[i] = new int[GR];
			
		}
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < GR; j++) {
				matriz[i][j] = 0;
				cout << "[" << matriz[i][j] << "]";			
			}
			cout << endl;
		}
		//for(int i = 0; i < 1; i++) {
                        for(int j = 0; j < GR; j++) {
				cout << "Ingrese el polinomio x^" << cont << ".\n";
				cin >> temp;
				cout << j << endl;
				matriz[0][j] = temp;
				cout << "P";
				cont--;
			}
		//}
		cout << "aqui esta el error" << endl;
		for(int k = 0; k < GR; k++) {
			for(int i = 0; i < 3; i++) {
                        	for(int j = 0; j < GR; j++) {
					if (i == 1 && matriz[i][j] == 0) {
						matriz[i+1][j] = matriz[i-1][j];
					} else if (i == 1) {
						matriz[i+1][j] = matriz[i-1][j] + matriz[i][j];
					}
					if (i == 1 && j < GR) {
						matriz[i][j + 1] = matriz[i+1][j] * a;
					}
				}
			//imprimir(matriz, GR);
			//cout << endl;
			}
			imprimir(matriz, GR);
			cout << endl;
			MaT.push_back(matriz);
			//imprimir(matriz, GR);	
		}
		for(int i = 0; i < 3; i++) {
                	delete[] matriz[i];
                	matriz[i] = NULL;
        	}
        	delete[] matriz;
        } else {
		int tam, minas, x, y;
		cout << "Ingrese el tamaño de la matriz. \n";
		cin >> tam;
		cout << "Ingrese la cantidad de minas. \n";
		cin >> minas;
		int** matriz = new int*[tam];
		for(int i = 0; i < tam; i++) {
			matriz[i] = new int[tam];
		}
		for(int i = 0; i < tam; i++) {
                        for(int j = 0; j < tam; j++) {
                                matriz[i][j] = 0;
                        }
                }
		int temp1, temp2;
	 	/*for(int k = 0; k < minas; j++) {
			temp1 = rand() % tam;
			temp2 = rand() % tam;
			matriz[temp1][temp2] = 10;
		}*/
		/*for(int i = 0; i < tam; i++) {
			for(int j = 0; j < tam; j++) {
				if (matriz[i][j] == 10) {
				} else if (matriz[i][j] == 0 && (i - 1) >= 0 && (i + 1) < tam && (j - 1) >= 0 && (j + 1) < tam {
					if (matriz[i-1][j-1] == 10) {
						matriz[i][j]++;
					} else if(matriz[i-1][j] == 0) {
						matriz[i][j]++;
					} else if(matriz[i-1][j+1]) {
						matriz[i][j]++;
					}
				}
			}
		}*/
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
