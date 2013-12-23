/**
 * File: 3.36.c
 * Description: Exercise 3.36
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int move_even_nodes(link head) {
    if (!head)
	return -1;

    link *iter = &head, curr, even_head, *even_tail = &even_head;
    int num = 0;

    while (*iter) {
	++num;
	curr = *iter;
	if (num % 2 == 0) {
	    *iter = curr->next;
	    *even_tail = curr;
	    even_tail = &curr->next;
	} else {
	    iter = &curr->next;
	}
    }

    *iter = even_head;
    *even_tail = NULL;

    return 0;
}
