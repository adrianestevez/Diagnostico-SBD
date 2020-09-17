#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include <iostream>
#include "paquete.h"
#include <list>
#include <fstream>
#include <iomanip>

using namespace std;

class Paqueteria
{
private:
    list<Paquete> paquetes;
public:
    Paqueteria();

    void Insertar_Inicio(const Paquete &p);
    void Eliminar_Inicio();
    void mostrar();
    void Guardar();
    void Recuperar();
};


#endif // PAQUETERIA_H
