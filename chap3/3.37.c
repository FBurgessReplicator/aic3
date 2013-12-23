/**
 * File: 3.37.c
 * Description: Exercise 3.37
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int exchange_node(link a, link b) {
    if (!a || !b)
	return -1;

    link tmp;

    tmp = b->next->next;
    b->next->next = a->next->next;
    a->next->next = tmp;

    tmp = b->next;
    b->next = a->next;
    a->next = tmp;

    return 0;
}
