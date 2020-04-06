/* +-------------------------+
 * | Alzundaz malloc contest |
 * +-------------------------+
 *
 * A small C coding challenge:
 *  Create an implementation of the basic memory management functions
 *
 *  Created by Alexandre Waeles on 06-04-20.
 */

#ifndef MALLOC_INCLUDE_MALLOC_H_
#define MALLOC_INCLUDE_MALLOC_H_

/**
 * Allocates size bytes of memory.
 * @param size the number of bytes to allocate
 * @return a pointer pointing to the beginning of the allocated space
 */
void* malloc(size_t size);

/**
 * Allocates num elements of size bytes each, all initialized to zero.
 * @param num the number of elements
 * @param size
 * @return a pointer pointing to the beginning of the allocated space
 */
void* calloc(size_t num, size_t size);

/**
 * Re-allocates size bytes of memory but with ptr content.
 * @param ptr the old pointer
 * @param size the news size of allocation
 * @return a pointer pointing to the beginning of the allocated space
 */
void* realloc(void* ptr, size_t size);

/**
 * Frees memory allocation pointed by ptr.
 * @param ptr the pointer to the allocation
 */
void free(void* ptr);

#endif //MALLOC_INCLUDE_MALLOC_H_
