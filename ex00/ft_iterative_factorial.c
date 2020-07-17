/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:26:40 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/12 13:56:43 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
   	write(1, &c, 1);
   }
int ft_iterative_factorial(int nb){
int factorial=1;
while(nb>0)
{
      factorial=factorial * nb;
	  nb --;


}
return factorial;
    
if (nb <= 0)
{
	return 0;
}
}



