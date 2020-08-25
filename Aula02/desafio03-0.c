#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct pet{
	float peso;
	int idade;
};

#ifndef bool
#define bool int
#define false ((bool)0)
#define true ((bool)1)
#endif

int main(void) {
	
	int  tamanhoArray = 3,contaPets = 0;
  float somatorioPeso = 0, somatorioIdade,mediaPeso,mediaIdade;

	bool userQuerContinuar = true;
	char querContinuar[255];
	struct pet *arrayPets, *p;
	
	arrayPets = malloc(tamanhoArray*sizeof(struct pet));
	p = arrayPets;
	
	while(userQuerContinuar && contaPets<tamanhoArray){
		struct pet novoPet;
		contaPets++;
		printf("\n Digite a idade do pet: \t");
		scanf("%d",&novoPet.idade);
		printf("\n Digite o peso  do pet: \t");
		scanf("%f",&novoPet.peso);
		*p = novoPet;
		p++;
			

        printf("\n Quer continuar? S/N \t");
        scanf("%s", querContinuar);
        //strcmp(string1,string2) -> Comparação de strings se iguais retorna 0
        if (strcmp(querContinuar, "N") == 0)
        {
            userQuerContinuar = false;
        }
      
	}
  if(contaPets == tamanhoArray){
    printf("\n \nTamanho limite atingido \n");
  }
	p = arrayPets;
   for (int i = 0; i < contaPets; i++, p++){
        somatorioIdade += p->idade;
        somatorioPeso += p->peso;
    }

    mediaIdade = somatorioIdade/contaPets;
    mediaPeso = somatorioPeso/contaPets;
    
    //Exibe a média de idade.
    printf("\n Media de idade dos pets: %.2f", mediaIdade);
    //Exibe a média de peso
    printf("\n Media de peso dos pets: %.2f", mediaPeso);
	return 0;
}
