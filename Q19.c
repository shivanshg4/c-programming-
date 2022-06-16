/*19. Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float s=0;
        printf("Input the number of terms : ");
        scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("1/%d + ",i);
        s=s+1.00/i;
    }
    printf("\nSum of series upto %d terms : %f",n,s);
    getch();
}
