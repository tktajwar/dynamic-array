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
 * Function: clear_dynamic_array
 * -----------------------------
 *  Frees the heap allocated array and sets the size and the length 
 *  to the initial values
 *
 *  struct dynamic_array *dArray: pointer to the array to be cleared
 */

void clear_dynamic_array(struct dynamic_array *dArray);

/*
 * Function: create_dynamic_array
 * -------------------------------
 *  Creates a new dynamic array
 *
 *  returns the newly created dynamic array
 */

struct dynamic_array create_dynamic_array();

/* Function: double_array_size
 * ---------------------------
 *  Doubles the size of array
 *
 *  struct dynamic_array *dArray: pointer to the array to be doubled
 */

void double_array_size(struct dynamic_array *dArray);

#endif
