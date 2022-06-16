/*22. Write a program in C to print the Floyd's Triangle. Go to the editor

1
01
101
0101
10101*/
#include<stdio.h>
#include<conio.h>
void main()
{
    for(int i=1; i<=5; i++)
    {
        if(i%2!=0)
            {
        for(int j=1; j<=i; j++)
        {
            if(j%2==0)
            printf("0");
            else
                printf("1");
        }
           }
        else
        {
               for(int j=1; j<=i; j++)
        {
            if(j%2==0)
            printf("1");
            else
                printf("0");
        }

        }
        printf("\n");
    }
}
