#include <stdio.h>
#include <stdlib.h>

#define IVA 16

int main()
{
    float ingreso,iva,subtotal;
    ingreso=10000;
    iva=ingreso*IVA/100;
    subtotal=ingreso+iva;
    printf("Ingreso  = %f\n",ingreso);
    printf("IVA      = %f\n",iva);
    printf("Subtotal = %f\n",subtotal);
    return 0;
}
