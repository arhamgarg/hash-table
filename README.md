# Hash Table Implementation in C

This project provides a simple, yet robust, implementation of a hash table data structure in C. It supports basic operations such as insertion, searching, and deletion, along with dynamic resizing to maintain efficient performance.

## Features

*   **Dynamic Resizing:** The hash table automatically resizes itself (up and down) based on the load factor to ensure optimal performance and memory usage.
*   **Collision Resolution:** Uses double hashing for efficient collision resolution.
*   **Prime Number Utilities:** Includes helper functions for prime number generation, used in hash function calculations and table sizing.
*   **Basic Operations:**
    *   `ht_insert(ht_hash_table *ht, const char *key, const char *value)`: Inserts a key-value pair into the hash table.
    *   `ht_search(ht_hash_table *ht, const char *key)`: Searches for a key and returns its associated value.
    *   `ht_delete(ht_hash_table *ht, const char *key)`: Deletes a key-value pair from the hash table.

## Project Structure

*   `src/hash_table.h`: Header file containing the data structure definitions for `ht_item` and `ht_hash_table`, and function prototypes for hash table operations.
*   `src/hash_table.c`: Implementation of the hash table logic, including hashing, collision resolution, resizing, and CRUD operations.
*   `src/prime.h`: Header file for prime number utility functions.
*   `src/prime.c`: Implementation of prime number related functions, such as `is_prime` and `next_prime`, used for hash table sizing and hashing.
*   `src/main.c`: A simple example demonstrating the usage of the hash table.

## How to Compile and Run

To compile the project, you can use a C compiler like GCC:

```bash
gcc -o hash_table src/*.c -lm
```

To run the executable:

```bash
./hash_table
```

## Usage Example

```c
#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new();

    ht_insert(ht, "apple", "red");
    ht_insert(ht, "banana", "yellow");
    ht_insert(ht, "grape", "purple");

    printf("Apple: %s\n", ht_search(ht, "apple"));
    printf("Banana: %s\n", ht_search(ht, "banana"));
    printf("Grape: %s\n", ht_search(ht, "grape"));
    printf("Orange: %s\n", ht_search(ht, "orange")); // Should be NULL

    ht_delete(ht, "apple");
    printf("Apple after deletion: %s\n", ht_search(ht, "apple")); // Should be NULL

    ht_del_hash_table(ht);
    return 0;
}
```
