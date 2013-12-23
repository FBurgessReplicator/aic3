/**
 * File: 3.39.c
 * Description: Exercise 3.39
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

typedef int (*remove_func)(link);

int remove_if(link *head, remove_func remove) {
    if (!head || !*head || !remove)
	return -1;

    link *iter = head, curr;
    int num = 0;

    while (*iter) {
	curr = *iter;
	
	if (remove(curr)) {
	    *iter = curr->next;
	    free(curr);
	    ++num;
	} else {
	    iter = &curr->next;
	}
    }

    return num;
}
