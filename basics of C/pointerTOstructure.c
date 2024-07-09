#include<stdio.h>
#include<stdlib.h>
struct area {
    int length;
    int breath;
};

int main(){
  struct area *p;

  p=(struct area*)malloc(sizeof(struct area));
  p->length=11;
  p->breath=22;
  // struct area r={20,2};
  // struct area *p=&r;
  // printf("%d",p->length);
  printf("%d",p->length);
}