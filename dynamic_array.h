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

/* Function: append to dynamic array
 * ---------------------------------
 *  Append a value at the end of the dynamic array
 *
 *  struct dynamic_array *dArray: pointer to the array to get appended
 *  int value:                    the value to be appended
 */

void append_to_dynamic_array(struct dynamic_array *dArray, int value);

/* Function: insert to dynamic array
 * ---------------------------------
 *  insert a value at the index of the dynamic array
 *
 *  struct dynamic_array *dArray: pointer to the array to get inserted
 *  int index:                    the index where value gets inserted
 *  int value:                    the value to be inserted
 */

void insert_to_dynamic_array(struct dynamic_array *dArray, int index, int value);

/* Function: remove from dynamic array
 * -----------------------------------
 *  remove the given index element from the dynamic array
 *
 *  struct dynamic_array *dArray: pointer to the array to get removed from
 *  int index:                    the index of element that gets removed
 */

int remove_from_dynamic_array(struct dynamic_array *dArray, int index);

#endif
