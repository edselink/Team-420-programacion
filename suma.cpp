#include <iostream>
#include <stdio.h>

void suma(int inicio, int limite, int resultado){
	if(inicio <= limite){
		resultado = resultado + inicio;
		printf("%d \n", resultado);
		suma(inicio+1, limite, resultado);
	}
}

void factorial(int numero, int uno, int resultado){
    if(numero>=uno){
        resultado=(resultado*(uno));
        printf("%d \n", resultado);
        factorial(numero, uno+1, resultado);
    }
}

int main(){
    int a = 0x3;
    int b = 0xf;
    //printf("%d", a+b);
    suma(1,5,0);
    //factorial(15,1,1);
	return 0;
}
