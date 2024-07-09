#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
void fun(int A[],int n){
    for(int i=0;i<n;i++){
    printf("%d  ",A[i]); }
}
int main()
{
    int A[]={2,4,5,6,7};   //arrays are always passed by address
    int n=5;
    fun(A,n);
    return 0;
}
*/
        //array returning as pointer
int * func(int n){
    int * ptr;
    ptr=(int *) malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
    ptr[i]=i+1;}
    return ptr;
}
int main()
{
    int *p, size=5;
    p=func(size);
    for(int i=0; i<size;i++)
    printf("%d \n",p[i])   ;
    return 0;
}