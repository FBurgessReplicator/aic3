/**
 * File: 3.27.c
 * Description: Exercise 3.27
 * Author: Burgess Wong
 * Created Date: 2013-12-19
 */

#include "node.h"

int move_link(link insertion_point, link move_point) {
    if (!insertion_point || !move_point)
	return -1;

    link move_link;

    move_link = move_point->next;
    move_point->next = move_link->next;

    move_link->next = insertion_point->next;
    insertion_point->next = move_link;

    return 0;
}
