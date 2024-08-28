#include "minishel.h"


t_list	*dlst_newnode(char *str , category type)
{
	t_list	*node;

	if(str == NULL)
        return (NULL);
    node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->str = str;
    node->type = type;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}


void	dlstadd_back(t_list **list, t_list *node)
{
	t_list	*tmp;
	t_list	*lastnode;

	if (list == NULL)
		return ;
	tmp = *list;
	if (!tmp)
		*list = node;
	else
	{
		lastnode = dlst_lastnode(list);
		lastnode->next = node;
		node->prev = lastnode;
	}
}

void	dlstadd_front(t_list **list, t_list *node)
{
	t_list	*tmp;

	if (list == NULL)
		return ;
	tmp = *list;
	*list = node;
	if (tmp != NULL)
	{
		tmp->prev = node;
        node->next = tmp;
	}
}

void	dlst_clear(t_list **list)
{
	t_list	*tmp;
	t_list	*node;

	if (list == NULL)
		return ;
	node = *list;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*list = NULL;
}

t_list	*dlst_lastnode(t_list **list)
{
	t_list	*tmp;

	if (list == NULL)
		return (NULL);
	tmp = *list;
	if (!tmp)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

int	dlst_size(t_list **list)
{
	t_list	*tmp;
	int		i;

	if (list == NULL)
		return (0);
	tmp = *list;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}