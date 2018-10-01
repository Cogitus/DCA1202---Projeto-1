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

    // as linhas a seguir se referem ao teste quanto ao método transladar.
    triangulo.translada(-3,-1);
    cout << "Coordenadas dos vertices do triangulo transladado: \n";
    triangulo.imprime();

    // as linhas a seguir visam testar o metodo da rotaçao
    Poligono trianguloDeitado;
    trianguloDeitado.insereVertice(1,1);
    trianguloDeitado.insereVertice(1,10);
    trianguloDeitado.insereVertice(10,4.5);
    cout<<endl<<endl;
    cout<<"Triangulo antes de rotacionar: \n";
    trianguloDeitado.imprime();
    trianguloDeitado.rotaciona(4.5,4.5,90); // rotacionar 90° em relaçao a origem
    cout<<"Triangulo apos rotacao: \n";
    trianguloDeitado.imprime();


}
