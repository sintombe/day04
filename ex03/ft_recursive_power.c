/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:15:20 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/13 15:22:46 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c){write(1,&c,1);}

int ft_recursive_power(int nb, int power){
  if (power==0){
	return 1;}	
  else{
	return nb* ft_recursive_power(nb, power-1);
  }	
};


