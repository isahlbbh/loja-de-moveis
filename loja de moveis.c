#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

     int main(){
    setlocale(LC_ALL, "Portuguese");
 
    int categoria=0, cor=0, pag=0;
    char nome[50], produto[50], email[50], telefone[15], resp;

 
     printf("\nSEJA BEM VINDO A NOSSA LOJA DE MÓVEIS \n\n");
     
     do{
     printf("-==CATÁLOGO==-\n\n");
     
     printf("1 - Sofas\n");
     printf("2 - Tapetes\n");
     printf("3 - Lustres\n");
     printf("4 - Poltronas\n");
     printf("5 - Mesas\n\n\n");
     
     printf("Digite o número da categoria desejada: ");
     scanf("%d", &categoria);
      
     if (categoria == 1){
     printf("\n-==CORES==-\n\n");
     	printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
	printf("Digite o número da cor desejada: ");
    scanf("%d", &cor);
	if(cor == 1){
		printf("\nProduto selecionado: Sofá Preto.\n\n");
	}
	else if(cor == 2){
		printf("\nProduto selecionado: Sofá Vermelho.\n\n");
	}
	else if(cor == 3){
		printf("\nProduto selecionado: Sofá Verde.\n\n");
	}
	else if(cor == 4){
		printf("\nProduto selecionado: Sofá Roxo.\n\n");
	}
	else if(cor == 5){
		printf("\nProduto selecionado: Sofá Rosa.\n\n");

	}
		else
    {
        printf("Digite um valor válido.\n");
        system("pause");
    }
    }
	else if (categoria == 2)
    {
    	printf("\n-==CORES==-\n\n");
    	printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
    printf("Digite o número da cor desejada: ");
    scanf("%d", &cor); 
    if(cor == 1){
		printf("\nProduto selecionado: Tapete Preto.\n\n");
	}
	else if(cor == 2){
		printf("\nProduto selecionado: Tapete Vermelho.\n\n");
	}
	else if(cor == 3){
		printf("\nProduto selecionado: Tapete Verde.\n\n");
	}
	else if(cor == 4){
		printf("\nProduto selecionado: Tapete Roxo.\n\n");
	}
	else if(cor == 5){
		printf("\nProduto selecionado: Tapete Rosa.\n\n");
        
    }
    	else
    {
        printf("Digite um valor válido.\n");
        system("pause");
    }
}
	else if (categoria == 3)
    {
    	printf("\n-==CORES==-\n\n");
        printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
    printf("Digite o número da cor desejada: ");
    scanf("%d", &cor);
    if(cor == 1){
		printf("\nProduto selecionado: Lustre Preto.\n\n");
	}
	else if(cor == 2){
		printf("\nProduto selecionado: Lustre Vermelho.\n\n");
	}
	else if(cor == 3){
		printf("\nProduto selecionado: Lustre Verde.\n\n");
	}
	else if(cor == 4){
		printf("\nProduto selecionado: Lustre Roxo.\n\n");
	}
	else if(cor == 5){
		printf("\nProduto selecionado: Lustre Rosa.\n\n");
        
    }
    	else
    {
        printf("Digite um valor válido.\n");
        system("pause");
    }
}
	else if (categoria == 4)
    {
    	printf("\n-==CORES==-\n\n");
        printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
    printf("Digite o número da cor desejada: ");
    scanf("%d", &cor);
    if(cor == 1){
		printf("\nProduto selecionado: Poltrona Preta.\n\n");
	}
	else if(cor == 2){
		printf("\nProduto selecionado: Poltrona Vermelha.\n\n");
	}
	else if(cor == 3){
		printf("\nProduto selecionado: Poltrona Verde.\n\n");
	}
	else if(cor == 4){
		printf("\nProduto selecionado: Poltrona Roxa.\n\n");
	}
	else if(cor == 5){
		printf("\nProduto selecionado: Poltrona Rosa.\n\n");
        
    }
    	else
    {
        printf("Digite um valor válido.\n");
        system("pause");
    }
    
    }
	else if (categoria == 5)
    {
    	printf("\n-==CORES==-\n\n");
        printf("1 - Preto\n");
     	printf("2 - Vermelho\n");
     	printf("3 - Verde\n");
     	printf("4 - Roxo\n");
     	printf("5 - Rosa\n\n\n");
    printf("Digite o numero da cor desejada: ");
    scanf("%d", &cor);
    if(cor == 1){
		printf("\nProduto selecionado: Mesa Preta.\n\n");
	}
	else if(cor == 2){
		printf("\nProduto selecionado: Mesa Vermelha.\n\n");
	}
	else if(cor == 3){
		printf("\nProduto selecionado: Mesa Verde.\n\nn");
	}
	else if(cor == 4){
		printf("\nProduto selecionado: Mesa Roxa.\n\n");
	}
	else if(cor == 5){
		printf("\nProduto selecionado: Mesa Rosa.\n\n");    
    }
    }
	else
    {
        printf("Digite um valor válido.\n");
        system("pause");
    }
    printf("Digite [1] se deseja adicionar mais algum item no carrinho, e [2] caso queira finalizar a compra.\n");
    scanf("%d", &resp);
}while (resp==1);
    
     
    printf("-== Dados de Pagamento ==-\n\n");
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    fflush(stdin);
    printf("Digite seu telefone: ");
    fgets(telefone, 15, stdin);
    fflush(stdin);
    printf("Digite seu e-mail: ");
    scanf("%s", &email);
    fflush(stdin);
    
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
    printf("\n===========================\n\n");
    
    printf("OBRIGADO POR COMPRAR CONOSCO, TODAS AS INFORMAÇÕES SOBRE ENTREGA DO PRODUTO E PAGAMENTO SERÁ ENVIADA POR EMAIL.\n\n");


    return 0;
    
}