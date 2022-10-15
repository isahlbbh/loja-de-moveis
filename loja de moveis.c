#include <stdio.h>
#include <stdlib.h>

     int main(){
 
    int categoria, telefone;
    char nome[50], produto[50];
 
     printf("SEJA BEM VINDO A NOSSA LOJA DE MOVEIS \n\n");
     
     printf("---CATALOGO---\n\n");
     
     printf("1 - Sofas\n");
     printf("2 - Tapetes\n");
     printf("3 - Lustres\n");
     printf("4 - Poltronas\n");
     printf("5 - Mesas\n\n\n");
     
     printf("Digite o numero da categoria desejada: ");
     scanf("%d", &categoria);
      
     if (categoria == 1){
     	printf("-Preto\n");
     	printf("-Vermelho\n");
     	printf("-Verde\n");
     	printf("-Roxo\n");
     	printf("-Rosa\n");
     	
     }else if (categoria == 2)
    {
        printf("- Tapete Preto\n\n");
        printf("- Tapete Vermelho\n\n");
        printf("- Tapete Verde\n\n");
        printf("- Tapete Roxo\n\n");
        printf("- Tapete Rosa\n\n");
        
        }else if (categoria == 3)
    {
        printf("- Lustres Preto\n\n");
        printf("- Lustres Vermelho\n\n");
        printf("- Lustres Verde\n\n");
        printf("- Lustres Roxo\n\n");
        printf("- Lustres Rosa\n\n");
    }else if (categoria == 4)
    {
        printf("- Mesas Preto\n\n");
        printf("- Mesas Vermelho\n\n");
        printf("- Mesas Verde\n\n");
        printf("- Mesas Roxo\n\n");
        printf("- Mesas Rosa\n\n");
    }else if (categoria == 5)
    {
        printf("- Poltronas Preto\n\n");
        printf("- Poltronas Vermelho\n\n");
        printf("- Poltronas Verde\n\n");
        printf("- Poltronas Roxo\n\n");
        printf("- Poltronas Rosa\n\n");
    }else
    {
        printf("Digite um valor valido!");
    }
     
    printf("== Dados de Pagamento ==\n\n");
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite seu telefone: \n");
    scanf("%d", &telefone);
    printf("Digite o produto desejado: \n");
    scanf("%s", &produto);
    
    
    printf("===========================\n");
    printf("nome: %s", nome);
    printf("telefone: %d", telefone);
    printf("Produto: %s", produto);
    printf("===========================\n\n");
    
    printf("OBRIGADO POR COMPRAR CONOSCO\n\n");
    
    
    
    




    return 0;
}
      
    

