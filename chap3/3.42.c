/**
 * File: 3.42.c
 * Description: Exercise 3.42
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

typedef int (*comp_func)(item, item);

link insertion_sort(link *head, comp_func comp) {
    if (!head || !*head)
	return NULL;
    
    link newhead = NULL, *iter, curr;

    while (*head) {
	curr = *head;
	*head = curr->next;

	for (iter = &newhead; *iter; iter = &(*iter)->next)
	    if (comp((*iter)->i, curr->i) > 0)
		break;

	curr->next = *iter;
	*iter = curr;
    }

    *head = newhead;
    
    return newhead;
}
