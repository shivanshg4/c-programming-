/*11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.

The pattern like :

 1
 22
 333
 4444*/
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
     int i=1,j=1;
     while(i<=4)
     {
         j=1;
         while(j<=i)
         {
             printf("%d",i);
             j++;
         }
         i++;
         printf("\n");
     }
     getch();
 }
