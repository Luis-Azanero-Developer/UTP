/*
Realizar la traza del siguiente programa, indicando los valores que toman
las variables i, j, a(i), a(j), a(j +1), b y sum, en la ejecución.

*/
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/*El propósito de las clases en C++ es facilitar al programador una herramienta que le permita definir
 un nuevo tipo que se pueda usar como un tipo predefinido*/

class Ejercicio02{

    /*Cuando se declara público ( public) un miembro de una clase, usted permite el acceso a tal miembro desde dentro y
 fuera de la clase. Creamos esto con la finalidad de llamarlo desde el Menuú.*/

    public:

    /*Creamos una función con tipo de retorno nulo (void) para que un fragmento de código que se
 puede llamar desde cualquier punto de un programa.*/

        void solucionEjercicio02(){
             /*Declaramos las variables de acuerdo a los valores solicitados
             */
            int a[1000], suma=1, b=0, vi, vj; 

 /*Mostramos el menu en el programa*/


            printf("\n\n\t\t\tPrograma: Ejercicio02 \n");
            printf("\t\t\t--------------------- \n\n");

            printf("\t\tIngresar valor para (i) : ");
            scanf("%d", &vi); /*Almacenamos el valor para i*/
            printf("\t\tIngresar valor para (j) : ");
            scanf("%d", &vj); /*Almacenamos el valor para j*/

            printf("\n\t\t------------------------------------------------------- \n");
            printf("\t\t|   i    |    j   |  a(i)  |  a(j)  | a(j+1) |  suma  | \n");
            printf("\t\t------------------------------------------------------- \n");
            /*Inicializamos el bucle for que es una estructura de control */
            for(int i=1; i<=vi;i++){
            for (int j=1; j<=vj; j++)
            {
                /*Inicializamos los valores de la matriz*/
                a[i] = j;
                a[j] = i;
                a[j+1] = i+j;
                suma=suma+a[i] + a[j] + b;/*Sumanos lo valores*/

                    printf("\t\t|   %d    |   %d    |   %d    |   %d    |    %d   |   %d    | \n", i,j,a[i],a[j],a[j+1],suma);
                    printf("\t\t------------------------------------------------------- \n");
            }
            }

            printf("\n");

        }
};