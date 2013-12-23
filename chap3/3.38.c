/**
 * File: 3.38.c
 * Description: Exercise 3.38
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

link copy(link head) {
    if (!head)
	return NULL;

    link new_head, *new_tail = &new_head, iter, tmp;

    for (iter = head; iter; iter = iter->next) {
	tmp = calloc(1, sizeof(struct node));
	tmp->i = iter->i;
	tmp->next = NULL;
	*new_tail = tmp;
	new_tail = &tmp->next
    }

    return new_head;
}
