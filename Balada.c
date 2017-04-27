#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	char sexo, permissao;
	printf("Qual o seu sexo?");
	scanf("%c",&sexo);
	fflush(stdin);
	printf("Quantos anos voce tem?");
	scanf("%i",&idade);
	fflush(stdin);
	if((sexo=='M')&&(idade>25)&&(idade<50)){
		printf("Pode entrar");
	}
    else if((sexo=='M')&&(idade>18)&&(idade<25)){
		printf("Tem permissao dos pais?");
		scanf("%c",&permissao);
		if (permissao=='s'){
			printf("Pode entrar");
		}
		else{
			printf("Acesso negado");
		}
	}
	if ((sexo=='F')&&(idade>=25)&&(idade<=50)){
		printf("Pode entrar");
	}
	else if((sexo=='F')&&(idade>18)&&(idade<25)){
		printf("Tem permissao dos pais?");
		scanf("%c",&permissao);
		if (permissao=='s'){
			printf("Pode entrar");
		}
		else{
			printf("Acesso negado");
		}
	}
	getch();
	return 0;
}
