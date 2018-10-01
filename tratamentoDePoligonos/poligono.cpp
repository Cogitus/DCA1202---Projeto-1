#include "poligono.h"
#include <iostream>
#include <stdlib.h>
#include <cmath> //pra poder converter de radianos para graus!

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


void Poligono::rotaciona (float x0, float y0, float angulo) {
    angulo = angulo*180/M_PI;//fator de multiplicação = 180/pi;


    poligono.translada(-x0,-y0); //translado todos os meus pontos em uma distância de x0 e y0 à direita.

    for (int i=0; i<numeroDeVertices; i++) {
        poligono[i].setX(getX()*angulo);
    }
}
