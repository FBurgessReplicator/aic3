/**
 * File: 3.54.c
 * Description: Exercise 3.54, use hash table to store visiting history
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

#define FALSE 0
#define TRUE !FALSE
#define HASHTABLESIZE 65521 /* a prime numbler less than and close to 65535 */

int different_nodes(link head) {
    if (!head)
	return -1;
    
    link iter = head, backiter;
    int *visited = calloc(HASHTABLESIZE, sizeof(int)), num = 0, backnum;

    for (iter = head; iter; iter = iter->next) {
	if (!visited[(int)iter]) {
	    ++num;
	    visited[(int)iter] = TRUE;
	} else {
	    backnum = 0;

	    for (backiter = head; backiter != iter; backiter = backiter->next)
		++backnum;

	    if (backnum != num)
		return num;

	    ++num;
	}
    }
    
}
