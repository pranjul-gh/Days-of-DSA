#include<bits/stdc++.h>
using namespace std;

void cyclicSort(vector<int> &arr){
    int i=0;
       while(i<arr.size()){
        int correctIdx = arr[i]-1;
        if (arr[i] != arr[correctIdx]){
            swap(arr[i], arr[correctIdx]);
        }
        else{
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {5,4,3,2,1,7,6};
    cyclicSort(arr);
    cout<< endl <<"array: " << endl;
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<' ';
    }
}