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
        poligono[numeroDeVertices].setXY(a, b);//setando o ponto seguinte começando por X0,Y0. Por isso, polígono[numeroDeVertices]
        numeroDeVertices++;//incrementando o número de vértices a medida que os adiciono.
    } else {
        cout << "Não foi possível inserir vértices no polígono.";
    }
}


void Poligono::imprime(void) {
    for (int i=0; i<numeroDeVertices; i++) {
        poligono[i].imprime(); //faço uso do próprio método da classe ponto ora!
        cout << " <--> ";
    }

    poligono[0].imprime();

    cout << "." << endl << endl;
}


int Poligono::quantidadeVertices(void) {
    return numeroDeVertices;
}


void Poligono::transladaPoligono(float a, float b) {
    for(int i=0; i<numeroDeVertices; i++) {//percorre todos os meus pontos
        poligono[i].translada(a, b); //translado o ponto como método já existente da classe ponto!
    }
}


void Poligono::rotaciona(float x0, float y0, float angulo) {

    angulo = angulo*(M_PI/180);//convertendo o angulo para

    transladaPoligono(x0, y0); //desloco o eixo para esse ponto

    //rotacionando as coordenadas!
    for(int i=0; i<numeroDeVertices; i++) {
        float x_rotacionado = poligono[i].getX()*cos(angulo) - poligono[i].getY()*sin(angulo);
        float y_rotacionado = poligono[i].getX()*sin(angulo) + poligono[i].getY()*cos(angulo);

        poligono[i].setXY(x_rotacionado, y_rotacionado);
    }

    transladaPoligono(-x0, -y0); //retorno o sistema de eixos para a origem.

}
