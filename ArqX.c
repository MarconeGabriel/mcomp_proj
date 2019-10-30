#include<stdio.h>

	int Qtd_Period(char*nome_arquivo) {

	int n[2]; int i = 0;	

	FILE *p;

	p = fopen("arquivo.txt","r");

	if (p == NULL) {printf("Erro na criacao!\n");}

	else {

		// printf("\n O primeiro valor sera Qtd. de Afericoes e O segundo sera o Periodo");

		while (fscanf(p,"%d",n[i]) == 1) { printf("Sucesso!\n");
			
			// printf("\n n[i]: %d \n ",n[i]);
			
			i++;}

	fclose(p);

return n;}
