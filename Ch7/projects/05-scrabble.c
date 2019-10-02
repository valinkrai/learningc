// Author: Trenton Taylor
// Purpose: convert alphabetic telephone number to numeric

#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    int worth = 0;

    printf("Enter a word: ");
    
    while((ch = toupper(getchar())) != '\n') {
        switch(ch) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                worth += 1;
                break;
            case 'D': case 'G':
                worth += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                worth += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                worth += 4;
                break;
            case 'K': 
                worth += 5;
                break;
            case 'J': case 'X':
                worth += 8;
                break;
            case 'Q': case 'Z':
                worth += 10;
                break;
            default:
                break;
        }

    }

    printf("Scrabble value: %d\n", worth);
    
    return 0;
}