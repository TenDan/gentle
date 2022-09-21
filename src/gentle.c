#include <stdio.h>
#include <string.h>
#include "utils/sentence_utils.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <sentence>\n", argv[0]);
        return 1;
    }

    char *exString;

    size_t sentenceSize = strlen(argv[1]);

    exString = strndup(argv[1], sentenceSize);

    gentleSentence(&exString);

    return 0;
}