#include <stdio.h>

void inserir(){
}

void excluir(){
}

void consult_jogador(){
}

void consult_time(){
}

void mudar_equipe_jog(){   
}

int main(){
    
    int opcao;

	printf("Bem vindo(a) ao Futebolistas, escolha uma opção: \n");
	printf("------------------------------------------------");
	while(opcao != 6){ //repete as opções de escolha até a hora que o usuário deseje encerrar o programa
	    
    	printf("\n1-Inserir time\n2-Excluir time\n3-Consultar Jogadores\n4-Consultar Time\n5-Mudar Jogadores entre os times\n6-Salvar e encerrar");
    	scanf("%d", &opcao);
    
    	switch(opcao){
    		
    		case 1://Inserir Time    			
    			inserir();    			
    			break;
    
    		case 2://Excluir time  
            	excluir();
                break;
    
    		case 3://Consultar Jogadores
                consult_jogador();
    		 	break;

            case 4://Consultar Time    			
    			consult_time();    			
    			break;
    
    		case 5://Mudar Jogadores entre os times  
            	mudar_equipe_jog();
                break;
    
    		case 6://Salvar e encerrar
                printf("Salvando os arquivos....Encerrado");
    		 	break;

    		default:
    			printf("\nOpção inválida, escolha novamente:\n");
    	}
	}
    return 0;
}
