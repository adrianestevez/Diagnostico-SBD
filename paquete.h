#ifndef PAQUETE_H
#define PAQUETE_H
#include <iostream>
#include <iomanip>

using namespace std;

class Paquete
{

private:
    string id;
    string origen;
    string destino;
    float peso;

public:
    Paquete();
    string getId() const;
    void setId(const string &value);
    string getOrigen() const;
    void setOrigen(const string &value);
    string getDestino() const;
    void setDestino(const string &value);
    float getPeso() const;
    void setPeso(float value);

    //Sobrecarga del Operador
    friend istream &operator >> (istream &in, Paquete &paq){
        string var;
        float peso;

        cout<<"Ingrese id: ";
        cin.ignore();
        getline(cin,var); cout<<endl;
        paq.setId(var);

        cout<<"Origen: ";
        getline(cin,var);cout<<endl;
        paq.setOrigen(var);

        cout<<"Destino: ";
        cin.ignore();
        getline(cin,var); cout<<endl;
        paq.setDestino(var);

        cout<<"Peso: ";
        cin>>peso; cout<<endl;
        paq.setPeso(peso);
        cin.ignore();

        return in;
    }

    friend ostream &operator <<(ostream &out, Paquete paq){
        cout<<setw(10)<<paq.id;
        cout<<setw(10)<<paq.origen;
        cout<<setw(10)<<paq.destino;
        cout<<setw(10)<<paq.peso<<endl;

        return out;
    }
};

#endif // PAQUETE_H
