/**
 * File: 3.35.c
 * Description: Exercise 3.35
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

typedef int (*comp_func)(item, item);

int move_min_to_head(link *head, comp_func comp) {
    if (!head || !*head || !comp)
	return -1;

    link *iter, move_link, *min_link = head;

    for (iter = head; *iter; iter = &(*iter)->next)
	if (comp((*iter)->i, (*min_link)->i) < 0)
	    min_link = iter;

    move_link = *min_link;
    *min_link = move_link->next;
    move_link->next = *head;
    *head = move_link;

    return 0;
}
