#include <stdio.h>
#include <stdlib.h>


void mensagem(char txt[]){
	
	puts("\n");
	puts(txt);
	puts("Aperte <enter> para continuar. \n");
	getch ();
}

void cadastro ()
{
	char cliente[50];
	int telfixo, telcel, num, uf, cep;
	char endereco[100];
	char complemento[50];
	char bairro[50];
	char cidade[50];
	
	printf("Digite apenas o primeiro nome do cliente:");
	scanf("%s", &cliente);
	
	printf("Digite o numero do telefone fixo: ");
	scanf("%i", &telfixo);
	
	printf("Digite o numero do telefone Celular: ");
	scanf("%i", &telcel);
	
	printf("Digite o Endereco: ");
	scanf("%s", &endereco);
	
	printf("Digite o Numero da casa: ");
	scanf("%i", &num);
	
	printf("Digite o complemento: ");
	scanf("%s", &complemento);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &cidade);
	
	printf("Digite o nome do bairro: ");
	scanf("%s", &bairro);
	
	printf("Digite o CEP: ");
	scanf("%i", &cep);
	
	printf("Digite o UF: ");
	scanf("%i", &uf);
	
	FILE* arquivo = fopen("clientes.txt","a");
	fprintf(arquivo, "Nome do cliente:%s\t", cliente);
	fprintf(arquivo, "CODIGO:%d\n", rand);
	fprintf(arquivo, "Telefone Fixo:%d\t", telfixo);
	fprintf(arquivo, "Telefone Celular:%d\n", telcel);
	fprintf(arquivo, "Endereco:%s\t", endereco);
	fprintf(arquivo, "Numero da casa:%d\t", num);
	fprintf(arquivo, "Complemento:%s\n", complemento);
	fprintf(arquivo, "Cidade:%s\t\t", cidade);
	fprintf(arquivo, "Bairro:%s\n", bairro);
	fprintf(arquivo, "CEP:%i\t", cep);
	fprintf(arquivo, "UF:%i\t", uf);
	
	
	fclose(arquivo);
	mensagem("cadastrado! \n ");
}

void listar()
{
	FILE* arquivo;
	char cliente;
	
	printf("\nClientes Cadastrados:\n");
	
	arquivo = fopen("clientes.txt", "r");
	while(!feof(arquivo))
	{
		fscanf(arquivo, "%c", &cliente);
		printf("%c", cliente);
	}
	 fclose(arquivo);
	 mensagem("Fim do arquivo, todos clientes listados\n");
}

void limpar()
{
	FILE* arquivo;
	arquivo = fopen("clientes.txt", "w");
	fclose(arquivo);
	
	mensagem("Numero apagado.");
}
void pedidos()
{
	FILE *arquivo;
	
	printf("Menu\n\n");
	printf("1 - Salgada - Alho e oleo\n");
	printf("2 - Salgada - Allici\n");
	printf("3 - Salgada - Atum\n");
	printf("4 - Salgada - Bacon\n");
	printf("5 - Salgada - Berinjela\n");
	printf("6 - Salgada - Caipira\n");
	printf("7 - Salgada - Calabresa\n");
	printf("8 - Salgada - Cinco queijos\n");
	printf("9 - Salgada - Escarola\n");
	printf("10 - Salgada - Executiva\n");
	printf("11 - Salgada - Peruana\n");
	printf("12 - Salgada - Palmito\n");
	printf("13 - Doce - Banana\n");
	printf("14 - Doce - Brigadeiro\n");
	printf("15 - Doce - Prestigio\n");
	
}
int main()
{
	int menu;
	{
		printf("1- Cadastrar Cliente\n");
		printf("2- Listar numeros cadastrados\n");
		printf("3- Limpar numeros cadastrados\n");
		printf("4- Sair\n");
		printf("5- Pedidos\n");
		scanf("%d", &menu);
		switch(menu)
		{
			case 1: cadastro();
			break;
			case 2: listar();
			break;
			case 3: limpar();
			break;
			case 4: limpar();
			break;
			case 5: pedidos();
			break;
		}
		{
			int tamanhos;
	
			float valor, valor1;
			valor = 0;
			int pedido;
			system("cls");
			pedidos();
			scanf("%d", &pedido);
			switch(pedido)
			{
				case 1: printf("Sabor escolhido: Alho e oleo\n\n");
						("\n\n");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 22.90 * 0.15;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 22.90 * 0.25;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 22.90 * 0.35;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 2: printf("Sabor escolhido: Allici\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 28.90 * 0.15;
							valor1 = 28.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 28.90 * 0.25;
							valor1 = 28.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 28.90 * 0.35;
							valor1 = 28.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 3: printf("Sabor escolhido: Atum\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 22.90 * 0.15;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 22.90 * 0.25;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 22.90 * 0.35;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 4: printf("Sabor escolhido: Bacon\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 26.90 * 0.15;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 26.90 * 0.25;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 26.90 * 0.35;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 5: printf("Sabor escolhido: Berinjela\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 23.90 * 0.15;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 23.90 * 0.25;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 23.90 * 0.35;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 6: printf("Sabor escolhido: Caipira\n");						
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 26.90 * 0.15;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 26.90 * 0.25;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 26.90 * 0.35;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 7: printf("Sabor escolhido: Calabresa\n");						
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 19.90 * 0.15;
							valor1 = 19.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 19.90 * 0.25;
							valor1 = 19.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 19.90 * 0.35;
							valor1 = 19.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 8: printf("Sabor escolhido: Cinco Queijos\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 29.90 * 0.15;
							valor1 = 29.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 29.90 * 0.25;
							valor1 = 29.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 29.90 * 0.35;
							valor1 = 29.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 9: printf("Sabor escolhido: Escarola\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 24.90 * 0.15;
							valor1 = 24.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 24.90 * 0.25;
							valor1 = 24.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 24.90 * 0.35;
							valor1 = 24.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 10: printf("Sabor escolhido: Executiva\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 22.90 * 0.15;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 22.90 * 0.25;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 22.90 * 0.35;
							valor1 = 22.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 11: printf("Sabor escolhido: Peruana\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 26.90 * 0.15;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 26.90 * 0.25;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 26.90 * 0.35;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 12: printf("Sabor escolhido: Palmito\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 26.90 * 0.15;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 26.90 * 0.25;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 26.90 * 0.35;
							valor1 = 26.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 13: printf("Sabor escolhido: Banana\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 21.90 * 0.15;
							valor1 = 21.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 21.90 * 0.25;
							valor1 = 21.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 21.90 * 0.35;
							valor1 = 21.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 14: printf("Sabor escolhido: Brigadeiro\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 23.90 * 0.15;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 23.90 * 0.25;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 23.90 * 0.35;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
				case 15: printf("Sabor escolhido: Prestigio\n");
						("\n\n");
						system("cls");
						printf("1- Tamanho Medio\n");
						printf("2- Tamanho Grande\n");
						printf("3- Tamanho Gigante\n");
						scanf("%d", &tamanhos);
						if(tamanhos == 1)
						{
							system("cls");
							valor = 23.90 * 0.15;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 2)
						{
							system("cls");
							valor = 23.90 * 0.25;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
						else if(tamanhos == 3)
						{
							system("cls");
							valor = 23.90 * 0.35;
							valor1 = 23.90 + valor;
							printf("Valor da pizza: %.2f\n", valor1);
						}
				break;
			}
		}
	}	
	return 0;
}

