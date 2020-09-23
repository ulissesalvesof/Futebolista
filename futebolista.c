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
void  inserir () {
}

void  excluir () {
}

void  consult_jogador () {
}

void  consult_time () {
}

void  mudar_equipe_jog () {   
}

int  main () {
    
    int opcao;

	printf ( " Bem vindo (a) ao Futebolistas, escolha uma opção: \ n " );
	printf ( " ----------------------------------------------- - " );
	while (opcao! = 6 ) { // repete como opções de escolha até a hora que o usuário deseje encerrar o programa
	    
    	printf ( " \ n 1-Inserir tempo \ n 2-Excluir tempo \ n 3-Consultar jogadores \ n 4-Consultar tempo \ n 5-Mudar jogadores entre os tempos \ n 6-Salvar e encerrar " );
    	scanf ( " % d " , & opcao);
    
    	switch (opcao) {
    		
    		caso  1 : // Inserir Hora    			
    			inserir ();    			
    			pausa ;
    
    		caso  2 : // Excluir hora  
            	excluir ();
                pausa ;
    
    		caso  3 : // Consultar Jogadores
                consult_jogador ();
    		 	pausa ;

            caso  4 : // Consultar Time    			
    			consult_time ();    			
    			pausa ;
    
    		caso  5 : // Mudar Jogadores entre os tempos  
            	mudar_equipe_jog ();
                pausa ;
    
    		caso  6 : // Salvar e encerrar
                printf ( " Salvando os arquivos .... Encerrado " );
    		 	pausa ;

    		padrão :
    			printf ( " \ n Opção inválida, escolha novamente: \ n " );
    	}
	}
    return  0 ;
}
