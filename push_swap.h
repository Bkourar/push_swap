/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bikourar <bikourar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:37:44 by bikourar          #+#    #+#             */
/*   Updated: 2024/03/04 23:05:16 by bikourar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	int				index;
	int				pos;
	struct s_node	*next;
}	t_node;
t_node	*create_stack(int **arg_intger, int size);
t_node	*ft_lstlast(t_node *lst);
void	free_dynamic(char **argement, int count);
void	free_stack(t_node **stack);
char	*ft_strdup(char const *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *str, int number_of_word);
char	*f_strjoin(char *str1, char *str2, int line_b);
int		search_pos(t_node **stock1, int size, int look_index);
int		check_stack_sort(t_node **stack_is_sort);
int		ft_strcmp(const char *s1, const char *s2);
int		*convert(char **schedule, int size);
int		count_word(const char *word);
int		ft_lstsize(t_node *lst);
int		ft_isdigit(char *str, int count);
size_t	ft_strlen(const char *theString);
long	ft_atoi(const char *string);

//**---------algorithm---------**//
void	sort_for_tow(t_node **a);
void	sort_for_three(t_node **a);
void	sort_for_four(t_node **a, t_node **b, int size, int middle_position);
void	sort_big_stack(t_node **sa, t_node **sb);
//**-----------rules-----------**//
void	config_postion(t_node **list);
void	ss(t_node **a, t_node **b, int fd);
void	rr(t_node **a, t_node **b, int fd);
void	rrr(t_node **a, t_node **b, int fd);
//----------for stack b-------//
void	pb(t_node **lsta, t_node **lstb, int fd);
void	sb(t_node **lst, int fd);
void	rb(t_node **lst, int fd);
void	rrb(t_node **lst, int fd);
//----------for stack a-------//
void	pa(t_node **lsta, t_node **lstb, int fd);
void	sa(t_node **lst, int fd);
void	ra(t_node **lst, int fd);
void	rra(t_node **lst, int fd);

#endif
