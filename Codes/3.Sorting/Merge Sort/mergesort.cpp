#include<iostream>
#include<vector>

using namespace std;

void merge(int [], int, int, int);

void mergesort(int arr[], int start, int end)
{
    if(start == end)
    return;

    int mid = start + (end-start)/2;
    // Left Side
    mergesort(arr, start, mid);
    // Right Side
    mergesort(arr, mid+1, end);

    // Merging and sorting left and right at the same time
    merge(arr, start, mid, end);
}

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end-start+1);
    // Taking two pointer for the left and right
    int left = start, right = mid+1;
    // index for the temp
    int index = 0;

    while(left<=mid && right<=end){
        if (arr[left]<=arr[right])
        {
            temp[index] = arr[left];
            index++; left++;
        }
        else{
            temp[index] = arr[right];
            index++; right++;
        }
    }

    // If element left in the left array:
    while(left<=mid){
        temp[index] = arr[left];
        index++; left++;  
    }
    // If element left in the right array:
    while(right<=end){
        temp[index] = arr[right];
        index++; right++;  
    }

    // replace the  orginal part with temp
    index = 0;
    while(start < end+1){
        arr[start] = temp[index];
        start++;
        index++;
    }
}

int main() {
    int arr[]= {33, 3, 7, 19, -36, 217,  157, 568, -13560, 6};
    
    cout<<"Original Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    mergesort(arr, 0, 9);
    
    cout<<endl;
    cout<<"Sorted Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}