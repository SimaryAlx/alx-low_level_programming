#include <stdlib.h>
#include <stdio.h>

#define INITIAL_CAPACITY 10

typedef struct Node {
    char *key;
    char *value;
    struct Node *next;
} Node;

typedef struct HashTable {
    unsigned long int size;
    Node **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (hash_table == NULL) {
        return NULL;  // Unable to allocate memory for the hash table
    }

    hash_table->size = size;
    hash_table->array = (Node **)calloc(size, sizeof(Node *));
    if (hash_table->array == NULL) {
        free(hash_table);
        return NULL;  // Unable to allocate memory for the array
    }

    return hash_table;
}

int main() {
    unsigned long int size = INITIAL_CAPACITY;
    hash_table_t *my_hash_table = hash_table_create(size);

    if (my_hash_table == NULL) {
        fprintf(stderr, "Error creating hash table\n");
        return 1;
    }

    printf("Hash table created successfully with size %lu\n", my_hash_table->size);

    // Perform other operations on the hash table as needed

    // Don't forget to free the allocated memory when done
    // free(my_hash_table->array);
    // free(my_hash_table);

    return 0;
}
