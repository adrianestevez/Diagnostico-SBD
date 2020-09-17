#include <iostream>
#include "paqueteria.h"
#include "paquete.h"

using namespace std;

int main()
{
    int op;
    string s;
    Paqueteria paq;

    do{
        system("cls");

        cout<<"1. Agregar Paquete "<<endl;
        cout<<"2. Eliminar Paquete" <<endl;
        cout<<"3. Mostrar"<<endl;
        cout<<"4. Guardar"<<endl;
        cout<<"5. Recuperar"<<endl;
        cout <<"0. Salir "<<endl;
        cout <<"Elige tu opcion: "; cin>>op; cout<<endl<<endl;


        if(op==1){
            Paquete p;
            cin>>p;
            paq.Insertar_Inicio(p);
            system("pause");
        }

        else if (op==2) {
            paq.Eliminar_Inicio();
            system("pause");
            cout<<"Elemento del inicio eliminado"<<endl;
        }

        else if (op==3) {
            paq.mostrar();
            system("pause");
        }

        else if (op==4) {
            paq.Guardar();
            system("pause");
            cout<<"Información Guardada"<<endl;
        }

        else if (op==5) {
            paq.Recuperar();
            system("pause");
            cout<<"Información Recuperada"<<endl;
        }

    }while(op!=0);
}

