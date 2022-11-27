#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

     int main(){
    setlocale(LC_ALL, "Portuguese");
 
    int pag=0;
    char nome[50], email[50], telefone[15], resp, categoria[9], cor[8], cpf[11], tamanho[50], endereco[60];

 
     printf("\nSEJA BEM VINDO A NOSSA LOJA DE MÓVEIS \n\n");
     
     do{
     printf("-==CATÁLOGO==-\n\n");
     
     printf("1 - Sofas\n");
     printf("2 - Tapetes\n");
     printf("3 - Lustres\n");
     printf("4 - Poltronas\n");
     printf("5 - Mesas\n\n\n");
     
     printf("Digite o móvel da categoria desejada: ");
     scanf("%s", &categoria);
     fflush(stdin);
      
    printf("\n\n-==CORES==-\n\n");
     	printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
	printf("Digite a cor desejada: ");
	scanf("%s", &cor);
	fflush(stdin);
	
	printf("\n\n-==PROPORÇÕES==-\n\n");
	printf("Siga o exemplo: comprimento x largura x altura (em metros)\n\n");
	printf("Digite as proporções desejada: ");
	gets(tamanho);
	fflush(stdin);
    printf("\n\nDigite [s] se deseja recomeçar a compra, e [n] caso queira finalizar a compra.\n");
    scanf("%s", &resp);
    fflush(stdin);
}while (resp == 's');
    
    printf("-== Dados de Pagamento ==-\n\n");
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    fflush(stdin);
    printf("Digite seu telefone: ");
    fgets(telefone, 15, stdin);
    fflush(stdin);
    printf("Digite seu cpf: ");
    fflush(stdin);
    fgets(cpf, 11, stdin);
    fflush(stdin);
    printf("Digite seu e-mail: ");
    scanf("%s", &email);
    fflush(stdin);
    printf("Digite o endereço de entrega: ");
    fgets(endereco, 60, stdin);
    
    printf("\nEscolha a forma de pagamento:");
    printf("\n1 - PIX\n");
    printf("2 - Cartão de Crédito\n");
    printf("3 - Boleto Bancário\n");
    printf("\nDigite o número da forma de pagamento desejada: ");
    fflush(stdin);
    scanf("%d", &pag);
    
    if(pag == 1){
    	printf("Método de pagamento selecionado: PIX.\n");
	}
	else if(pag == 2){
		printf("Método de pagamento selecionado: Cartão de Crédito.\n");
	}
	else if(pag == 3){
		printf("Método de pagamento selecionado: Boleto Bancário.\n");
	}
	else{
		printf("\nForma de pagamento inválida.\n");
		system("pause");
	}
    
    printf("\n===========================\n\n");
    printf("Nome: %s\n", nome);
    printf("Telefone: %s", telefone);
    printf("E-mail: %s\n", email);
    printf("Cpf: %s\n", cpf);
    printf("Endereço de entrega: %s\n", endereco);
    printf("Produto selecionado: %s\n", categoria);
    printf("Cor do produto: %s\n", cor);
    printf("Proporções do produto: %s\n", tamanho);
    printf("\n===========================\n\n");
    
    printf("OBRIGADO POR COMPRAR CONOSCO, TODAS AS INFORMAÇÕES SOBRE ENTREGA DO PRODUTO E PAGAMENTO SERÁ ENVIADA POR EMAIL.\n\n");


    return 0;
    
}