#include <stdio.h>
#include<stdlib.h>
#include<math.h>

const int x= 11;//criamos um 'const' global ou seja uma constante que no caso apartir do momento que declaramos e atribuímos o seu valor já não pode ser alterado


int main(void){
printf("x=%i\t",x);//escrevemos na tela a constante coma função printf()e na saida=11 -varaivel global declarada acima

int x=7;
printf("x=%d\t",x);//saida=7 variavel local
{
int x=5;
printf("x=%d\t",x);//saida=5 variavel local declarada num escopo local dentro de outro local ou seja dentro de 2 escopos locais
{

}
printf("x=%i",x);/*nesse ultimo printf(),qual será a saída ,o que acha tu?fica a seu criterio executar e ver o resultado
                 e se ainda ouver duvida deixe uma mensagem aí na caixa de questões*/
            
//Agora vamos tocar no aspecto da biblioteca math.h,que é a biblioteca que contem as funções matemáticas(+-/*%,raiz quadrada etc..) muito requeridas hj em dia,principalmente em exames 


}
}

