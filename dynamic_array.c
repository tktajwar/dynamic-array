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
