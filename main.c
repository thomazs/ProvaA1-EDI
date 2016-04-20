#include <stdio.h>
#include <stdlib.h>



//Questão Discursiva 01
void discursiva01(){
    int vetor[20][20], i, j, maior, menor, qpares=0;
    for(i=0;i<20;i++)
      for(j=0;j<20;j++)
        scanf("%d", &vetor[i][j]);

    maior = vetor[0][0];
    menor = vetor[0][0];
    for(i=0;i<20;i++)
      for(j=0;j<20;j++){
        if (vetor[i][j] > maior)
          maior = vetor[i][j];
        if (vetor[i][j] < menor)
          menor = vetor[i][j];
        if (vetor[i][j] % 2 == 0)
          qpares++;
      }
    printf("Maior: %d  Menor: %d   Q.Pares: %d", maior, menor, qpares);
}


//Questão Discursiva 02

int menores(int v[11][11], int elemento){
  int i, j, q=0;
  for(i=0; i<11; i++)
    for(j=0; j<11; j++)
      if (v[i][j] < elemento) q++;
  return q;
}

void discursiva02(){
    int vetor[11][11], i, j, m;
    for(i=0; i<11; i++)
      for(j=0; j<11; j++){
        m = menores(vetor, vetor[i][j]);
        if (m == (121/2) )
          printf("A mediana é %d", m );
      }
}


//Questão Discursiva03

typedef struct PNo{
  int info;
  struct PNo *prox;
}No;


int ordenado(No *lista){
  No *aux=lista;
  if (aux == NULL) return 1;
  while(aux!=NULL){
    if (aux->prox != NULL && aux->info > aux->prox->info)
      return 0;
    aux = aux->prox;
  }
  return 1;
}

void discursiva03(){
    No *lista;
    if (ordenado(lista))
      printf("Está ordenado");
    else
      printf("Não está ordenado!");
}


int main()
{
    printf("Hello world!\n");
    return 0;
}
