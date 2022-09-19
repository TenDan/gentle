#include "word_utils.h"

void firstLetterUppercased(word_arr_ptr word) 
{
    size_t len = strlen(word);

    to_uppercase(&word[0]);

    for (int i = 1; i < len; ++i)
    {
        to_lowercase(&word[i]);
    }
}