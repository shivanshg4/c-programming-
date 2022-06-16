/*24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].
Test Data :
Input the value of x :2
Input number of terms : 5
Expected Output :
The values of the series:
2
-8
32
-128
512
The sum = 410*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,a=1,tem;
    int x,s=0,po;
    printf("Input the value of x : ");
    scanf("%d",&x);
    printf("Input the number of terms : ");
    scanf("%d",&n);
    printf("The values of series \n");
    for(int i=1; i<=n; i++)
    {
        po=pow(x,a);
        a=a+2;
        tem=pow(-1,(i+1));
         printf("%d\n",tem*po);
        s=s+tem*po;

    }
    printf("The sum=%d",s);
    getch();
}
