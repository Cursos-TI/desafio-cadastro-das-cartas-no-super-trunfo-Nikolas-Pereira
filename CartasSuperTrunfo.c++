#include <stdio.h>

int main() {
    int codigo_da_cidade, populacao, pib, pontos_turisticos;
    char nome[20];  

    printf("Digite o codigo da cidade: \n");
    scanf("%d", &codigo_da_cidade);  

    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome);  

    printf("Informe a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("Informe o PIB: \n");
    scanf("%d", &pib);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibindo as informações
    printf("Nome da cidade: %s \n", nome);
    printf("Codigo da cidade: %d \n", codigo_da_cidade);  
    printf("Quantidade da populacao: %d \n", populacao);
    printf("PIB: %d \n", pib);
    printf("Quantidade de pontos turisticos: %d \n", pontos_turisticos); 

    return 0;

}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
