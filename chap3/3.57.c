/**
 * File: 3.57.c
 * Description: Exercise 3.57
 * Author: Burgess Wong
 * Created Date: 2013-12-25
 */

#include <string.h>

#define FALSE 0
#define TRUE !FALSE

void check_palindrome(char *str) {
    int len = strlen(str);
    char *head = str, *tail = str + len - 1;

    while (head < tail) {
	while (head < tail && *head == ' ')
	    ++head;
	while (head < tail && *tail == ' ')
	    --tail;
	if (*head != *tail)
	    return FALSE;
    }
    
    return TRUE;
}
