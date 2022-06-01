#include "lists.h"

/**
 * check_cycle - function checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow;
	listint_t *fast;

	slow = list;
	fast = list;
	while (list && slow && slow->next)
	{
		list = list->next;
		slow = slow->next->next;

		if (list == slow)
		{
			list = fast;
			fast =  slow;
			while (1)
			{
				slow = fast;
				while (slow->next != list && slow->next != fast)
				{
					slow = slow->next;
				}
				if (slow->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}
	
	return (0);
}
