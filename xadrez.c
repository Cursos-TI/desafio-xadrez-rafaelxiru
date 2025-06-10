

#include <stdio.h>

int main() {
int Torre,Bispo,Rainha,Cavalo,direcaoTorre,direcaoBispo;
    // movimentação da torre com interação do usuário usando for, 
    //no trabalho foi pedido 5 casas a direita.
printf("Digite o numero de casas para movimentar a torre:  ");
scanf("%d",&Torre);
    //escolhe a direção que a peça vai tomar no tabuleiro 
printf("Escolha a direção: digite 1 cima, 2 baixo, 3 esquerda, 4 direita:  ");
scanf("%d",&direcaoTorre);
    //switch para indentificar a direção
 switch(direcaoTorre){

 case 1:
    for (int i = 1; i <= Torre; i++) {
        printf("Movimentando torre %d casas para cima\n", i);
    }
   break;

 case 2:
    for (int i= 1 ; i <= Torre; i++){
        printf("movimentando torre %d casas para baixo \n", i);
    }
   break;
 case 3:
    for (int i= 1 ; i <= Torre; i++){
        printf("movimentando torre %d casas para esquerda \n", i);
    }
   break;
 case 4:
    for (int i= 1 ; i <= Torre; i++){
        printf("movimentando torre %d casas para direita \n", i);
    }
   break;
    default:
        printf(" direção invalida\n");
   break; 

   
    } 
 printf("\n");

    // movimentação do bispo com interação usando do-while ,
    // no trabalho foi pedido 5 casas na diagonal esquerda.
 printf("Digite o numero de casas para movimentar o bispo:  ");
 scanf("%d",&Bispo);
    //escolha da direção que o bispo tomara no tabuleiro 
 printf("Escolha a direção: digite 1 cima direita, 2 cima esquerda, 3 baixo direita , 4 baixo esquerda:  ");
 scanf("%d",&direcaoBispo);

    //switch
switch(direcaoBispo){

case 1: 
 {int k = 1;
    do {
        printf("Movimentando bispo %d casa na diagonal superior direita  \n", k);
        k++;
    } while (k <=Bispo);
   break;
 }
    
case 2: 
 {int k = 1;
    do {
        printf("Movimentando bispo %d casa na diagonal superior esquerda \n", k);
        k++;
    } while (k <= Bispo);
   break; 
 } 
    
case 3: 
 {int k = 1;
    do {
        printf("Movimentando bipo %d casa na diagonal inferior direita\n", k);
        k++;     
    } while (k <= Bispo);
   break;
 }

case 4:
 {int k = 1;
    do {
        printf("Movimentando bipo %d na diagonal inferior esquerda \n", k);
        k++;
    } while (k <= Bispo);
   break;
 }
    default:
        printf(" direção invalida\n");
   break; 
        
    }
    printf("\n");

     // Rainha usando while, no trabalho foram pedidos oito casas a esquerda.
 printf("Digite o numero de casas que a rainha deve se movimentar:  ");
 scanf("%d",&Rainha);
    int j = 1;
    while (j <= Rainha) {
        printf("Rainha se movimentando para as casas %d a esquerda\n", j);
        j ++;
    }
 printf("\n");

    // Cavalo usando while O cavalo se move em L, vamos simular pulando casas.
    
 printf("Movimentação do Cavalo:\n");
    int L = 1;
    while (L <= 5) {
        printf("Cavalo na casa %d\n", L);
        L+=2; // O cavalo se move em L, vamos simular pulando casas.
    }
    printf("\n");


    return 0;
}