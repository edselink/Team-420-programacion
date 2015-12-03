#include <iostream>
#include <stdio.h>

using namespace std;

int tablero [9][9];
int total;
int acertados=0;

void llenarMatriz(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            tablero[i][j]=0;
        }
    }
}

void puntos(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if(tablero[i][j]=1){
                total++;
            }
        }
    }
}

void imprimirMatriz(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << tablero[i][j] << "  ";
        }
    cout << endl;
    }
}

int mover(int a, int b){
    if(a>b){
        return (a-b)-1;
    }else return (b-a)-1;
}

void cordenadas(int a, int b, int c, int d){
    int igual, ciclo;
    if(a==c){
        igual=c;
        tablero[igual-1][b-1]=1;
        tablero[igual-1][d-1]=1;
        ciclo=mover(b,d);
        for(ciclo; ciclo>0; ciclo--){
            tablero[igual-1][(b-1)+ciclo]=1;
        }
    }else if(b==d){
        igual=d;
        tablero[a-1][igual-1]=1;
        tablero[c-1][igual-1]=1;
        ciclo=mover(a,c);
            for(ciclo; ciclo>0; ciclo--){
            tablero[(a-1)+ciclo][igual-1]=1;
        }
    }
}

void colocarBarcos(){
    int barcos;
    cout << "cuantos barcos quiere ?" << endl;
    cin >> barcos;
    while(barcos!=0){
        int inicioI, InicioII, finI, finII;
        cout << "En que cordenada quire que inicie su barco ?" << endl;
        cin >> inicioI >> InicioII;
        cout << "En que cordenada quire que termine su barco ?" << endl;
        cin >> finI >> finII;
        cordenadas(inicioI, InicioII, finI, finII);
        barcos--;
    }

}

void disparo(int posicionX, int posicionY){
    //while(total!=acertados){
        if(tablero[posicionX-1][posicionY-1] == 0){
        tablero[posicionX-1][posicionY-1]=3;
    }else if(tablero[posicionX-1][posicionY-1]==1){
        tablero[posicionX-1][posicionY-1]=2;
        acertados++;
    }else cout << "la posicion no existe o es repetida" << endl;
    imprimirMatriz();
    //}
}

int main(){
    int x, y;
    bool fin= false;
    llenarMatriz();
    colocarBarcos();
    imprimirMatriz();
    puntos();
        cout << "Coordenada" << endl;
        cin >> x >> y;
        disparo(x,y);
}
