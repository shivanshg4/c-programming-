/*2. Write a C program to find the sum of first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55*/
#include<stdio.h>
void main()
{
    int s=0;
    printf("The first 10 natural number is :\n");
    for(int i=1;i<=10; i++)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("\nThe sum is : %d ",s);
    getch();
}
