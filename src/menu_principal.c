#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char menu;
	
	printf("Menu do jogo \n");
	printf("Iniciar(I) \n");
	printf("Configurações (C) \n");
	printf("Sair (S) \n");
	printf("Selecione uma opção para prosseguir: ");
	scanf("%c", &menu);

	menu = toupper(menu);
	
	if(menu == 'I' || menu == 'i'){
		printf("Olá, bem vindo aventureiro! \n");
	} else if(menu == 'C' || menu == 'c'){
		printf("Configurações \n");
	} else if(menu == 'S'|| menu == 's'){
		printf("Adeus! \n");
	} else {
		printf("Opção Inválida \n");
	}

	return 0;
}