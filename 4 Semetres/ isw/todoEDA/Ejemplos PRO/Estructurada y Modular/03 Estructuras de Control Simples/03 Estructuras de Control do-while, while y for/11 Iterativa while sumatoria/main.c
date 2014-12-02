#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,acumulador;
    acumulador=0;
    i=1;
    while(i<4){
        acumulador+=i;
        i++;
    }
    printf("i=%d\n",i);
    printf("acumulador=%d",acumulador);
    return 0;
}
