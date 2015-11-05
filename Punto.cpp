class punto{
private:
    int x[10];
    int y[10];
public:
    punto();
    void crearX(int,int);
    void crearY(int,int);
    int getPunto();
    int getPuntoX(int);
    int getPuntoY(int);
    void moverPunto(int, int);
};

punto::punto(){
x[0]=0;
x[1]=0;
y[0]=0;
y[1]=0;
}

void punto::crearX(int uno,int dos){
    x[0]=uno;
    x[1]=dos;
}

void punto::crearY(int uno,int dos){
    y[0]=uno;
    y[1]=dos;
}

int punto::getPuntoX(int i){
    return x[i];
}

int punto::getPuntoY(int i){
    return y[i];
}

void punto::moverPunto(){
    if(getPuntoX(1)!=0 && getPuntoY(0)){

    }
}






