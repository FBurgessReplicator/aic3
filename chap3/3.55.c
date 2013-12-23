/**
 * File: 3.55.c
 * Description: Exercise 3.55
 * Author: Burgess Wong
 * Created Date: 2013-12-22
 */

#include "node.h"

#define FALSE 0
#define TRUE !FALSE
#define HASHTABLESIZE 65521 /* a prime numbler less than and close to 65535 */

static void calc_route(link head, int *visited) {
    link iter = head, backiter;
    int num = 0, backnum;

    for (iter = head; iter; iter = iter->next) {
	if (!visited[(int)iter]) {
	    ++num;
	    visited[(int)iter] = TRUE;
	} else {
	    backnum = 0;
	    for (backiter = head; backiter != iter; backiter = backiter->next)
		++backnum;
	    if (backnum != num)
		return;
	    ++num;
	}
    }
}

int end_with_same_loop(link a, link b) {
    if (!a || !b )
	return -1;

    link iter, backiter;
    int *visited_a = calloc(HASHTABLESIZE, sizeof(int));
    int *visited_b = calloc(HASHTABLESIZE, sizeof(int));
    int num, backnum;

    calc_route(a, visited_a);

    for (iter = b; iter; iter = iter->next) {

	/* check if the node is in a's route  */
	if (visited_a[(int)iter]) {
	    for (backiter = a; backiter; backiter = backiter->next)
		if (iter == backiter)
		    return 1;
	}

	/* check if the node has been visited before */
	if (!visited_b[(int)iter]) {
	    ++num;
	    visited_b[(int)iter] = TRUE;
	} else {
	    backnum = 0;
	    for (backiter = b; backiter != iter; backiter = backiter->next)
		++backnum;
	    if (backnum != num)
		return;
	    ++num;
	}
    }
    
}

