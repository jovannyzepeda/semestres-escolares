#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int posicion,calificacion;
    printf("Dame la posicion (0 a %d) donde almacenar la calificacion: ",TOTAL_PRACTICAS-1);
    scanf("%d",&posicion);
    printf("Dame la calificacion a almacenar: ");
    scanf("%d",&calificacion);
    practicas[posicion]=calificacion;
    printf("practicas en posicion %d = %d\n",posicion,practicas[posicion]);
    return 0;
}
