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

/*Binary Search Using Recursion..*/

int RbinSearch(int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
            return mid;
        else if (key<a[mid])
            return RbinSearch(a,l,mid-1,key);
        else
            return RbinSearch(a,mid+1,h,key);
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

    printf("%d", RbinSearch(arr.A,0,arr.Length,4));
    Display(arr);
    
    return 0;
}
