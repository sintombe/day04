#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
int ft_iterative_power(int nb, int power){

	int answer=1;
	if (power ==0)
		return 1;
	if(power>0)
		while (power >0)
		{
            for(int i=0;i<=power ;i++)
            {
                nb=nb * nb;
                power--;
            }
			ft_putchar(nb);
			 }
			 

}
int main()
{
ft_iterative_power(2,5);
}

