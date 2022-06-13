/*
Desarrollar un aplicativo que permita, dado un array V de (n) elementos
positivos, que pueda tener algunos de ellos repetidos, reemplazar cada
elemento repetido por (-1) e indique la cantidad de modificaciones hechas.
Tener en cuenta los filtros necesarios para que no se produzcan errores.
Ejemplo:
V = (6, 7, 6, 7, 0); quedando tras la lectura como (6, 7, -1, -1, 0); número de
modificaciones realizadas en el proceso c = 2

*/
#include <stdio.h>
using namespace std;
class Ejercicio03{
    public:
        void solucionEjercicio03(){
            
            printf("\n\n\t\t\tPrograma: Ejercicio03 \n");
            printf("\t\t\t--------------------- \n\n");
            int elemento, count;
            bool rpta=false;
            do{
                printf("\tCuantos elementos desea ingresar:");
                scanf("%d", &count);
                if (count>0)
                    rpta=true;
                else
                    printf("Debe ingresar un valor mayor a 0");
            } while (rpta==false);
            
            rpta=false;
            int iVectorIn[count], iVectorOut[count];
            
            for(int i=0; i<count;i++){
                do{
                    rpta=false;
                    printf("\tIngrese el valor del elemento #%d: ", i+1);
                    scanf("%d", &elemento);
                    if(elemento>=0)
                        rpta=true;
                    else
                        printf("\tIngrese un valor mayor o igual a 0 \n");
                } while (rpta==false);

                for(int j=0; j<i;j++){
                    if(elemento==iVectorIn[j]){
                        iVectorOut[i] = -1;
                        break;
                    }else
                        iVectorOut[i] = elemento;
                }
                if(i==0)
                    iVectorOut[i] = elemento;
                iVectorIn[i] = elemento;
            }

            printf("\n\tResultados : \n\n");

            for(int i=0; i<count; i++){
                printf("\tElemento => %d => %d \n", iVectorIn[i], iVectorOut[i]);
            }

            printf("\n");

        }
};