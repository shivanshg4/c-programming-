/*14. Write a program in C to make such a pattern like a pyramid with an asterisk. Go to the editor

   *
  * *
 * * *
* * * */
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
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
