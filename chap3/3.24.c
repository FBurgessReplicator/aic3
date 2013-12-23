/**
 * File: 3.24.c
 * Description: Exercise 3.24
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int count_node_num(link head) {
    if (!head)
	return 0;

    link iter;
    int num = 1;
    
    for (iter = head->next; iter != head; iter = iter->next)
	++num;

    return num;
}
