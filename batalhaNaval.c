#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Função para imprimir o Tabuleiro
void imprimirTabuleiro(int tabuleiro[10][10]){
    char linha1[10]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    for(int i = 1; i <= 10; i++){
        printf("%2d ", i); // Imprime número das colunas
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%c ", linha1[i]); // Imprime letra das linhas

        for(int j = 0; j < 10; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar um navio
int posicionarNavio(int tabuleiro[10][10], int linha, int coluna, int tamanho, int orientacao){
    
    for(int i = 0; i < tamanho; i++){
        int linhaAtual = linha;
        int colunaAtual = coluna;

        if(orientacao == 1){
            linhaAtual += i; // Faz atribuição com soma na linha
        }
        else {
            colunaAtual += i;
        }
        tabuleiro[linhaAtual][colunaAtual] = 3; // 1- navio
    }
}

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0(vazio)

    // Exibindo o Tabuleiro
    printf("\n *** TABULEIRO BATALHA NAVAL *** \n\n");
    printf("  ");

    // Posicionando um navio de tamanho 3 horizontalmente na linha 2, coluna 2
    if(posicionarNavio(tabuleiro, 2, 2, 3, 0))

    // Posicionando um navio de tamanho 3 verticalmente na linha 5, coluna 1
    if(posicionarNavio(tabuleiro, 5, 1, 3, 1))

    imprimirTabuleiro(tabuleiro);

    printf("\n");
    
    return 0;
}
