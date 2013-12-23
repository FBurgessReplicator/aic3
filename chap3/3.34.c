/**
 * File: 3.34.c
 * Description: Exercise 3.34
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

typedef int (*comp_func)(item, item);

int move_max_to_tail(link *head, comp_func comp) {
    if (!head || !*head || !comp)
	return -1;

    link *iter, move_link, *max_link = &head;

    for (iter = head; *iter; iter = &(*iter)->next)
	if (comp((*iter)->i, (*max_link)->i) > 0)
	    max_link = iter;

    move_link = *max_link;
    *max_link = move_link->next;
    move_link->next = NULL;
    *iter_link = move_link;

    return 0;
}
