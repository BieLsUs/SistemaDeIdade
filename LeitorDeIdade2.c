#include <stdio.h>

int main() {
//	Sistema que confere idade do úsuario se é maior ou menor de idade;
//	Sistema simples, sem tratamento de exceção!;

	int idade;
	
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	if(idade < 18) {
		printf("Menor de idade! Não poderar acessar.");
	}else {
		printf("Maior de idade! Poderar acessar");
	}
}