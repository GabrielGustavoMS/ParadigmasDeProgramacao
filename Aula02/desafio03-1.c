#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef bool
    #define bool int
    #define false ((bool)0)
    #define true  ((bool)1)
#endif

typedef struct pet {
  int idade;
  float peso;
} t_pets;

typedef struct node {
  struct pet pet;
  struct node *prox;
} arrayPets;

arrayPets *head = NULL;
arrayPets *tail = NULL;

arrayPets * criarLista(struct pet animal){
  arrayPets * p = (arrayPets*) malloc(sizeof(arrayPets));

  p->pet = animal;
  p->prox = NULL;
  
  head = tail = p;

  return p;
}

arrayPets * addPet(struct pet animal){

  if(head == NULL){
    return criarLista(animal);
  }

  arrayPets * p = (arrayPets*) malloc(sizeof(arrayPets));

  p->pet = animal;
  p->prox = NULL;

  tail->prox = p;
  tail = p;

  return p;
}

int main(void) {

  int somatorioIdade = 0, contaPet = 0;
  float somatorioPeso = 0.0,  mediaIdade=0,mediaPeso=0;
  bool userQuerContinuar = true;
  char querContinuar[255];

 while(userQuerContinuar){
		struct pet novoPet;
		contaPet++;
		printf("\n Digite a idade do pet: \t");
		scanf("%d",&novoPet.idade);
		printf("\n Digite o peso  do pet: \t");
		scanf("%f",&novoPet.peso);
		
        addPet(novoPet);
			

        printf("\n Quer continuar? S/N \t");
        scanf("%s", querContinuar);
        //strcmp(string1,string2) -> Comparação de strings se iguais retorna 0
        if (strcmp(querContinuar, "N") == 0)
        {
            userQuerContinuar = false;
        }
      
	}

  arrayPets *aux = head;
  
	while(aux != NULL){
		somatorioIdade += aux->pet.idade;
        somatorioPeso += aux->pet.peso;
		aux = aux->prox;
	}

    mediaIdade = somatorioIdade / contaPet;
    mediaPeso = somatorioPeso / contaPet;

    printf("\nMedia de idade dos pets: %.2f ", mediaIdade);
    printf("\nMedia de peso dos pets: %.2f ", mediaPeso);
}
