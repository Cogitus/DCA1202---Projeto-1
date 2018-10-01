#include "poligono.h"
#include <iostream>
#include <stdlib.h>

using namespace std;



Poligono::Poligono(){
}


Poligono::~Poligono() {
}


void Poligono::insereVertice(float a, float b) {

    if (numeroDeVertices <= 100) {
        poligono[numeroDeVertices].setX(a);//setando o ponto seguinte começando por
        poligono[numeroDeVertices].setY(b);//X0,Y0. Por isso temos polígono[numeroDeVertices]

        numeroDeVertices++;//incrementando o número de vértices a medida que os adiciono.
    }
}


void Poligono::imprime(void) {
    for (int i=0; i<numeroDeVertices; i++) {
        cout << "(" << poligono[i].getX() << "," << poligono[i].getY() << ")\n";
    }
}


int Poligono::quantidadeVertices(void) {
    return numeroDeVertices;
}


void Poligono::translada(float a, float b) {
    for(int i=0; i<numeroDeVertices; i++) {//percorre todos os meus pontos
        poligono[i].setXY(poligono[i].getX()+a, poligono[i].getY()+b);//soma os meus pontos x+a e y+b!
    }
}
