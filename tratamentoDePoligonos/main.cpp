#include <iostream>
#include "poligono.h"

using namespace std;

int main (void) {
    Poligono triangulo;
    
    for (int i=0; i<3; i++) {
        triangulo.insereVertice(i,2);
    }


    cout << endl;

    triangulo.imprime();

    triangulo.rotaciona(2,2,60);

    triangulo.imprime();

 /*
    for(int i=0; i<3; i++) {
        triangulo.insereVertice(3, i);
    }

    cout << "Coordenadas dos vertices do triangulo: \n";

    triangulo.imprime();

    // as linhas a seguir se referem ao teste quanto ao método transladar.
    triangulo.translada(-3,-1);
    cout << "Coordenadas dos vertices do triangulo transladado: \n";
    triangulo.imprime();

    cout<<"Agora mandando de volta pro lugar original: \n";
    triangulo.translada(3,1);
    triangulo.imprime();


    // as linhas a seguir visam testar o metodo da rotaçao em relação a origem. Deu certo
    Poligono trianguloDeitado;
    trianguloDeitado.insereVertice(10,-1);
    trianguloDeitado.insereVertice(10,1);
    trianguloDeitado.insereVertice(-10,1);
    trianguloDeitado.insereVertice(-10,-1);
    cout<<endl<<endl;
    cout<<"Triangulo antes de rotacionar em relacao a origem: \n";
    trianguloDeitado.imprime();
    trianguloDeitado.rotaciona(0,0,90); // rotacionar 90° em relaçao a origem
    cout<<"Triangulo apos rotacao: \n";
    trianguloDeitado.imprime();

    //as linhas a seguir visam testar o metodo de rotacao em relacao a um ponto fora da origem (5,0).
    Poligono trianguloDeitado2;
    trianguloDeitado2.insereVertice(0,-1);
    trianguloDeitado2.insereVertice(0,1);
    trianguloDeitado2.insereVertice(10,1);
    trianguloDeitado2.insereVertice(10,-1);
    cout<<endl<<endl;
    cout<<"Triangulo antes de rotacionar ao redor de um ponto fora da origem: \n";
    trianguloDeitado2.imprime();
    trianguloDeitado2.rotaciona(5,0,90); // rotacionar 90° em relaçao a origem
    cout<<"Triangulo apos rotacao: \n";
    trianguloDeitado2.imprime();*/

}
