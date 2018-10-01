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

//Ao tentarmos acessar na main polino[i], estamos tentando acessar um atributo privado, por tal
motivo, estaremos fadados ao erro (tentando acessar um atributo privado através de um método
público de um atributo privado).

PESQUISAR MÉTODO DE SHOELACE.
*/


class Poligono{//Representa polígonos convexos.

private:
     //tem que ser um ponteiro para poder alocar dinamicamente

    int numeroDeVertices = 0;
    Ponto poligono[100];

public:
    Poligono();
    ~Poligono();
    void insereVertice(float a, float b);
    void imprime(void);
    int quantidadeVertices(void);
    void translada(float a, float b);
    void rotaciona(float x0, float y0, float angulo);

};

#endif // POLIGONO_H
