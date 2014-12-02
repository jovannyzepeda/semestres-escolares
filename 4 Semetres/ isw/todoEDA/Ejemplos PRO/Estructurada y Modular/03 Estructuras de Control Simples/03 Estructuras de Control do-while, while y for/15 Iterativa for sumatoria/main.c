#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,acumulador;
    acumulador=0;
    for(i=1;i<4;i++){
        acumulador+=i;
    }
    printf("i=%d\n",i);
    printf("acumulador=%d\n",acumulador);
    return 0;
}
