 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }
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

