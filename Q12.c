/*12. Write a program in C to make such a pattern like right angle triangle with number increased by 1.

The pattern like :

   1
   2 3
   4 5 6
   7 8 9 10*/
   #include<stdio.h>
   #include<conio.h>
   void main()
   {
       int a=1,i=1,j=1;
       do
       {
           j=1;
           do
           {
               printf("%d ",a);
               a++;
               j++;
           }while(j<=i);
              printf("\n");
           i++;
       }while(i<=4);

   }
