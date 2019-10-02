// Purpose: Return lastname first initial from input
// Author: Trenton Taylor

#import <stdio.h>
#import <stdbool.h>
#import <ctype.h>

int main (void)
{
    char ch;
    char first_initial = ' ';
    bool last_name = false;

    printf("Enter  a sentence: ");
    while((ch = getchar()) != '\n') {
        if (ch != ' ') {
            if (last_name){
                putchar(ch);
            } else if (first_initial == ' ') {
                first_initial = toupper(ch);
            }
        } else {
            if (first_initial != ' ') {
                last_name = true;
            }
        }
    }

    printf(", %c.\n", first_initial);

    return 0;
}