#include "paqueteria.h"

Paqueteria::Paqueteria()
{

}

void Paqueteria::Insertar_Inicio(const Paquete &p)
{
    paquetes.push_front(p);
}

void Paqueteria::Eliminar_Inicio()
{
    paquetes.pop_front();
}

void Paqueteria::mostrar()
{
    cout<<setw(10)<<"Id";
    cout<<setw(10)<<"Origen";
    cout<<setw(10)<<"Destino";
    cout<<setw(10)<<"Peso"<<endl;
    for(auto it = paquetes.begin();it!=paquetes.end();it++){
        Paquete &p = *it;
        cout<<p;
    }
}

void Paqueteria::Guardar()
{
    fstream archivo("C:/Users/52332/Documents/build-Actividad_3_SBD-Desktop_Qt_5_14_0_MinGW_64_bit-Debug/Paquetes.txt",ios::out);

    if(archivo.is_open()){
        for (auto it=paquetes.begin(); it!=paquetes.end();it++) {
            Paquete &p = *it;
            archivo<<p.getId()<<endl;
            archivo<<p.getOrigen()<<endl;
            archivo<<p.getDestino()<<endl;
            archivo<<p.getPeso()<<endl;
        }
    }
}

void Paqueteria::Recuperar()
{
    fstream archivo("C:/Users/52332/Documents/build-Actividad_3_SBD-Desktop_Qt_5_14_0_MinGW_64_bit-Debug/Paquetes.txt",ios::in);

    if(archivo.is_open()){
        while (!archivo.eof()) {
            Paquete p;
            string var;

            getline(archivo,var);
            if(archivo.eof()){
                break;
            }
            p.setId(var);

            getline(archivo,var);
            p.setOrigen(var);

            getline(archivo,var);
            p.setDestino(var);

            getline(archivo,var);
            float peso = stof(var);
            p.setPeso(peso);

            Insertar_Inicio(p);
        }
    }
}
