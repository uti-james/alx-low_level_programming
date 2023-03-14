#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c){
	char *ptrA;
	unsigned int count;

	ptrA = malloc(size * sizeof(char));
	for (count = 0; count < size; count++){
		ptrA[count] = c;
	}
	return(ptrA);

}
