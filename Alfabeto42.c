#include<unistd.h>

void ft_print_alfabeto(){
   short c;
   c=96;
   while (++c<123)
   {
    write(1,&c,1);
   }
}

void ft_print_alfabeto1(){
    short c;
    c='`';
    while (++c<='z')
    {
        write(1,&c,1);
    }
    
}

int  main(){
    ft_print_alfabeto();
    write(1,"\n",1);

    ft_print_alfabeto1();    
    write(1,"\n",1);

return 0;    
}