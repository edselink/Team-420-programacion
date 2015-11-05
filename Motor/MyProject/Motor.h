class Motor {
private:
protected:
public:
	Motor();
	~Motor();
};

class Punto{
public:
	int x;
	int y;
	int distanciaEntrePuntos(Punto punto);
	void rotar(Punto punto, int grados);
	void moverHaciaPunto(Punto punto, int velocidad);
};

class Sprite : public Punto{
public:
private:
	Imagen imagen;
	Fisica fisica;
};

class Fisica{
public:
	Fisica(Sprite sprite);
	void setGravedad(float);
	float getGravedad();
	void setColision(bool);
	bool getColision();
private:
	float gravedad;
	bool colision;
};

class Personaje{
public:
	void setVida(int);
	int getVida();
private:
	Sprite sprite;
	int vida;
};
