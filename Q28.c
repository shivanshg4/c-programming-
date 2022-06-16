/*28. Write a c program to find the perfect numbers within a given number of range.
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,s=0;
    printf("Input the starting range of number :  ");
    scanf("%d",&a);
     printf("Input the ending range of number :  ");
    scanf("%d",&b);
    printf("The perfect numbers within the given range : ");
    for(int i=a; i<=b; i++)
    {
          s=0;
        for(int j=1; j<i; j++)
        {

            if(i%j==0)
            {
                s=s+j;
            }
        }
          if(s==i)
                printf("%d ",i);

    }
     getch();
}


