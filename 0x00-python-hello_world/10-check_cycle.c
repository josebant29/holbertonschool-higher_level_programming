/*
 * ===================================================
 *
 *       Filename:  10-check_cycle.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  04/27/2020 07:57:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SAMUEL GOMEZ J (samgj18), samgomjim.18@gmail.com
 *   Organization:  Holberton
 *
 * ===================================================
 */
#include "lists.h"
/**
 * check_cycle - Function in C that checks if
 * a singly linked list has a cycle in it
 * @list: Pointer to the listint_t struct
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (list == NULL || list->next == NULL)
		return (0);
	slow = list;
	fast = list;
	while (fast != NULL && slow != NULL && fast->next != NULL)
	{
		slow  = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}

