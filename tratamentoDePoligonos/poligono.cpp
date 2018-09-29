#include "poligono.h"
#include <iostream>
#include <stdlib.h>

using namespace std;



Poligono::Poligono(){
}


Poligono::~Poligono() {
}


void Poligono::insereVertice() {

    if (numeroDeVertices <= 100) {
        float* coordenadaXtemporaria = new float[1];//variáveis temporárias para não gastar a memória stack a toa
        float* coordenadaYtemporaria = new float[1];

        cout << "x" << numeroDeVertices << " = ";
        cin >> coordenadaXtemporaria[0];
        cout << "y" << numeroDeVertices << " = ";
        cin >> coordenadaYtemporaria[0];

        poligono[numeroDeVertices].setX(coordenadaXtemporaria[0]);//setando o ponto seguinte começando por
        poligono[numeroDeVertices].setY(coordenadaYtemporaria[0]);//X0,Y0. Por isso temos polígono[numeroDeVertices]

        numeroDeVertices++;//incrementando o número de vértices a medida que os adiciono.

        delete [] coordenadaXtemporaria;//apagando as varriáveis temporárias.
        delete [] coordenadaYtemporaria;
    }
}
