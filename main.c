#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,i,rev,rem;
    rev=0;
    printf("Enter the digit\n");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+(rem);
        n=n/10;
    }

    n=temp;
    if(rev==n)
        printf("Palindrome");
    else
        printf("Not a palindrome");

}
