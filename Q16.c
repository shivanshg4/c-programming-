/*16. Write a program in C to display the n terms of even natural number and their sum.
Test Data :
Input number of terms : 5
Expected Output :
The even numbers are :2 4 6 8 10
The Sum of even Natural Number upto 5 terms : 30*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
     printf("The even numbers are : ");
    for(int i=1; i<=2*n; i++)
    {
       if(i%2!=0)
       {
           continue;
       }
       printf("%d ",i);
       s=s+i;
    }
    printf("\nThe sum of even natural number upto %d terms : %d ",n,s);
    getch();
}
