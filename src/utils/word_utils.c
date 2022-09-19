#include "word_utils.h"

void firstLetterUppercased(word_arr_ptr word) 
{
    size_t len = strlen(word);

    toUppercase(&word[0]);

    for (int i = 1; i < len; ++i)
    {
        toLowercase(&word[i]);
    }
}