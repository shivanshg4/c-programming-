/*3. Write a program in C to display n terms of natural number and their sum.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28*/
#include<stdio.h>
void main()
{
    int n, s=0;
    printf("enter the value of  n :");
    scanf("%d",&n);
    printf("The first %d natural number is : \n",n);
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
          s=s+i;
    }
    printf("\nThe Sum of  Natural Numbers upto %d terms : %d ",n,s);
    getch();
}
