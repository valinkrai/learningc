// Author: Trenton Taylor
// Purpose: convert alphabetic telephone number to numeric

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    int vowel_count = 0;

    printf("Enter a word: ");

    while((ch = toupper(getchar())) != '\n') {
        switch(ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count += 1;
                break;
            default:
                break;
        }

    }

    printf("Your sentance contains %d vowels.\n", vowel_count);
    return 0;
}