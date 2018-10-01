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


//Rotacionar o polígono de θ graus no sentido anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário
//aparentemente, esta dando erro quando trata-se de girar em torno de um ponto fora da origem.
void Poligono::rotaciona (float x0, float y0, float angulo) {
    // a matriz de rotacao gira no sentido horario, precisamos girar no sentido anti horario:
    angulo = -1*angulo;
    // o fator de multiplicacao, para rodar em radianos
    angulo = angulo*(M_PI/180);//fator de multiplicação = pi/180;

    // isso é bizarro, mas acho melhor deixar rotaciona como uma função amiga ou algo assim
    // devemos perceber que poligono é um conjunto de pontos e o método translada só funciona se fizermos
    // poligono[i].translada(a,b),ainda que vá transladar todos os pontos, mas enfim.
    // de qualquer forma, irei implementar como um metodo.
    poligono[0].translada(-x0,-y0); //translado todos os meus pontos em uma distância de x0 e y0 à direita.

    float novoX, novoY;

    for (int i=0; i<numeroDeVertices; i++) {

        novoX = poligono[i].getX()*cos(angulo)+poligono[i].getY()*sin(angulo);
        novoY = -1*sin(angulo)*poligono[i].getX()+poligono[i].getY()*cos(angulo);

        //devido ao tipo float, eh preciso fazer esse tratamento:
        if(abs(novoY)<=0.0000005)
            novoY = 0;
        if(abs(novoX)<=0.0000005)
            novoX = 0;
        // ao longo dos testes, os valores que deveriam ser nulos geralmente retornavam -4e-7 (-0.0000004)
        poligono[i].setXY(novoX, novoY);
    }

    poligono[0].translada(x0,y0); // colocando todos os pontos nos lugares certos
}
