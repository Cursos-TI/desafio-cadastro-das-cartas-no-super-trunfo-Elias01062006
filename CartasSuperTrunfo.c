#include <stdio.h>
#include <string.h>

//Estrutura para amazenar os dados de uma carta
typedef struct{
    char codigo[8];
    char cidade[100];
    char estado[3];
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

    //função para ler os dados de uma carta 
    void lercarta (carta*carta,int numero){
        printf("\n---Cadastro da carta %d ---\n", numero);

        printf("Digite a sigla do estado(ex: SP, RJ):");
        scanf("%2s",carta->estado);
        limparbuffer();

        printf("Digite o código da carta");
        scanf("%7s",carta->codigo);
        limparbuffer();

        printf("digite o nome da cidade");
        fgets(carta->cidade,
            sizeof(carta->cidade),stdin);
            carta -> cidade[strcspn(carta->cidade,"\n")]='\0'; // remove a quebra de linha

        printf("Digite a população:");
        scanf("%d",&carta->populacao);
        limparbuffer();

        printf("Digite a área (km):");
        scanf("%f",&carta->area);
        limparbuffer();

        printf("Digite o pib:");
        scanf("%f",&carta->pib);
        limparbuffer();

        printf("Digite a quantidades de pontos turisticos:");
        scanf("%d",&carta->pontos_turisticos);
        limparbuffer();
        }