/**
 * File: 3.26.c
 * Description: Exercise 3.26
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int insert_list(link insertion_point, link head) {
    if (!insertion_point || !head)
	return -1;

    link iter;
    
    for (iter = head; iter->next != head; iter = iter->next);

    iter->next = insertion_point->next;
    insertion_point->next = head;

    return 0;
}
