/**
 * File: 3.47.c
 * Description: Exercise 3.47
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

void free_list(link head) {
    link iter, next;

    for (iter = head; iter; iter = next) {
	next = iter->next;
	free(iter);
    }
}
