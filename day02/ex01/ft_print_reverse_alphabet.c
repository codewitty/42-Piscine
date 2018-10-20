/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jogomes <jogomes@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 00:42:40 by jogomes           #+#    #+#             */
/*   Updated: 2016/10/10 19:42:54 by jogomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c); //include ft_putchar function while compiling

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
		ft_putchar(ltr--);
}
