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

void clear_dynamic_array(struct dynamic_array *dArray)
{
	dArray->size = INITIAL_SIZE;
	dArray->length = 0;
	free(dArray->array);
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

void append_to_dynamic_array(struct dynamic_array *dArray, int value)
{
	// double arrray size if full
	if (dArray->length == dArray->size)
		double_array_size(dArray);

	// append to the end
	dArray->array[dArray->length++] = value;
}

void insert_to_dynamic_array(struct dynamic_array *dArray, int index, int value)
{
	// double arrray size if full
	if (dArray->length == dArray->size)
		double_array_size(dArray);

	// move elements right to index to one step right
	for (int i=dArray->length; i>index; i--)
		dArray->array[i] = dArray->array[i-1];

	// set the element with given index to given value
	dArray->array[index] = value;
}

int remove_from_dynamic_array(struct dynamic_array *dArray, int index)
{
	// exit if index is out of length
	if (index >= dArray->length)
		return 1;

	// move elements left to index to one step left
	for (int i=index; i < dArray->length; i++)
		dArray->array[i] = dArray->array[i+1];

	// decrement length
	dArray->length--;

	return 0;
}
