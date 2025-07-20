#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int senha, senha1;
        char pergunta[4];
        char diretorio[35] = "@gmail.com.br";
        char email[20];

        printf("Digite um email para cadastro: ");
            scanf(" %s", email);

system("cls");

        while(strlen(email) >= 21){
            printf("Digite um email com 20 caracteres ou menos: ");
                scanf(" %s", email);
            system("cls");
        }

        strcat(email, diretorio);

        printf("Email de cadastro: %s\n", email);

printf("\n");

        printf("Digite uma senha para cadastro (Senha de 4 dígitos): ");
            scanf(" %d", &senha1);

system("cls");

        while(senha1 >= 10000 || senha1 < 1000){
            printf("ERRO. Digite um senha com 4 dígitos (Algarismos excedidos não serão aceitos pelo sistema): ");
                scanf(" %d", &senha1);
            system("cls");
        }

        printf("Email de cadastro: %s\n", email);
        printf("Senha de cadastro: %d", senha1);

printf("\n\n");

        printf("Deseja efetuar login? (Digite Sim ou Nao): ");
            scanf(" %s", pergunta);

system("cls");

        while(strcasecmp(pergunta, "sim") != 0 && strcasecmp(pergunta, "nao") != 0){
            printf("Tente novamente. Digite Sim ou Não: ");
                scanf(" %s", pergunta);
            system("cls");
        }

    if(strcasecmp(pergunta, "sim") == 0){
        printf("Digite a sua senha: ");
            scanf(" %d", &senha);

system("cls");

        while(senha != senha1){
            printf("Senha incorreta, tente novamente: ");
                scanf(" %d", &senha);
            system("cls");
        }

        printf("\033[0;32mACESSO CONCEBIDO.\033[0m\n");

    } else if(strcasecmp(pergunta, "nao") == 0){

        printf("Ok, feche o programa e tente o login caso seja necessário.");

    }

return 0;
}
