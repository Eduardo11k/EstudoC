#include <stdio.h>
#include<stdlib.h>

const int x= 11;//criamos um 'const' ou seja uma constante que no caso apartir do momento que declaramos e atribuímos o seu valor já não pode ser alterado


int main(void){
printf("x=%i\t",x);//escrevemos na tela a constante coma função printf()e na saida=11

int x=7;
printf("x=%d\t",x);//saida=7
{
int x=5;
printf("x=%d\t",x);//saida=5

}
printf("x=%i",x);//nesse ultimo printf(),qual será a saída ,o que acha tu?fica a seu criterio executar e ver o resultado
}//e se ainda ouver duvida deixe uma mensagem aí na caixa de questões