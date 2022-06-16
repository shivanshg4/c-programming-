/*26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,s=0,ans=0,r,ctr=0;
    printf("Input the number of terms : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        s=0;
        for(int j=1; j<=i; j++)
        {
            s=s*10+1;
        }
        printf("%d ",s);
        ctr=0;
        for(int k=s; k>0; k=k/10)
        {
            ctr=ctr+1;
        }
        if(ctr!=n)
            printf("+ ");
        ans=ans+s;
    }
    printf("\nThe sum is : %d",ans);
    getch();
}
