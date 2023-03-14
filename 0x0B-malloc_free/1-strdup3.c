#include "main.h"
#include <stdlib.h>

char *_strdup(const char *str)
{
	int len, i;
	char *new_str;

	if (str == NULL) {
		return NULL;
	}

	len = 0;
	while (str[len] != '\0') {
		len++;
	}

	new_str = (char *) malloc((len + 1) * sizeof(char));
	if (new_str == NULL) {
		return NULL;
	}

	i = 0;
	while (str[i] != '\0') {
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';

	return new_str;
}
