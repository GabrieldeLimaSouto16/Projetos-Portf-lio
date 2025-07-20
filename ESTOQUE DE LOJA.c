#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

            printf("..........ESTOQUE DA LOJA..........");

printf("\n\n");

 char nome_Produto[3][50];
 char codigo_Categoria[3][11] = {"Roupas", "Sapatos", "Cosmeticos"};
 int codigo;
 int quantidade_Produto[3];
 int media;

        printf("Insira o código para a categoria (Com números de 0 a 2): ");
            scanf(" %d", &codigo);

printf("\n");

        while(codigo < 0 || codigo > 2){
            printf("ERRO. Insira a categoria do código (Com números de 0 a 2): ");
                scanf(" %d", &codigo);
            system("cls");
        }

        printf("Categoria: %s\n", codigo_Categoria[codigo]);

        printf("Insira o nome do produto: ");
            scanf(" %s", nome_Produto[0]);
        printf("Insira a quantidade deste produto: ");
            scanf(" %d", &quantidade_Produto[0]);

printf("\n");

        printf("Insira o nome do produto: ");
            scanf(" %s", nome_Produto[1]);
        printf("Insira a quantidade deste produto: ");
            scanf(" %d", &quantidade_Produto[1]);

printf("\n");

        printf("Insira o nome do produto: ");
            scanf(" %s", nome_Produto[2]);
        printf("Insira a quantidade deste produto: ");
            scanf(" %d", &quantidade_Produto[2]);

printf("\n");

        printf("Produtos selecionados: %s, %s, %s\n", nome_Produto[0], nome_Produto[1], nome_Produto[2]);
        printf("Quantidade respectiva dos produtos: %d, %d, %d\n", quantidade_Produto[0], quantidade_Produto[1], quantidade_Produto[2]);

        media = (quantidade_Produto[0] + quantidade_Produto[1] + quantidade_Produto[2]) / 3;

        printf("Média da quantidade dos produtos: %d\n", media);

 int maior = quantidade_Produto[0];
 int menor = quantidade_Produto[0];

        for(int i = 1; i < 3; i++){
            if(quantidade_Produto[i] > maior){
                maior = quantidade_Produto[i];
                printf("Maior quantidade de produtos: %d", maior);
                printf("\n");
            }
        }

        for(int i = 1; i < 3; i++){
            if(quantidade_Produto[i] < menor){
                menor = quantidade_Produto[i];
                printf("Menor quantidade de produtos: %d", menor);
                printf("\n");
            }
        }

return 0;
}
