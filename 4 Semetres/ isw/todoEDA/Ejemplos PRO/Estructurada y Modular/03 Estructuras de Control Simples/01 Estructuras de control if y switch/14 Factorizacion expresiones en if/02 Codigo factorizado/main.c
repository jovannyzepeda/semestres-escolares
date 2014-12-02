#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;
    printf("Dame el dia: ");
    scanf("%d",&dia);
    printf("Dame el mes: ");
    scanf("%d",&mes);
    if (dia>=1 && dia<=31){
        if (mes==1){
            printf("Es un dia valido de Enero\n");
        }
        else if (mes==2 && dia<=28){
            printf("Es un dia valido de Febrero\n");
        }
        else{
            printf("Es un mes diferente de Enero y Febrero o el dia no es valido\n");
        }
    }
    else{
        printf("No es un dia valido\n");
    }
    return 0;
}
