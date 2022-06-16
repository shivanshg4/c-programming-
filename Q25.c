/*25. Write a program in C to display the n terms of square natural number and their sum.
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sq=1,s=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("The square natural number upto %d term are : ",n);
    for(int i=1; i<=n; i++)
    {
        sq=1;
        for(int j=1; j<=2; j++)
        {
            sq=sq*i;
        }
         printf("%d ",sq);
        s=s+sq;
    }
      printf("\nThe Sum of Square Natural Number upto 5 terms = %d",s);
       getch();
}
