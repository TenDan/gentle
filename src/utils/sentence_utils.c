#include "sentence_utils.h"
#include "word_utils.h"

void gentleSentence(sentence_ptr sentence)
{
    char *found;
    while ((found = strsep(sentence, " ")) != NULL)
    {   
        firstLetterUppercased(found);
        printf("%s ", found);
    }
    printf("\b");
    printf("\n");
}