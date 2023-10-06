#include<stdio.h>
#include<stdlib.h>
int main(){

    int i=122;//tipo inteiro recebe um valor inteiro ou seja sem parte fracionaria
    char ch;//tipo caractere recebe uma é usado para armazenar o valor inteiro de um membro do conjunto de caracteres representável,especificado na tabelA ascii 
    double d=90.5;//tipo recebe um valor real tbm chamado de 'precisão dupla'

    ch=i;
    printf("%c\t",ch);// vvalor int foi atribuido a ch tipo char no caso o 'codigo do caractere'que nesta a saída=z 

    i=d;//i inteiro c real 90.5 e por ser inteiro apenas armazenada a 'parte inteira'saida=90
    printf("%d\t",i);

    d=ch;
    printf("%f\t",d);// d real recebe o valor char ou seja o codigo do n(122)e o converte em double(real=120.000000)

    
    d=i;
    printf("%f\t",d);// d real recebe o valor int (90)e o converte em double(real=90.000000)




return 0;    
}