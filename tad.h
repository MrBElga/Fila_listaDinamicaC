struct Fila{
    int info;
    struct Fila *prox;
};
typedef struct Fila fila;

void init(fila **inicio){
        *inicio = NULL;
}

char QisEmpety(fila *inicio){
	return inicio == NULL;
}

void Enqueue(fila **inicio, int info){
    fila *nova = (fila*) malloc(sizeof(fila)), *aux = *inicio;
    nova->info = info;
    nova->prox = NULL;
    if(!QisEmpety(*inicio)){
       while(aux->prox !=NULL)
        {
            aux = aux -> prox;
        }
        aux->prox = nova;
    }
    else
    {
    	 *inicio = nova;
        
    }
}

void Dequeue(fila **inicio, int *info ){
    fila *aux = *inicio;
    if(!QisEmpety(*inicio)){      
		*info = (*inicio)->info;
		*inicio = (*inicio)->prox;
		free(aux);	
	}
	else{
		*info = -1;
	}
}
 
int top(fila *inicio){
    return inicio->info;    
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
