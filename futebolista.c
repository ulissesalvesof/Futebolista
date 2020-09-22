#include <stdio.h>
typedef struct jogador{
    int id;
    char nome[20];
    char equipe[20];
    int camisa;
    char pe[20];
    char posição[20];
    float salário;
    int idade;
    int gols;
}Jogador;

typedef struct equipe{
	int id;
	char nome[50],tecnico[50],estadio[50],regiao[50];
	Jogador player;
}Equipe;
