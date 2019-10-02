/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <limits.h>

int main(void)
{
  short i, n;
  

  printf("Max Int: %d\n", INT_MAX);
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%hi", &n);

  for (i = 1; i <= n; i++)
    printf("%12i%12i\n", i, i * i);

  return 0;
}