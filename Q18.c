/*18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
Test Data :
Input the Value of x :2
Input the number of terms : 5
Expected Output :
the sum = -0.415873
Number of terms = 5
value of x = 2.000000*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,a=0;
    float x,po,f=1.00,div=0,ans=0,s;
    printf("input the value of x : ");
    scanf("%f",&x);
    printf("input the number of terms : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        po=pow(x,a);


            f=1.00;
            for(int i=a; i>0; i--)
            {
                f=f*i;
            }
            div=po/f;
            s=pow((-1),(i+1));
            ans=ans+s*div;
            a=a+2;

    }
    printf("The sum : %f",ans);
    printf("\nNumber of terms : %d",n);
    printf("\nValue of x : %f",x);
    getch();
}
