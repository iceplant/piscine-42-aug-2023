/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_board2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokamen- <rokamen-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:50:27 by rokamen-          #+#    #+#             */
/*   Updated: 2023/08/30 13:52:42 by rokamen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_char_board_info_line_length(char *char_board);

char	obstacle(char *char_board)
{
	int	i;

	i = get_char_board_info_line_length(char_board);
	return (char_board[i - 3]);
}

char	full(char *char_board)
{
	int	i;

	i = get_char_board_info_line_length(char_board);
	return (char_board[i - 2]);
}

char	get_char_board_num_rows(char *char_board)
{
	int	i;
	int	so_far;

	i = 0;
	so_far = 0;
	while (char_board[i + 3] != '\n')
	{
		so_far *= 10;
		so_far += char_board[i] - '0';
		i++;
	}
	return (so_far);
}
