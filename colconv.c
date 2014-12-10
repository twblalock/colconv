#include <stdio.h>
#include <string.h>

static const int LETTERS_IN_ALPHABET = 26;
static const int OFFSET_UPPERCASE = 64;
static const int OFFSET_LOWERCASE = 96;

int main(int argc, char *argv[]) {
    int total = 0;
    int i;
    for (i = 0; i < strlen(argv[1]); i++) {
	total *= LETTERS_IN_ALPHABET;
	int val = argv[1][i];
	if (val > (OFFSET_UPPERCASE) && val <= (OFFSET_UPPERCASE + LETTERS_IN_ALPHABET)) {
	    total += (val - OFFSET_UPPERCASE);
	} else if (val > (OFFSET_LOWERCASE) && val <= (OFFSET_LOWERCASE + LETTERS_IN_ALPHABET)) {
	    total += (val - OFFSET_LOWERCASE);
	} else {
	    printf("invalid value: %d\n", val);
	}
    }
    printf("%d\n", total);
}
