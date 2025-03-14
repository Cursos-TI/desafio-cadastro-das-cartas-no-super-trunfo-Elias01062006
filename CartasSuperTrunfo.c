#include <stdio.h>
#include <string.h>

//Estrutura para amazenar os dados de uma carta
typedef struct{
    char codigo[8];
    char cidade[100];
    char estados[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    } carta;

    // função para limpar de entrada
    void limparbuffer(){
    int c;
    while ((c = getchar()) != '\n'&& c!=EOF);
    }