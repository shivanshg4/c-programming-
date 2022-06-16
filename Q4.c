/*4. Write a program in C to read 10 numbers from keyboard and find their sum and average.
Test Data :
Input the 10 numbers :
Number-1 :2
...
Number-10 :2
Expected Output :
The sum of 10 no is : 55
The Average is : 5.500000*/
#include<stdio.h>
void main()
{
    int s=0,a;
    float avg=0;
    printf("Input 10 numbers :\n");
    for(int i=1; i<=10; i++)
    {
        printf("Number-%d  : ",i);
        scanf("%d",&a);
        s=s+a;
    }
    printf("\nThe sum 10 no is : %d",s);
    avg=s/10.00;
    printf("\nThe Average is : %f",avg);
}
