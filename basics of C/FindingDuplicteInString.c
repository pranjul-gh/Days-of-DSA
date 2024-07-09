/*  FINDING DUPLICATES IN A STRING USING HASHTABLE  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define size 26
void main()
{
    char A[size];
    int i,j,H[size]={0};
    printf("\nenter a astring..");
    gets(A);

    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-97] += 1;

    }
    printf("the charcacters which repeated itself more than one are also with the times they occured...\n");
    for(i=0;i<26;i++)
    {
        if(H[i]>1)
        {
        printf("%c ",i+97);
        printf("%d ",H[i]);
        }
    }
}