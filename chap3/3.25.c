/**
 * File: 3.25.c
 * Description: Exercise 3.25
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int count_node_num_between(link start, link end) {
    if (!start || !end)
	return -1;
	
    if (start == end)
	return 0;

    link iter;
    int num;
    
    for (iter = start->next; iter != end; iter = iter->next)
	++num;

    return num;
}



