/*20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.

   *
  ***
 *****/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int a=1;
     for(int i=1; i<=5; i=i+2)
     {
         for(int j=1; j<=(3-a); j++)
         {
             printf(" ");
         }
         for(int k=1; k<=i; k++)
         {
             printf("*");
         }
         a++;
         printf("\n");
     }
        getch();
 }
