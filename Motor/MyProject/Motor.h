class Motor {
private:
protected:
public:
	Motor();
	~Motor();
};

typedef struct _punto {
	int x;
	int y;
} Punto;

class Sprite{
public:
private:
	Punto punto;
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
