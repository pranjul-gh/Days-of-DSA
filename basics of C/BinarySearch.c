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
    printf("\nElements are: ");
    for(i=0;i<arr.Length;i++)
        printf("%d ", arr.A[i]);
}


/*Binary Search using While loop*/

int BinarySearch(struct Array arr, int key)
{
    int l,mid,h;
    l=0;
    h=arr.Length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if (key==arr.A[mid])
            return mid;
        
        else if (key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;

}


int main()
{
    struct Array arr = {
        {2,3,4,5,6},
        10,
        5
    };

    Display(arr);
    
    printf("\n%d is the location of your key..",BinarySearch(arr,4));
    
    return 0;
}
