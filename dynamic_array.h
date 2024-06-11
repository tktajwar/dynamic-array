#ifndef DYNAMIC_ARRAY_H_
#define DYNAMIC_ARRAY_H_

/*
 * Structure: Dynamic Array
 * ------------------------
 *  Dynamic array data structure
 *
 *  int size:   size of array
 *  int length: number of elements stored in the arary
 *  int* array: link to the first element of the array
 */

struct dynamic_array
{
	int size;
	int length;
	int* array;
};

#endif
