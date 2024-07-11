
void selectionSort(int arr[], int n)
    {

       for (int i=0; i<=n-2; i++){
           int mini=i;
           for (int j=i; j<=n-1; j++){
               if (arr[j]<arr[mini]){
                   mini=j;
               }
           }
        //    swap(arr[mini], arr[i]);
          int temp=arr[mini];
          arr[mini]=arr[i];
          arr[i]=temp;
       }
    }