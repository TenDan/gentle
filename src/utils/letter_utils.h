#ifndef LETTER_UTILS_H
#define LETTER_UTILS_H

#include <stdbool.h>

#define ASCII_DIFFERENCE 32

typedef char* single_letter_ptr;

/* Transform letter into uppercase */
void to_uppercase(single_letter_ptr letter);

/* Transform letter into lowercase */
void to_lowercase(single_letter_ptr letter);

#endif