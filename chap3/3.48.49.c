/**
 * File: 3.48.c
 * Description: Exercise 3.48
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

int free_k_times_pos(link head, int k) {
    if (!head)
	return -1;

    link *iter = &head->next, curr;
    int pos = 0, num = 0;

    while (*iter) {
	++pos;
	curr = *iter;
	
	if (pos % k == 0) {
	    *iter = curr->next;
	    free(curr);
	    ++num;
	} else {
	    iter = &curr->next;
	}
    }

    return num;
}



