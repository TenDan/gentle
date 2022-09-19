#include <stdio.h>
#include "utils/letter_utils.h"
#include "utils/word_utils.h"

int main()
{
    // printf("%d %d\n", 'a', 'A');
    // printf("%d %d\n", 'A' + 32, 'a' - 32);
    char testUpperA = 'A';
    char testLowerA = 'a';
    char testUpperZ = 'Z';
    char testLowerZ = 'z';

    to_uppercase(&testLowerA);
    to_uppercase(&testLowerZ);
    to_lowercase(&testUpperA);
    to_lowercase(&testUpperZ);

    printf("testLowerA (should be uppercased): %c\n", testLowerA);
    printf("testLowerZ (should be uppercased): %c\n", testLowerZ);
    printf("testUpperA (should be lowercased): %c\n", testUpperA);
    printf("testUpperZ (should be lowercased): %c\n", testUpperZ);

    char exampleWord[] = "ExampleWord";
    firstLetterUppercased(exampleWord);
    printf("%s\n", exampleWord);

    return 0;
}