#ifndef DYNAMIC_ARRAY_H_
#define DYNAMIC_ARRAY_H_

// the initial size of dynamic array when declared
#define DYNAMIC_ARRAY_INITIAL_SIZE 4

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

/*
 * Function: create_dynamic_array
 * -------------------------------
 *  Creates a new dynamic array
 *
 *  returns the newly created dynamic array
 */

struct dynamic_array create_dynamic_array();

#endif
