/**
 * File: 3.60.c
 * Description: Exercise 3.60
 * Author: Burgess Wong
 * Created Date: 2013-12-25
 */

char *compress_spaces(char *str) {
    char *olditer = str, *newiter = str;

    while (*olditer != '\0') {
	while (*olditer != ' ') {
	    *newiter = *olditer;
	    ++*olditer;
	}
	while (*olditer == ' ')
	    ++*olditer;
    }

    return str;
}
