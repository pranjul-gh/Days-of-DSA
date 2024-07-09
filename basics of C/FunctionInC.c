#include<stdio.h>
#include<conio.h>

/*int add(int a, int b){            //call by value
    int c;
    c=a+b;
    return (c);
}
int main(){
    int x=10;
    int y=20;
    int sum=add(x,y);
    printf("%d",sum);
}*/


//call by address
int swap(int *a, int *b){            
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(){
    int x=10;
    int y=20;
    swap(&x,&y);
    printf("a:%d\nb:%d",x,y);
}