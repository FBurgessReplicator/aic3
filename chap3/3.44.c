/**
 * File: 3.44.c
 * Description: Exercise 3.44
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

int exchange_double_linked_node(link a, link b) {
    if (!a || !b)
	return -1;

    link a_prev = a->prev, a_next = a->next;
    link b_prev = b->prev, b_next = b->next;

    a->prev = b_prev;
    a->next = b_next;
    b_prev->next = b_next->prev = a;

    b->prev = a_next;
    b->next = a_prev;
    a_prev->next = a_next->prev = b;

    return 0;
}
