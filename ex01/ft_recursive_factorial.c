/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:11:41 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/12 13:44:17 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb){
if ((nb==0 )||(nb==1))
	return 0;
else
	return nb*ft_recursive_factorial(nb-1);



}