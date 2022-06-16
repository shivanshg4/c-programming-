/*29. Write a C program to check whether a given number is an armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,s=0;
    printf("Input a number : ");
    scanf("%d",&n);
    for(int i=n; i>0; i=i/10)
    {
        r=i%10;
        s=s+r*r*r;
    }
    if(s==n)
    {
        printf("%d is an Armstrong number",n);
    }
    else
         printf("%d is not an Armstrong number",n);
    getch();
}
