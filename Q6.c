/*6. Write a program in C to display the multiplication table of a given integer.
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    getch();

}
