#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){write(1,&c,1);}

int ft_fibonacci(int index){

if(index <= 1)
    return index;
return ft_fibonacci(index -1) + ft_fibonacci(index -2);

}


int main()
{
    
    ft_fibonacci(4);

    return 0;
}

