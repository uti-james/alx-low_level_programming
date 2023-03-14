#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c){
	char *ptrA;
	unsigned int count;

	if (size == 0)
		return NULL;

	ptrA = malloc(size * sizeof(char));
	if (ptrA == NULL)
		return NULL;
	for (count = 0; count < size; count++)
		ptrA[count] = c;

	return(ptrA);
}
