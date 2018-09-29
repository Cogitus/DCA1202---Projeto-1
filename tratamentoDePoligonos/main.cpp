#include <iostream>
#include "poligono.h"

using namespace std;

int main (void) {
    Poligono triangulo;

    for(int i=0; i<3; i++) {
        triangulo.insereVertice();
    }

    cout << "Coordenadas dos vertices do triangulo: \n";

    for(int i=0; i<3; i++) {
        cout << "(" << triangulo.poligono[i].getX() << "," << triangulo.poligono[i].getY() << ")\n";
    }


}
