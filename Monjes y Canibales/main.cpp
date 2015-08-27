#include<iostream>
#include <cstdlib>
using namespace std;

typedef struct _estructura {
	int m_I;
	int c_I;
	int m_D;
	int c_D;
	_estructura *sig;
	bool mover(int m, int c){
		m_D += m;
		c_D += c;
		m_I -= m;
		c_I -= c;
		if(m_D < 0 || c_D < 0 || m_I < 0 || c_I < 0){
			return false;
		}
		return true;
	}
} estructura;

void imprimirLista();

estructura *lista = NULL;

estructura *crearNodo(estructura *ptr){
	estructura *nuevo = (estructura*)malloc(sizeof(estructura));
	if(nuevo != NULL){
		nuevo -> c_D = ptr -> c_D;
		nuevo -> c_I = ptr -> c_I;
		nuevo -> m_D = ptr -> m_D;
		nuevo -> m_I = ptr -> m_I;
		nuevo -> sig = NULL;
		return nuevo;
	}
	return NULL;
}

bool resolver(estructura *ptr, int m, int c){
	if((ptr -> c_I > ptr -> m_I && ptr -> m_I > 0) || (ptr -> c_D > ptr -> m_D && ptr -> m_D > 0)){
		imprimirLista();
		//eliminar?
		return false;
	}
	
	int dir = m >= 0 ? 1 : -1;
	
	estructura *nuevo = crearNodo(ptr);
	if(!nuevo -> mover(m, c)){
		//eliminar?
		return false;
	}
	
	ptr -> sig = nuevo;
	
	if(resolver(nuevo, 0, -dir)){
		return true;
	}
	if(resolver(nuevo, 0, -dir*2)){
		return true;
	}
	if(resolver(nuevo, -dir, 0)){
		return true;
	}
	if(resolver(nuevo, -dir*2, 0)){
		return true;
	}
	if(resolver(nuevo, -dir, -dir)){
		return true;
	}
	free(nuevo);
	ptr->sig = NULL;
}

void imprimirLista(){
	estructura *ptr = lista;
	while(ptr != NULL){
		cout << "m x " << ptr->m_I << "c x " << ptr->c_I << " | " << "m x " << ptr->m_D << "c x " << ptr->c_D;
	}
}

int main (int argc, char *argv[]) {
	
	return 0;
}

