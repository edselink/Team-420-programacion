#include <iostream>
#include <stdio.h>

using namespace std;

int tablero[9][9];

void llenarMatriz(){
for (int i=0; i<10; i++){
    for (int j=0; i<10; j++){
        tablero[i][j]=0;
        }
    }
}

void imprimir(){
for (int i=0; i<10; i++){
    for (int j=0; i<10; j++){
        printf("%d", tablero[i][j]);
        }
        printf("\n");
    }
}

int main(){
    llenarMatriz();
    imprimir();

	return 0;
}
