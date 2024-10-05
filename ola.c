#include <stdio.h>
#include <stdlib.h>
void main () {
    int x = 0; // crindo uma variavel inteira
    printf("valor de x : %d\n",x);
    x++ ; // incrementando x em 1 unidade
    printf("valor de x: %d\n",x);
    float y = 12.345678; // crindo uma variavel real
    printf ("valor de y : %f\n,y");
    //imprimindo o valor de y com 2 casas
    printf("valor de y: %.2f\n",y);
    //1 caractere deve estar entre apostrofo
    char sexo = "m"; // variavel que aceita 1 caractere
    printf("sexo: %c\n",sexo);
    //criando uma variavel string (texto)
    char nome [30] = "joao";
    printf("nome; %s\n",nome);
    //imprimindo a primeira letra do mome
    printf ("primeira letra : %c\n", nome[0]);
    printf (" ola mundo!");
}