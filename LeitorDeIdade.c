#include <stdio.h>

int main() {
//	conferindo idade por meio do ano de nascimento;
//  Sitesma simples, sem tratamento de exceção;
	int idade, anoDeNascimento, anoAtual;
	
	anoAtual = 2025;

	printf("Insira a data do seu nascimento: \n");
	scanf("%d", &anoDeNascimento);
	
	if(anoDeNascimento == 0) {
		printf("Ano invalido, insira um ano válido");
	} else {
		idade = anoAtual - anoDeNascimento;
		
		printf("%d", idade);
	}
}