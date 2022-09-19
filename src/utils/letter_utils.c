#include "letter_utils.h"

static bool betweenInclude(int toCompare, int from, int to)
{
    return toCompare >= from && toCompare <= to;
}

void toUppercase(single_letter_ptr letter)
{
    if (betweenInclude(*letter, 'a', 'z'))
        *letter -= ASCII_DIFFERENCE;
}

void toLowercase(single_letter_ptr letter)
{
    if (betweenInclude(*letter, 'A', 'Z'))
        *letter += ASCII_DIFFERENCE;
}