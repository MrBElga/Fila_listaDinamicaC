#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <windows.h>
#include "tad.h"

char menu(){
	system("cls");
	printf("[A] - PUSH\n");
	printf("[B] - POP\n");
	printf("[C] - ELEMENTO INICIO\n");
	printf("[D] - EXIBE\n");
	
	printf("[ESC] - OPCAO:");

	return toupper(getche());

}


int main(){
	int aux;
	char op;
	fila *f;
	
	init(&f);
	do{
		op = menu();
		system("cls");
		switch (op){
			case 'A':
				scanf("%d", &aux);
				Enqueue(&f,aux);
			break;
			case 'B':
				scanf("%d", &aux);
				Dequeue(&f,&aux);
			break;
			case 'C':
			if(f!=NULL)
				printf("%d",top(f));
				getch();
			break;
			case 'D':
				exibe(f);				
				getch();
			break;
		}
	}while(op!=27);
	return 0;
}