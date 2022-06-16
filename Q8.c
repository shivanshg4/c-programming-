/*8. Write a program in C to display the n terms of odd natural number and their sum .
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100*/
#include<stdio.h>
#include<conio.h>
main()
{
    int n,s=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
     printf("The odd numbers are : ");
    for(int i=1; i<=(2*n); i++)
    {
       if(i%2==0)
       {
           continue;
       }
       printf("%d ",i);
       s=s+i;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d",n,s);
    getch();
}
