#include <stdlib.h>
#include <stdio.h>

#define MIN_CALIFICACION 60

int main()
{
    int calificacionAprobatoria;//bandera
    float calFinal;
    do{
        printf("Dame tu calificacion final: ");
        scanf("%f",&calFinal);
        calificacionAprobatoria=calFinal>=MIN_CALIFICACION;
        if (!calificacionAprobatoria){
            printf("Lee mas libros!\n");
        }
    }while(!calificacionAprobatoria);
    printf("Felicidades, aprobaste! =)\n");
    return 0;
}
