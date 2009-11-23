/**
 * \file strcspn.c
 * \date 22.11.09
 * \author Sikmir
 */
#include "string.h"

size_t strcspn(const char *s, const char *reject) {
	size_t count = 0;

	while (*s != '\0')
		if (strchr (reject, *s++) == NULL)
    			++count;
		else
    			return count;

	return count;
}
