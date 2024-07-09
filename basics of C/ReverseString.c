#include<string.h>
#include<stdio.h>

void main()
{
    char A[]={'p','r','a', 'n', 'j', 'u','l','\0'};
    int i,j;
    // char A[7];
    // gets(A);
    char temp;
    for (i=0;A[i]!='\0';i++)
    {}i-=1;
    for(j=0;j<i;j++,i--)
    {
        temp=A[j];
        A[j]=A[i];
        A[i]=temp;
    }
    printf("%s",A);
}