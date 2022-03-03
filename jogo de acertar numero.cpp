#include <stdio.h>
#include <stdlib.h>

//Jogo onde o primeiro jogador digita um numero e o outro precisa acertar, temos a variavel "num",
//"chute" que e numero digitado pelo segundo jogador
//e "tent" que é o numero de tentativas de acerto
int main()
{
	int num,chute,tent;
	printf("\nInforme um numero: ");
	scanf("%d",&num);
	system("cls");
	setbuf(stdin,NULL);
		
	tent=0;
		do
		{
		printf("\n\nChute um numero ate acertar: ");
		scanf("%d",&chute);
		setbuf(stdin,NULL);
		tent=tent+1;
			if(chute>num)
			printf("Chutou Alto!");
			else
				if(chute<num)
				printf("Chutou Baixo!");
		}
		while(chute!=num);
			if(chute==num)
			printf("\n\nVoce acertou, o numero informado foi: %d",num);
			printf("\nNumero de tentativas: %d",tent);
			
	printf("\n\n");
return 0;
}
