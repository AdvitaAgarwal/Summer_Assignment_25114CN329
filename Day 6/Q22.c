
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	char bin[129]; /* support up to 128 bits */
	if (fgets(bin, sizeof bin, stdin) == NULL) return 0;
	/* remove trailing newline */
	size_t n = strlen(bin);
	if (n && bin[n-1] == '\n') bin[--n] = '\0';
	unsigned long long value = 0;
	for (size_t i = 0; i < n; ++i) {
		if (bin[i] != '0' && bin[i] != '1') {
			fprintf(stderr, "Invalid binary digit: %c\n", bin[i]);
			return 1;
		}
		value = (value << 1) + (bin[i] - '0');
	}
	printf("%llu\n", value);
	return 0;
}
