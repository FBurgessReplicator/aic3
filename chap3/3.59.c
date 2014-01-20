/**
 * File: 3.59.c
 * Description: Exercise 3.59
 * Author: Burgess Wong
 * Created Date: 2013-12-25
 */

#include <string.h>

#define FALSE 0
#define TRUE !FALSE

static int check_substr(char *str, int str_len, char *word, int word_len) {
    int i;
    for (i = 0; i < str_len - word_len + 1; ++i)
	if (strncmp(str, word, word_len) == 0)
	    return TRUE;
    return FALSE;
}

void search_words(char *str, char *word_seq) {
    char *word_start = word_seq, *forward = word_seq;
    int str_len = strlen(str);

    while (*forward != '\0') {
	while (*forward != ' ')
	    ++forward;

	if (check_substr(str, str_len, word_start, forward - word_start)) {
	    *forward = '\0';
	    print("%s\n", word_start);
	    *forward = ' ';
	}

	while (*forward == ' ')
	    ++forward;
	word_start = forward;
    }
}

