/*23. Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
    float x,f=1,po,div,s=0;
    printf("Input the value of x : ");
    scanf("%f",&x);
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(int i=0; i<=(n-1); i++)
    {
        po=pow(x,i);
        f=1;
        for(int j=i; j>0; j--)
        {
            f=f*j;
        }
        div=po/f;
        s=s+div;
    }
    printf("The sum is %f",s);
    getch();
}
