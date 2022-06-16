/*32. Write a C program to determine whether a given number is prime or not.
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ctr=0;
    printf("Input a number : ");
    scanf("%d",&n);
    for(int i=n; i>0; i=i/10)
    {
        if(n%i==0)
            ctr=ctr+1;
    }
    if(ctr==2)
    {
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
}
