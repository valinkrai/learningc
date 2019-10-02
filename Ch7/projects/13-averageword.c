// Purpose: Return average word length of input
// Author: Trenton Taylor

#import <stdio.h>


int main (void)
{
    char ch;
    int character_count = 0;
    int word_count = 0;

    printf("Enter  a sentence: ");
    while((ch = getchar()) != '\n') {
        if (ch == ' ') {
            word_count++;
        } else {
            character_count++;
        }
    }
    word_count++;
    
    printf("Average word length: %.1f\n", (float)character_count / word_count);

    return 0;
}