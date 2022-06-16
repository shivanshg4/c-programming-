/*17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4*/
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=(4-i); j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    getch();
}
