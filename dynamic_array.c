#include <stdlib.h>
#include <stdio.h>

#include "dynamic_array.h"

int const INITIAL_SIZE = DYNAMIC_ARRAY_INITIAL_SIZE;

struct dynamic_array create_dynamic_array()
{
	struct dynamic_array dArray;

	dArray.size = INITIAL_SIZE;
	dArray.length = 0;
	dArray.array = (int *) malloc(sizeof(int) * dArray.size);

	return dArray;
}

void double_array_size(struct dynamic_array *dArray)
{
	dArray->size *= 2;

	// create new array with double size
	int* new_array;
	new_array = (int *) malloc(sizeof(int) * dArray->size);

	// copy elements from the previous array
	for (int i=0; i<dArray->length; i++)
		new_array[i] = dArray->array[i];

	// free previous array
	free(dArray->array);

	// use the new array
	dArray->array = new_array;
}
