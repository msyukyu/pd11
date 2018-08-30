#include "ex00/ft_list.h"
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int a);
int		ft_strcmp(char *s1, char *s2);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **begin_list);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_reverse_fun(t_list *begin_list);

int		main(int argc, char *argv[])
{
	t_list	*elem1;
	t_list	*head;
	t_list	*null;
	t_list	*last;
	t_list	*params;
	char	*data1 = "data1";
	char	*data2 = "data2";
//ex00
	elem1 = ft_create_elem(data1);
	printf("\nex00 :\n%s\n", elem1->data);
//ex01
	ft_list_push_back(&elem1, data2);
	head = elem1;
	printf("\nex01 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	null = NULL;
	ft_list_push_back(&null, data2);
	head = null;
	printf("\nex01 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex02
	ft_list_push_front(&elem1, data2);
	head = elem1;
	printf("\nex02 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex03
	printf("\nex03 :\n%d\n", ft_list_size(elem1));
//ex04
	ft_list_push_back(&elem1, "data3");
	last = ft_list_last(elem1);
	printf("\nex04 :\n%s\n", last->data);
//ex05
	params = ft_list_push_params(argc, argv);
	head = params;
	printf("\nex05 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex06
	ft_list_clear(&params);
	printf("\nex06 :\n");
	if (params == NULL)
		printf("NULL\n");
	else
		printf("test failed.\n");
//ex07
	last = ft_list_at(elem1, 0);
	if (last != NULL)
		printf("\nex07 :\n%s\n", last->data);
	else
		printf("\nex07 :\nNULL\n");
//ex08
	ft_list_reverse(&elem1);
	head = elem1;
	printf("\nex08 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex09
	printf("\nex09 :\n");
	ft_list_foreach(elem1, &ft_putstr);
	printf("\n");
//ex10
	printf("\nex10 :\n");
	ft_list_foreach_if(elem1, &ft_putstr, "data2", &ft_strcmp);
	printf("\n");
//ex11
	printf("\nex11 :\n");
	last = ft_list_find(elem1, "data1", &ft_strcmp);
	if (last != NULL)
		printf("%s\n", last->data);
	else
		printf("NULL\n");
//ex12
	printf("\nex12 :\n");
	ft_list_remove_if(&elem1, "data1", &ft_strcmp);
	head = elem1;
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex13
	params = ft_list_push_params(argc, argv);
	printf("\nex13 :\n");
	ft_list_merge(&elem1, params);
	head = elem1;
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex14
	ft_list_sort(&elem1, &ft_strcmp);
	head = elem1;
	printf("\nex14 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
//ex15
	ft_list_reverse_fun(elem1);
	head = elem1;
	printf("\nex15 :\n");
	while (head != NULL)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	return (0);
}
