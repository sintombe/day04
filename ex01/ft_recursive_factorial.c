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

int main()
{
int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, ft_recursive_factorial(n));
    return 0;
    //ft_recursive_factorial(5);
}


