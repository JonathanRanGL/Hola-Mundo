#include <iostream>
using namespace std;

class Personaje
{
private:
    /* data */
public:
    Personaje(/* args */) {}
    ~Personaje() {}
    
    void Hablar()
    {
        cout<<"Hola enanos"<<endl;
    }
};

class Duende : public Personaje //Duende es un Personaje
{
private:
    int salud;
public:
    Duende(/* args */) {}
    ~Duende() {}
};

class Enano : public Personaje //Enano es un personaje
{
private:
    float altura;
    int edad;
    int vida;
public:
    Enano(/* args */) {}
    ~Enano() {}

    void Inicializar()
    {
        this->altura = 2;
        this->edad = 150;
        this->vida = 10;
    }

    void Comer()
    {
        this->vida += 1;
    }
};

int main(int argc, char const *argv[])
{
    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout<<"Tamaño tipos de datos nativos en C/C++: "<<endl;
    cout<<"Tamaño int: "<<sizeof(int)<< " bytes."<<endl;
    cout<<"Tamaño bool: "<<sizeof(bool)<< " bytes."<<endl;
    cout<<"Tamaño float: "<<sizeof(float)<< " bytes."<<endl;
    cout<<"Tamaño double: "<<sizeof(double)<< " bytes."<<endl;
    cout<<"Tamaño char: "<<sizeof(char)<< " bytes."<<endl;

    cout<<"Tamaño Enano: "<<sizeof(Enano)<< " bytes."<<endl;

    cout<<endl<<"--- Memoria Estatica en C/C++: ---"<<endl<<endl;
    cout<<"Direción de int: "<<&i<<endl;
    cout<<"Direción de bool: "<<&b<<endl;
    cout<<"Direción de float: "<<&f<<endl;
    cout<<"Direción de double: "<<&d<<endl;
    cout<<"Direción de char: "<<static_cast<void*>(&c)<<endl;
    cout<<"Direción de Enano: "<<&e<<endl;
    
    cout<<endl<<"--- Memoria Dinamica en C/C++: ---"<<endl<<endl;
    cout<<"Direccion Dinamica: "<<malloc(2)<<endl;
    cout<<"Direccion Dinamica int: "<<malloc(sizeof(int))<<endl;

    //Casteo de Punteros en C
    Enano* direccion = (Enano*)malloc(sizeof(Enano));
    direccion->Inicializar();

    //Punteros en C++
    Enano* instancia = new Enano();

    //Operador ->
    instancia->Comer();
    instancia->Hablar();

    //Polimorfimso
    Personaje* p = new Duende();
    Personaje* q = new Enano();

    p->Hablar();
    q->Hablar();

    cout<<endl<<"Direccion de P"<<p<<endl;
    //cout<<endl<<"Direccion de P"<<p<<endl;

    //Arreglos
    Duende duendes[10];
    cout<<endl;
    cout<<&duendes[0]<<endl;
    cout<<&duendes[1]<<endl;
    cout<<&duendes[2]<<endl;
    cout<<&duendes[3]<<endl;
    cout<<&duendes[4]<<endl;

    //Conversión a dirección
    cout<<endl;
    cout<<&duendes[0]+0<<endl;
    cout<<&duendes[0]+1<<endl;
    cout<<&duendes[0]+2<<endl;
    cout<<&duendes[0]+3<<endl;
    cout<<&duendes[0]+4<<endl;

    //Conversión a dirección
    cout<<endl;
    cout<<duendes+0<<endl;
    cout<<duendes+1<<endl;
    cout<<duendes+2<<endl;
    cout<<duendes+3<<endl;
    cout<<duendes+4<<endl;
    
    return 0;
}
