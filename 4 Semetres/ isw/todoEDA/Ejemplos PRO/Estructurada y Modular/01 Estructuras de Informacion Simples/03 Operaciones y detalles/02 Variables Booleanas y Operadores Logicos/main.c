#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Operadores Logicos
    int verdadero=1;
    int falso=!verdadero;
    int a=0,b=1,c=0,d,e;
    printf("verdadero=%d\n",verdadero);
    printf("falso=%d\n",falso);
    printf("verdadero Y falso=%d\n",(verdadero&&falso));
    printf("verdadero O falso=%d\n",(verdadero||falso));
    //hay mas combinaciones de verdadero y falso
    d=a&&b&&c;
    e=a||b||c;
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    return 0;
}
