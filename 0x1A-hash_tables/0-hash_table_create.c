#include <stdlib.h>

typedef struct hash_table {
    unsigned long int size;
    void **data;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *hash_table = malloc(sizeof(hash_table_t));

    if (hash_table == NULL) {
        return NULL;
    }

    hash_table->size = size;
    hash_table->data = malloc(size * sizeof(void *));

    if (hash_table->data == NULL) {
        free(hash_table);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; i++) {
        hash_table->data[i] = NULL;
    }

    return hash_table;
}
