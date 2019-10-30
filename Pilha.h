typedef struct lista {
  float info;
  struct lista* prox;
} Lista ;
typedef struct pilha {
  Lista* topo;
} Pilha;

Pilha* cria();
int pilha_vazia( Pilha* p );
void push( Pilha* p, float v );
void pop( Pilha* p );
void imprime( Pilha* p );
void libera( Pilha** p );
int itens_pilha( Pilha* p );



