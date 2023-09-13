# Project 0x1E. C - Search Algorithms

This project focuses on implementing various search algorithms in the C programming language. Below are the details of each task:

## Task 0: Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

### Prototype:
```c
int linear_search(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The function must return the first index where `value` is located.
- If `value` is not present in `array` or if `array` is NULL, the function must return -1.

### Example:
```c
int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));  // Output: Found 3 at index: 3
```

## Task 1: Binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

### Prototype:
```c
int binary_search(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The array will be sorted in ascending order.
- The function must return the index where `value` is located.
- If `value` is not present in `array` or if `array` is NULL, the function must return -1.

### Example:
```c
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 2, binary_search(array, size, 2));  // Output: Found 2 at index: 2
```

## Task 2: Big O #0

Determine the time complexity (worst case) of a linear search in an array of size `n`.

### Answer: O(n)

## Task 3: Big O #1

Determine the space complexity (worst case) of an iterative linear search algorithm in an array of size `n`.

### Answer: O(1)

## Task 4: Big O #2

Determine the time complexity (worst case) of a binary search in an array of size `n`.

### Answer: O(log(n))

## Task 5: Big O #3

Determine the space complexity (worst case) of a binary search in an array of size `n`.

### Answer: O(1)

## Task 6: Big O #4

Determine the space complexity of the given function / algorithm:

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

### Answer: O(n * m)

## Task 7: Jump search

Write a function that searches for a value in a sorted array of integers using the Jump search algorithm.

### Prototype:
```c
int jump_search(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The array will be sorted in ascending order.
- The function must return the first index where `value` is located.
- You have to use the square root of the size of the array as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with `-lm`).
- Every time you compare a value in the array to the value you are searching for, you have to print this value.

### Example:
```c
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 6, jump_search(array, size, 6));  // Output: Found 6 at index: 6
```

## Task 8: Big O #5

Determine the time complexity (average case) of a jump search in

 an array of size `n`.

### Answer: O(√n)

## Task 9: Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm.

### Prototype:
```c
int interpolation_search(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The array will be sorted in ascending order.
- The function must return the first index where `value` is located.
- You have to take into account that the values will be regularly spaced.

### Example:
```c
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 3, interpolation_search(array, size, 3));  // Output: Found 3 at index: 3
```

## Task 10: Exponential search

Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm.

### Prototype:
```c
int exponential_search(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The array will be sorted in ascending order.
- The function must return the first index where `value` is located.
- You have to use powers of 2 as exponential ranges.
- You can assume that `value` will be in the range of the array.

### Example:
```c
int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 5, exponential_search(array, size, 5));  // Output: Found 5 at index: 5
```

## Task 11: Advanced binary search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm with a twist.

### Prototype:
```c
int advanced_binary(int *array, size_t size, int value);
```

### Description:
- `array` is a pointer to the first element of the array to search in.
- `size` is the number of elements in the array.
- `value` is the value to search for.
- The array will be sorted in ascending order.
- The function must return the index where `value` is located.
- If `value` is repeated, you have to return the index of the first occurrence of `value`.
- If `value` is not present in `array` or if `array` is NULL, the function must return -1.

### Example:
```c
int array[] = {0, 1, 1, 2, 3, 3, 4, 5, 5, 6, 7, 8, 9, 9};
size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n", 5, advanced_binary(array, size, 5));  // Output: Found 5 at index: 7
```

## Task 12: Jump search in a singly linked list

Write a function that searches for a value in a sorted singly linked list of integers using the Jump search algorithm.

### Prototype:
```c
listint_t *jump_list(listint_t *list, size_t size, int value);
```

### Description:
- `list` is a pointer to the head of the linked list.
- `size` is the number of nodes in the linked list.
- `value` is the value to search for.
- The linked list will be sorted in ascending order.
- The function must return a pointer to the first node where `value` is located, or `NULL` if `value` is not found or if `list` is `NULL`.

### Example:
```c
listint_t *list;
int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(values) / sizeof(values[0]);
list = create_list(values, size); // Assume this function creates a linked list from an array

listint_t *result = jump_list(list, size, 6);
if (result != NULL)
    printf("Found %d at index: %d\n", 6, result->index); // Output: Found 6 at index: 6
else
    printf("Value not found\n");
```

## Task 13: Linear search in a skip list

Write a function that searches for a value in a sorted skip list of integers using the Linear search algorithm.

### Prototype:
```c
skiplist_t *linear_skip(skiplist_t *list, int value);
```

### Description:
- `list` is a pointer to the head of the skip list.
- `value` is the value to search for.
- The skip list will be sorted in ascending order.
- The function must return a pointer to the first node where `value` is located, or `NULL` if `value` is not found or if `list` is `NULL`.

### Example:
```c
skiplist_t *list;
int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(values) / sizeof(values[0]);
list = create_skiplist(values, size); // Assume this function creates a skip list from an array

skiplist_t *result = linear_skip(list, 6);
if (result != NULL)
    printf("Found %d at index: %d\n", 6, result->index); // Output: Found 6 at index: 6
else
    printf("Value not found\n");
```

## Task 14: Big O #6

Determine the time complexity (average case) of a linear search in a doubly linked list of size `n`.

### Answer: O(n)

## Task 15: Big O #7

Determine the time complexity (average case) of a linear search in a skip list of size `n` with an express lane of size `m`.

### Answer: O(m + log(n))
