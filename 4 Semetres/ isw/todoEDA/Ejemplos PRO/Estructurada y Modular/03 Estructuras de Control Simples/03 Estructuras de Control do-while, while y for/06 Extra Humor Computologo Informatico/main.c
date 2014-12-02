#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*humor de computólogo-informático:
      ¿cómo le preguntas a una chica de ingenieria
      si quiere ser tu novia?*/
    char respuesta;
    respuesta='S'; //ser optimista =)
    do{
        printf("Quieres ser mi novia? (S/N)");
        scanf("%c",&respuesta);
        printf("\n");
        (respuesta=='s')?respuesta='S':12;
        getchar();
    }while(respuesta!='S'); /*insistir cuantas veces
                              sea necesario, mientras
                              ella deje la ventana abierta =)*/
    printf("Ya tengo novia!\n");
    return 0;
}
