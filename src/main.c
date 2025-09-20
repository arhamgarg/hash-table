#include "hash_table.c"
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
