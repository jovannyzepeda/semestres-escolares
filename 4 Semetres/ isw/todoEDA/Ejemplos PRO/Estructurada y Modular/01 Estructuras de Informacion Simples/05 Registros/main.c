#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO_RFC 13
#define TAMANO_NOMBRE 25

typedef struct{
    char rfc[TAMANO_RFC+1];//contemplo caracter nulo '\0'
    //char rfc[TAMANO_RFC];//que pasa si descomento esto?
    char nombre[TAMANO_NOMBRE+1];
    float salario;
}Persona;//tipo de dato estructurado

int main()
{
    Persona profe,inge;

    strcpy(profe.nombre,"Luis Alberto Munoz Gomez");
    strcpy(profe.rfc,"MUGL790912IC7");
    //strcpy(profe.nombre,"Luis Alberto Munoz\0Gomez");//que pasa si descomento esto?
    profe.salario=5000;

    inge=profe;
    inge.salario+=20000;

    printf("Imprimiendo variable registro profe:\n");
    printf("RFC=%s\n",profe.rfc);
    printf("Nombre=%s\n",profe.nombre);
    printf("Salario=%0.2f\n",profe.salario);

    printf("\nImprimiendo variable registro inge:\n");
    printf("RFC=%s\n",inge.rfc);
    printf("Nombre=%s\n",inge.nombre);
    printf("Salario=%0.2f\n",inge.salario);

    return 0;
}
