#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <windows.h>

struct Fila{
    int info;
    struct Fila *prox;
};
typedef struct Fila fila;

void init(fila **inicio){
        *inicio = NULL;
}

void push(fila **inicio, int info){
    fila *nova = (fila*) malloc(sizeof(fila)), *aux, *ant;
    nova->info = info;
    nova->prox = NULL;
    if(!*inicio)
        *inicio = nova;
    else
    {
        ant = *inicio; aux = (*inicio)->prox;
        while(aux)
        {
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = nova;
    }
}

void pop(fila **inicio){
    fila *aux = *inicio;
    aux = aux->prox; 
    *inicio = aux;
}

int top(fila *inicio){

    return inicio->info;
    
    
}

int isEmpety(fila *inicio){
	return inicio == NULL;
}



void exibe(fila *inicio){
    system("cls");
    if(inicio == NULL){
    	printf("FILA: vazia");
	}
	else{
		printf("FILA: ");
	    while(inicio != NULL){
	        printf("%d ", inicio->info);
	        inicio=inicio->prox;
	    }
	}
	printf("\n");
}