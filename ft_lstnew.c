#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list)); // aloca o espaço necessario de cada node
	if (!new)
		return (NULL);
	new->content = content;// joga o node na lista
	new->next = NULL;// bota o null depois para informar que é o fim da lista
	return (new);
}

/*
void printlist(t_list *head)
{
	t_list *temp = head;

	while (temp != NULL)
	{
		printf("%d - ", temp->content);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	t_list *temp;
	t_list *head = NULL;

	for (void *x = 20; x > 0; x--)
	{
		temp = ft_lstnew(x); // cria um novo node
		temp->next = head; // linka o novo node a lista atual
		head = temp; // joga o ultimo node criado no head da lista
	}
	printlist(head);
}
*/
