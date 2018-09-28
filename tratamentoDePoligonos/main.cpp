#include <iostream>
#include "ponto.h"

using namespace std;

int main (void) {

    Ponto pontinho;

    pontinho.setX(10);
    pontinho.setY(7);

    cout<<"("<<pontinho.getX()<<","<<pontinho.getY()<<");"<<endl;

    Ponto novopontinho = pontinho.add(pontinho);

    cout<<"("<<novopontinho.getX()<<","<<novopontinho.getY()<<");"<<endl;
}
