#ifndef PONTO_H
#define PONTO_H


class Ponto {

private:
    float x, y;

public:
    Ponto();//construtor default
    void setX(float _x);
    void setY(float _y);
    void setXY(float _x, float _y);
    float getX(void);
    float getY(void);
    Ponto add(Ponto p1);
    Ponto sub(Ponto p1);
    float norma(void);
    void translada(float a, float b);
    void imprime(void);

};

#endif // PONTO_H
