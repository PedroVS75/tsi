#include <stdio.h>
#include <stdlib.h>

int numero;

int main(int argc, char *argv[]) 
{
printf("sistemas\n\n");
printf("1- Windows\n");
printf("2- Linux\n");
printf("\nEscolha a opcao desejada: \n");
scanf("%d",&numero);
switch(numero)	
{
	case 1:
		system("cls");
		printf("Iniciando o Windows...\n");
		break;
	
		case 2: 
		system("cls");
		printf("Iniciando o Linux...\n");
		break;
		default:
			printf("opcao invalida\n");
}
	
system("pause");
	
	return 0;
}
