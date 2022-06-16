/*13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Go to the editor
   1
  2 3
 4 5 6
7 8 9 10 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1;
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=(4-i); j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    getch();
}
