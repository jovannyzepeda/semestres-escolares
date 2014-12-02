#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,acumulador;
    acumulador=0;
    i=1;
    for(;i<4;){
        acumulador+=i;
        i++;
    }
    printf("i=%d\n",i);
    printf("acumulador=%d\n",acumulador);
    return 0;
}
