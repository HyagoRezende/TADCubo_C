 #include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "cubo.h"

//TAD Cubo
struct cubo{
    float x;
};

//Implementa��o fun��o cria cubo
Cubo *cria_cubo(float x){
    Cubo *c = (Cubo *) malloc(sizeof(Cubo));
    if(c != NULL){
        c -> x = x;
    }
    return(c);
}

//Implementa��o fun��o destroi cubo
void destroi_cubo(Cubo *c){
    if(c != NULL){
        free(c);
    }
}

//Implementa��o fun��o acessar o cubo
float acessa_cubo(Cubo *c){
    return(c -> x);
}

//Implementa��o fun��o Comprimento de aresta
void atribui_aresta(Cubo *c, float x){
    if(c != NULL){
        c -> x = x;
    }
}

//Implementa��o fun��o retornar per�metro
float retorna_perimetro(Cubo *c){
    if(c != NULL){
        return(12* c -> x);
    }
}

//Implementa��o fun��o retornar a �rea face
float retorna_area(Cubo *c){
    if(c != NULL){
        return(pow(c -> x, 2));
    }
}

//Implementa��o fun��o retornar a �rea
float retorna_area_cubo(Cubo *c){
    if(c != NULL){
        return(6* pow(c -> x, 2));
    }
}

//Implementa��o fun��o retornar volume do cubo
float volume_cubo(Cubo *c){
    if(c != NULL){
        return (pow (c -> x, 3));
    }
}

//Implementa��o fun��o retornar o comprimento das diagonais
float diagonais_cubo(Cubo *c){
    if(c != NULL){
        return (c -> x * sqrt(3));
    }
}

int main(){
//Declarando as vari�veis
    float aresta;
    Cubo *cuboTeste;

    printf("Digite o Valor da aresta do cubo: ");
    scanf("%f", &aresta);
//cria o cubo
    cuboTeste = cria_cubo(aresta);
//Mostrar a aresta
    printf("Aresta = %.2f\n",acessa_cubo(cuboTeste));
//Mostrar o per�metro
    printf("Perimetro = %.2f\n",retorna_perimetro(cuboTeste));
//Mostrar a diagonal
    printf("Diagonal = %.2f\n",diagonais_cubo(cuboTeste));
//Mostrar a area
    printf("Area = %.2f\n",retorna_area_cubo(cuboTeste));
//Mostrar o volume
    printf("Volume = %.2f\n",volume_cubo(cuboTeste));
//Liberar o espa�o alocado do cubo
    destroi_cubo(cuboTeste);

    return (0);
}

