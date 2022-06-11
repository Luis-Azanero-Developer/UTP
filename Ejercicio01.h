#include <stdio.h>
using namespace std;

/*El propósito de las clases en C++ es facilitar al programador una herramienta que le permita definir
 un nuevo tipo que se pueda usar como un tipo predefinido de C++.*/

class Ejercicio01{

/*Cuando se declara público ( public) un miembro de una clase, usted permite el acceso a tal miembro desde dentro y
 fuera de la clase. Creamos esto con la finalidad de llamarlo desde el Menuú.*/

    public:

/*Creamos una función con tipo de retorno nulo (void). Una función en C es un fragmento de código que se
 puede llamar desde cualquier punto de un programa.*/

        void solucionEjercicio01(){
            /*Declaramos las variables*/
            int nelementos, xvalor;
            bool valida; 

            /*Mostramos el menu en el programa*/

            printf("\n\n\t\t\tPrograma: Ejercicio01 \n");
            printf("\t\t\t--------------------- \n\n");
            /*Creamos un do-while Este ciclo se presenta en algunas circunstancias en las que se ha de tener
             la seguridad de que una determinada acción se ejecutara una o más veces, pero al menos una vez.*/

            do{
                valida = true;
                printf("\tIngrese el numero de elementos para el arreglo : ");
                scanf("%d",&nelementos);
                
                if (nelementos<=0){
                    printf("\n\tEl numero de elementos ingresado es menor a Cero \n");					
                    valida = false;
                }
                        
            } while (valida==false);
            
            /* inicializando la lista de acuerdo a los numeros de elementos ingresado	*/
            int listaN[nelementos];
            /*Los ciclos for son lo que se conoce como estructuras de control de flujo cíclicas o simplemente estructuras cíclicas*/
            for(int i=0;i<nelementos;i++){
                printf("\n\tIngrese el valor para el arreglo posicion %d : ", i+1);
                scanf("%d",&xvalor);
                
                int contar=0;
                // verificando si es mayor a cero
                if (xvalor>0){
                    listaN[i]=xvalor;
                    
                    for(int f=2;f<xvalor;f++){
                        if ((xvalor%f) == 0){
                            contar++;
                            break;				
                        }
                    }
                    
                    if (contar==0)		
                        printf("\tEl numero (%d) es primo y esta en la posicion [ %d ] \n ", xvalor,i+1);	
                    else 
                        printf("\tEl número (%d) no es un primo\n", xvalor);
                }
                else 
                {
                    i--;
                    printf("\tIngrese un valor mayor a Cero \n");
                }			
            }

        }
};