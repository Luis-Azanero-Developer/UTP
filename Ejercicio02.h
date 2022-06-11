#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Ejercicio02{
    public:
        void solucionEjercicio02(){
            
            int a[1000], suma=1, b=0, vi, vj; 

            printf("\n\n\t\t\tPrograma: Ejercicio02 \n");
            printf("\t\t\t--------------------- \n\n");

            printf("\t\tIngresar valor para (i) : ");
            scanf("%d", &vi);
            printf("\t\tIngresar valor para (j) : ");
            scanf("%d", &vj);

            printf("\n\t\t------------------------------------------------------- \n");
            printf("\t\t|   i    |    j   |  a(i)  |  a(j)  | a(j+1) |  suma  | \n");
            printf("\t\t------------------------------------------------------- \n");

            for(int i=1; i<=vi;i++){
            for (int j=1; j<=vj; j++)
            {
                a[i] = j;
                a[j] = i;
                a[j+1] = i+j;
                suma=suma+a[i] + a[j] + b;

                    printf("\t\t|   %d    |   %d    |   %d    |   %d    |    %d   |   %d    | \n", i,j,a[i],a[j],a[j+1],suma);
                    printf("\t\t------------------------------------------------------- \n");
            }
            }

            printf("\n");
            //exit(-1);
            //return 0;

        }
};