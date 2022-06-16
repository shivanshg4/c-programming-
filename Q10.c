/*10. Write a program in C to display the pattern like right angle triangle with a number.

The pattern like :

1
12
123
1234*/
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
            printf("%d",j);
    printf("\n");
    }
    getch();
}
