#ifndef VEC_H
#define VEC_H

#include <stdlib.h>
#include <string.h>

typedef struct {
    void* data;
    size_t size;
    size_t capacity;
    size_t element_size;
} Vec;

// Initialize a new Vec with a specified element size
Vec new_vec(size_t element_size);

// Free the memory used by a Vec
void vec_free(Vec* vec);

// Add an element to the Vec
void vec_add(Vec* vec, void* element);

// Get an element from the Vec by index
void* vec_get(Vec* vec, size_t index);

// Get the current size of the Vec
size_t vec_size(Vec* vec);

#endif
