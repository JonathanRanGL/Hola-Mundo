 
#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
#include <Dibujo.hpp>
#include <Animacion.hpp>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais;
    Alimento carne(10);

    firulais.Comer(carne);

    firulais.Jugar();
    firulais.Jugar();
    firulais.Jugar();

    cout
    <<"Vida de firumiau "
    << firulais.LeerVida()
    << endl;

    Dibujo dibujo("./assets/gato.txt");
    Dibujo dibujo2("./assets/gato_mimido.txt");

    list<Dibujo> dibujos;
    dibujos.push_back(dibujo);
    dibujos.push_back(dibujo2);

    Animacion animacion(dibujos);
    animacion.Reproducir();

    return 0;
}
