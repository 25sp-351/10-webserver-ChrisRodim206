
#include "vec.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Vec new_vec(size_t element_size) {
    Vec vec;
    vec.data = malloc(10 * element_size);  // capacity of 10
    vec.size = 0;
    vec.capacity = 10;
    vec.element_size = element_size;
    return vec;
}

void vec_free(Vec* vec) {
    free(vec->data);
}

void vec_add(Vec* vec, void* element) {
    if (vec->size >= vec->capacity) {
        vec->capacity *= 2;
        vec->data = realloc(vec->data, vec->capacity * vec->element_size);
    }
    memcpy((char*)vec->data + vec->size * vec->element_size, element, vec->element_size);
    vec->size++;
}

void* vec_get(Vec* vec, size_t index) {
    if (index >= vec->size) {
        return NULL;
    }
    return (char*)vec->data + index * vec->element_size;
}

size_t vec_size(Vec* vec) {
    return vec->size;
}

