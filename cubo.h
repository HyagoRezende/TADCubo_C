//Arquivo vis�vel ao usu�rio
//Contendo os cabe�alhos das fun��es
//Vari�veis globais / estruturas

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//Definindo a struct
typedef struct cubo Cubo;

//Fun��o para criar o cubo passando como par�metro os v�rtices
Cubo *cria_cubo(float x);

//Fun��o para "destruir" o cubo, liberar a mem�ria alocada
void destroi_cubo(Cubo *c);

//Fun��o para acessar o cubo
float acessa_cubo(Cubo *c);

//Fun��o para descobrir o comprimento da aresta
void atribui_aresta(Cubo *c, float x);

//Fun��o para retornar o per�metro das arestas
float retorna_perimetro(Cubo *c);

//Fun��o para retornar a �rea de uma face do cubo
float retorna_area(Cubo *c);

//Fun��o para retornar a �rea total das faces do cubo
float retorna_area_cubo(Cubo *c);

//Fun��o para retornar o volume do cubo
float volume_cubo(Cubo *c);

//Fun��o para retornar o comprimento das diagonais
float diagonais_cubo(Cubo *c);
