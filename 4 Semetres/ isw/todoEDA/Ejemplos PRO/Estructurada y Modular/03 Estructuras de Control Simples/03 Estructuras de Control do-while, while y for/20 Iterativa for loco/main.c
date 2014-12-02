#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,acumulador;
    for(acumulador=0,i=1;i<4;acumulador+=i,i++);
    printf("i=%d\n",i);
    printf("acumulador=%d\n",acumulador);
    return 0;
}
