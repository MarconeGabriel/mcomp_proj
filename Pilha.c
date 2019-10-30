#include "Pilha.h"
#include <stdlib.h>
#include <stdio.h>


Pilha* cria () {
  Pilha* p = ( Pilha*) malloc ( sizeof ( Pilha ) );
  p -> topo = NULL;
  return p;
}

int pilha_vazia ( Pilha* p ) {
  return (p -> topo == NULL );
}

void push( Pilha* p , float v ) {
  Lista* no = ( Lista*) malloc ( sizeof ( Lista ) );
  no -> info = v;
  no -> prox = p -> topo;
  p -> topo = no;
}

void pop( Pilha * p ) {
  if( pilha_vazia ( p ) ) {
    printf("\npilha vazia!");
    return ;
  }
  Lista* aux = p -> topo;
  p -> topo = p -> topo -> prox;
  free( aux );
}

void imprime( Pilha* p ) {
  if (( p == NULL ) || (p -> topo == NULL ) ) {
  printf("pilha vazia!\n");
  return ;
  }
  for( Lista* l = p -> topo; l != NULL ; l = l -> prox ){
    printf("%.2f\n", l -> info );
  }
}

void libera( Pilha** p ) {
  Lista* l = (* p ) -> topo;
  while( l != NULL ) {
    Lista* aux = l -> prox;
    free( l ) ;
    l = aux ;
  }
  free(* p );
  * p = NULL;
}

int itens_pilha( Pilha* p ) {
  int i = 0;
  if (( p == NULL ) || (p -> topo == NULL ) ) {
    return 0;
  }
  for( Lista* l = p -> topo; l != NULL ; l = l -> prox ){
    i++;
  }
  return i;
}
