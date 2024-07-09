#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int Length;
    };


/*   Dispay the Elements of the Array     */
void Display(struct Array arr)
{
    int i;
    printf("\n Elements are: \n");
    for(i=0;i<arr.Length;i++)
        printf("%d ", arr.A[i]);
}

struct Array* MergeArray(struct Array *arr1, struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->Length && j<arr2->Length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];

        else
            arr3->A[k++]=arr2->A[j++];
    }

    for(;i<arr1->Length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->Length;j++)
        arr3->A[k++]=arr2->A[j];

    arr3->Length=arr1->Length+arr2->Length;
    arr3->size=10;
    return arr3;
}

int main()
{
    struct Array arr1={ {2,6,10,16,25}, 10, 5};
    struct Array arr2={ {3,4,7,18,20}, 10, 5};
    struct Array *arr3;
    arr3=MergeArray(&arr1,&arr2);

    Display(*arr3);
     
return 0;

}