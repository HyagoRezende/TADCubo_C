//Arquivo visível ao usuário
//Contendo os cabeçalhos das funções
//Variáveis globais / estruturas

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Definindo a struct
typedef struct cubo Cubo;

//Função para criar o cubo passando como parâmetro os vértices
Cubo *cria_cubo(float x);

//Função para "destruir" o cubo, liberar a memória alocada
void destroi_cubo(Cubo *c);

//Função para acessar o cubo
float acessa_cubo(Cubo *c);

//Função para descobrir o comprimento da aresta
void atribui_aresta(Cubo *c, float x);

//Função para retornar o perímetro das arestas
float retorna_perimetro(Cubo *c);

//Função para retornar a área de uma face do cubo
float retorna_area(Cubo *c);

//Função para retornar a área total das faces do cubo
float retorna_area_cubo(Cubo *c);

//Função para retornar o volume do cubo
float volume_cubo(Cubo *c);

//Função para retornar o comprimento das diagonais
float diagonais_cubo(Cubo *c);
