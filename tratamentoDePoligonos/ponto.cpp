#include <cmath>
#include <iostream>
#include "ponto.h"

using namespace std;

/*
void setX(float _x);
void setY(float _y);
void setXY(float _x, float _x);
float getX(void);
float getY(void);
Ponto add(Ponto p1);
Ponto sub(Ponto p1);
float norma(void);
void translada(float a, float b);
void imprime(void);
*/

Ponto::Ponto() { //construtor
}


void Ponto::setX(float _x) {
    x = _x;
}


void Ponto::setY(float _y) {
    y = _y;
}


void Ponto::setXY(float _x, float _y) {
    x = _x;
    y = _y;
}


float Ponto::getX(void) {
    return x;
}


float Ponto::getY(void) {
    return y;
}


Ponto Ponto::add(Ponto p1) {
    Ponto pontoAuxiliar;

    pontoAuxiliar.x = p1.x + x;
    pontoAuxiliar.y = p1.x + y;

    return pontoAuxiliar;
}


Ponto Ponto::sub(Ponto p1) {
    Ponto pontoAuxiliar;

    pontoAuxiliar.x = p1.x + x; //o x avulso pertence ao meu objeto que chama o método sub.
    pontoAuxiliar.y = p1.y + y; //o y avulso pertence ao meu objeto que chama o método sub.
    //não estamos usando os métodos set() e get() por otimização!

    return pontoAuxiliar;
}


float Ponto::norma(void) {
    return sqrt(x*x + y*y);
}


void Ponto::translada(float a, float b) {
    x = x+a;
    y = y+b;
}


void Ponto::imprime(void) {
    cout << "(" << x << ", " << y << ")";
}
