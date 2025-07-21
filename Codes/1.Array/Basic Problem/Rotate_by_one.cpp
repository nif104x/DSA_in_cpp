#include<iostream>

using namespace std;

void rotate_array(int arr[],int n){
 
    int temp = arr[n-1];

    for (int i = n-2; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[0] = temp;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
}

int main() {
    int arr[] = {2,5,6,3,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate_array(arr,n);
    return 0;
}