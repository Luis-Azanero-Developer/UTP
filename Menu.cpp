#include <iostream>
#include <cstdlib>
#include "Ejercicio01.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"
using namespace std;

int main()
{
    int opcion;
    bool repetir = true, rpta = false;
    
    do {

        do{
            printf("\n\n\t\t\tMenu de Opciones\n");
            printf("\t\t\t----------------\n");
            printf("\t1. Ejercicio01 \n");
            printf("\t2. Ejercicio02 \n");
            printf("\t3. Ejercicio03 \n");
            printf("\t0. Salir \n\n");

            printf("\tIngrese una opcion: ");
            scanf("%d", &opcion);
            
            if(opcion<0 || opcion>3)
                printf("\n\tMsg: Ingrese una opcion valida!");
            else
                rpta=true;            

        }while(rpta==false);

        switch (opcion) {
            case 1:
                Ejercicio01 objE1;
                objE1.solucionEjercicio01();
                break;
            case 2:
                Ejercicio02 objE2;
                objE2.solucionEjercicio02();
                break;
            case 3:
                Ejercicio03 objE3;
                objE3.solucionEjercicio03();            
                break;
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}