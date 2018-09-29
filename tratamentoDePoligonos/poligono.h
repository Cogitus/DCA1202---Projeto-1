#ifndef POLIGONO_H
#define POLIGONO_H

#include "ponto.h" //tenho que adicionar porque cada arquivo em c++ é diferente!

/*
métodos a serem implementados:
inserirVertice(float x, float y);
int quantidadeVertices(void);
float area(void);
void translada(float a, float b);
void rotaciona(float x0, float y0); x0 e y0 é o ponto em que desejamos rotacionar o polígono!
void imprime(void);
*/


class Poligono{//Representa polígonos convexos.

private:
     //tem que ser um ponteiro para poder alocar dinamicamente

    int numeroDeVertices = 0;

public:
    Poligono();
    ~Poligono();
    Ponto poligono[100];
    void insereVertice();

};

#endif // POLIGONO_H
