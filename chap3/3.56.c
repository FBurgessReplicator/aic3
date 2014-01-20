/**
 * File: 3.56.c
 * Description: Exercise 3.56
 * Author: Burgess Wong
 * Created Date: 2013-12-25
 */

#define PRINTABLE_START 32
#define PRINTABLE_END 127

void print_char_freq(char *str) {
    int freq[PRINTABLE_END] = {0};
    char c;

    while ((c = *str) != '\0')
	    ++freq[c];

    for (c = PRINTABLE_START; c < PRINTABLE_END; ++c)
	printf("%c: %d", c, freq[c]);
}
