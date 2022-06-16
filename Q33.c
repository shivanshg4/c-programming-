/*33. Write a C program to display Pascal's triangle.
 Test Data :
Input number of rows: 5
Expected Output :

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n , p , a =0 ;

    printf("Input : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");
        }
                p=pow(11,a);

        for(int i=p; i>0; i=i/10 ){
                printf("%d ",i%10);
            }
        a++;
        printf("\n");
    }
    return (0);
}
