/*30. Write a C program to find the Armstrong number for a given range of number.
Test Data :
Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n,r,s=0;
    printf("Input starting number of range: ");
    scanf("%d",&a);
    printf("Input ending number of range: ");
    scanf("%d",&b);
    printf("Armstrong numbers in given range are: ");
    for(int i=a; i<=b; i++)
    {    s=0;
        for(int j=i; j>0; j=j/10)
    {
        r=j%10;
        s=s+r*r*r;
    }
    if(s==i)
        printf("%d ",i);
    }
    getch();

}
