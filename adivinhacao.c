#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	printf("                 |>>>                    |>>>\n");
	printf("                 |                        |\n");
	printf("             _  _|_  _                _  _|_  _\n");
	printf("            |;|_|;|_|;|              |;|_|;|_|;|\n");
	printf("            \\\\.    .  /              \\\\.    .  /\n");
	printf("             \\\\:  .  /                \\\\:  .  /\n");
	printf("              ||:   |                  ||:   |\n");
	printf("              ||:.  |                  ||:.  |\n");
	printf("              ||:  .|                  ||:  .|\n");
	printf("              ||:   |                  ||:   |\n");
	printf("              ||: , |                  ||: , |\n");
	printf("              ||:   |         Bem vindo ao       \n");
	printf("              ||: . |     jogo de adivinhação!   \n");
	printf("           __ ||_   | __\n");
	printf("  ____----~    ~----~    ~----____\n");

	printf("\n");


	int segundos = time(0);
	srand(segundos);
	int numeroGrande = rand();
	int numbSecret = numeroGrande % 100 ;
	int chute;
	int ganhou = 0;
	int tentativas = 1;
	double pontos = 1000;

	int acertou = 0;

	int nivel;
	printf("Qual o nivel de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);
	int numeroDeTentativas;
	switch (nivel){
	case 1:
		numeroDeTentativas = 20;
		break;
	case 2:
		numeroDeTentativas = 15;
		break;
	default:
		numeroDeTentativas = 6;
		break;
	}

	for (int i = 1; i <= numeroDeTentativas; ++i){

		printf("Tentativa %d \n", tentativas );

		printf("Qual é o seu chute? \n");
		
		scanf("%d", &chute);
		printf("Seu chute é %d \n", chute);
		if (chute < 0){
			printf("Você não pode chutar números negativos\n");
			continue;
		}

		acertou = (chute == numbSecret);
		int maior = chute > numbSecret;

		if (acertou){
			break;
		} else if (maior){
    		printf("Seu chute foi maior que o numero secreto\n");	/* code */
		} else{
			printf("Seu chute foi menor que o numero secreto\n");
		}
		tentativas++;

		double pontosPerdidos = abs(chute - numbSecret) / 2.0;
		pontos = pontos - pontosPerdidos;
	}

	printf("Fim de jogo!\n");

	if (acertou)
	{
		printf("               ___________\n");
		printf("              '._==_==_=_.'\n");
		printf("              .-\\:      /-.\n");
		printf("             | (|:.     |) |\n");
		printf("              '-|:.     |-'\n");
		printf("                \\::.    /\n");
		printf("                 '::. .'\n");
		printf("                   ) (\n");
		printf("                 _.' '._\n");
		printf("                `\"\"\"\"\"\"\"`\n\n");
		printf("Você ganhou\n");
		printf("Você acertou em %d tentativas\n",tentativas-1);
		printf("Total de pontos: %.1f \n",pontos );
	} else{
		printf("Você perdeu! Tente de novo!\n");
		printf("              (╥﹏╥)\n");
		printf("               /|\\\n");
		printf("               / \\\n\n");
		
	}

	return 0;
}