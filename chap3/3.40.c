/**
 * File: 3.40.c
 * Description: Exercise 3.40
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

typedef int (*remove_func)(link);

link remove_if_copy(link head, remove_func remove) {
    if (!head || !remove)
	return NULL;

    link new_head, *new_tail = &new_head, iter, tmp;

    for (iter = head; iter; iter = iter->next) {
	if (!remove(iter)) {
	    tmp = calloc(1, sizeof(struct node));
	    tmp->i = iter->i;
	    tmp->next = NULL;
	    *new_tail = tmp;
	    new_tail = &tmp->next;
	}
    }

    return new_head;
}
