#include <unistd.h>

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
int ft_iterative_power(int nb, int power){

	int answer=1;
	if (power ==0)
		return 1;
	if(power>0)
		while (power >0)
		{
            
                nb=nb * ft_iterative_power(nb,power);
                //power--;
          
			ft_putchar(nb);
			 }
			 

}
int main()
{
ft_iterative_power(2,5);
}

