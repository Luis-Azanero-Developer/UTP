#include <stdio.h>
using namespace std;
class Ejercicio01{
    public:
        void solucionEjercicio01(){
            int nelementos, xvalor;
            bool valida; 
            printf("\n\n\t\t\tPrograma: Ejercicio01 \n");
            printf("\t\t\t--------------------- \n\n");

            do{
                valida = true;
                printf("\tIngrese el numero de elementos para el arreglo : ");
                scanf("%d",&nelementos);
                
                if (nelementos<=0){
                    printf("\n\tEl numero de elementos ingresado es menor a Cero \n");					
                    valida = false;
                }
                        
            } while (valida==false);
            
            // inicializando la lista de acuerdo a los numeros de elementos ingresado	
            int listaN[nelementos];
            
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