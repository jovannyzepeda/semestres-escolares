#ifndef OPERACIONES_DE_GRAFOS_H_INCLUDED
#define OPERACIONES_DE_GRAFOS_H_INCLUDED

#include <stdlib.h>
#include "Tipos_y_Constantes.h"

typedef struct{
    Arco* elementos;
    int numVertices;
}Grafo;

void inicializa(Grafo* g,int numVertices);
void libera(Grafo* g);
void insertaArco(TipoElemento x,Vertice v, Vertice w,Grafo* g);
void suprimeArco(Vertice v, Vertice w,Grafo* g);
TipoElemento etiquetaArco(Vertice v,Vertice w,Grafo* g);

void inicializa(Grafo* g,int numVertices){
    int i,j,valor;
    g->elementos=(Arco*)malloc(valor=numVertices*numVertices*sizeof(Arco));
    g->numVertices=numVertices;
    for(i=0;i<numVertices;i++){
        for(j=0;j<numVertices;j++){
            g->elementos[i*numVertices+j]=ARCO_NULO;
        }
    }
}

void insertaArco(Arco x,Vertice v, Vertice w,Grafo* g){
    g->elementos[v*g->numVertices+w]=x;
}

void suprimeArco(Vertice v, Vertice w,Grafo* g){
    g->elementos[v*g->numVertices+w]=ARCO_NULO;
}

TipoElemento etiquetaArco(Vertice v,Vertice w,Grafo* g){
    return g->elementos[v*g->numVertices+w];
}

void libera(Grafo* g){
    free(g->elementos);
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
