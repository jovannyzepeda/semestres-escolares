#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int enteroCortoNegativo=0x8000;  //notacion hexadecimal
    short otroEnteroCortoNegativo=0xF000;  //complemento a 2
    int enteroNegativo=0x80000000;
    float flotante=-0.1e-2f;
    double doblePrecision=1e-35;
    printf("enteroCortoNegativo=%d\n",enteroCortoNegativo);
    printf("otroEnteroCortoNegativo=%d\n",otroEnteroCortoNegativo);
    printf("enteroNegativo=%d\n",enteroNegativo);
    printf("flotante=%f\n",flotante);
    printf("doblePrecision=%0.40f\n",doblePrecision);
    return 0;
}
