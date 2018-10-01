#include <iostream>
#include "poligono.h"

using namespace std;

int main (void) {
    Poligono triangulo;

    for(int i=0; i<3; i++) {
        triangulo.insereVertice(3, i);
    }

    cout << "Coordenadas dos vertices do triangulo: \n";

    triangulo.imprime();

}
