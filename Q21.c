/*21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. Go to the editor
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,a=1;;
        printf("Input the number of terms : ");
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {   a=1;
            for(int j=1; j<=i; j++)
            {
                a=a*10;
            }
            printf("%d ",(a-1));
            s=s+(a-1);
        }
        printf("\nThe sum of series : %d",s);
        getch();
}
