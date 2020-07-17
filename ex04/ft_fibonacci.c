 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sintombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 08:30:14 by sintombe          #+#    #+#             */
/*   Updated: 2020/07/17 08:37:14 by sintombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){write(1,&c,1);}

int ft_fibonacci(int index){

if(index <= 1)
    return index;
return ft_fibonacci(index -1) + ft_fibonacci(index -2);

}



