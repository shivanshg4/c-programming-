/*15. Write a C program to calculate the factorial of a given number.
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,f=1;
    printf("Input the number : ");
    scanf("%d",&a);
    for(int i=1; i<=a; i++)
        f=f*i;
    printf("The Factorial of %d is : %d",a,f);
    getch();
}
