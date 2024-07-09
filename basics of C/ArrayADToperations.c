#include<stdio.h>
#include<conio.h>

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

/*       Appending an integer to the Array       */
void Append(struct Array *arr, int x)
{
    if(arr->Length<arr->size){
        arr->A[arr->Length++]=x;
    }
}

/*     Inserting an integer to a specific index with a given value  */
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index<=arr->Length)
    {
        for(i=arr->Length; i>index; i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->Length++;
    }
}

/*  Deleting an element from a given index    */
int Delete(struct Array *arr,int index)
{
    int i;
    int x=0;
    if (index>=0 && index<arr->Length)
    {   
        x=arr->A[index];
        for(i=index; i<arr->Length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->Length--;
        return x;
    }
    
}



int main()
{
    struct Array arr = {
        {2,3,4,5,6},
        10,
        5
    };

    Append(&arr, 11);
    Insert(&arr,3,96);
    Delete(&arr,4);
    Display(arr);
    
    return 0;
}
