# Hash Tables

This project focuses on implementing a hash table data structure in the C programming language. The hash table is a widely used data structure that provides efficient key-value storage and retrieval.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Implementation Details](#implementation-details)
- [Files](#files)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The goal of this project is to create a hash table data structure and implement various functions to interact with it. The hash table will be implemented using the chaining collision handling technique, where collisions are resolved by creating linked lists of nodes.

## Usage

To use the hash table implementation in your C program, follow these steps:

1. Include the `hash_tables.h` header file in your source code.
2. Create a hash table using the `hash_table_create` function, specifying the desired size of the hash table array.
3. Use the provided functions to interact with the hash table, such as adding elements with `hash_table_set`, retrieving values with `hash_table_get`, and so on.
4. Remember to free the memory allocated by the hash table using the `hash_table_delete` function when you're done with it.

## Implementation Details

The hash table is implemented using two main structures: `hash_table_t` and `hash_node_t`. The `hash_table_t` structure represents the hash table itself and contains the size of the array and a pointer to the array of linked lists. The `hash_node_t` structure represents a node in the linked list and stores the key-value pair.

To handle collisions, new nodes are added at the beginning of the linked list associated with the hash table array index. This ensures efficient insertion and retrieval of elements.

The hash function used in this implementation is the djb2 algorithm, which generates a hash value for a given key.

## Files

- `hash_tables.h`: Header file containing function prototypes and structure definitions.
- `0-hash_table_create.c`: Function to create a hash table.
- `1-djb2.c`: Implementation of the djb2 hash function.
- `2-key_index.c`: Function to get the index of a key in the hash table array.
- `3-hash_table_set.c`: Function to add an element to the hash table.
- `4-hash_table_get.c`: Function to retrieve a value associated with a key in the hash table.
- `5-hash_table_print.c`: Function to print the contents of the hash table.
- `6-hash_table_delete.c`: Function to delete the hash table and free allocated memory.
- `main.c`: Main program for testing the hash table functions.

## Testing

A set of test cases is provided in the `main.c` file to verify the functionality of the hash table implementation. You can compile and run the program to see the results.

## Contributing

Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as per the terms of the license.
