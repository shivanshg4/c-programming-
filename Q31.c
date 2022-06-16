/*
31. Write a program in C to display the pattern like a diamond. Go to the editor

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
   */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1;
    for(int i=1; i<=9; i++)
    {
        if(i<=5){
        for(int j=1; j<=5-i; j++ )
        {
            printf(" ");
        }
        for(int k=1; k<=a; k++)
        {
            printf("*");
        }
        printf("\n");
        a=a+2;
    }
    else
    {
      //  a=7;
          a=a-2;
         for(int j=1; j<=i-5; j++ )
        {
            printf(" ");
        }
        for(int k=1; k<=a-2; k++)
        {
            printf("*");
        }
        printf("\n");

    }}
    getch();
}
