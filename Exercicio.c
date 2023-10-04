#include<stdio.h>
#include<stdlib.h>


//putchar() essa função recebe um valor inteiro e retorna um caractere
//getchar() é o inverso do putchar(),já que recebe um caractere e retorna um int
int main(){
   /*signed long int num = -32;

  
  /*  printf("\n %i \n",num);*/
    //putchar 
    char c ;
    int x=119,y = 120;
    //scanf("%c %d",&c,&x);
    //printf("\n %c\n %d",c,x);
   /*/ c=putchar(x);
    printf("\n");
    //printf(" VALOR LIDO:\t%c\n",c);
    printf("CODIGO DA TABELA ASCII:\t%c",c);*/

    int *ponteiro;
    ponteiro=&x;//neste instante eu determinei que o meu ponteiro está apontando pro " endereço da memoria x.Ex:8479475""
    *ponteiro=y;//acessei a variavel <x> que estou apontando e mudei o valor isso por causa do simbolo'*'
    printf("%d" ,x);
    printf("\t%d",y);


return 0;
}