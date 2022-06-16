/*27. Write a c program to check whether a given number is a perfect number or not.
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,s=0,ctr=0;
    printf("Input the number : ");
    scanf("%d",&a);
    printf("The positive divisor :");
    for(int i=1; i<a; i++)
    {
        if(a%i==0)
        {
            ctr=ctr+1;
            printf("%d ",i);
            s=s+i;
        }
    }
    printf("\nThe sum of divisors : %d",s);
    if(ctr==1)
        printf("\nSo, the number is Perfect");
    else
        printf("\nSo, the number is not Perfect");
        getch();
}
