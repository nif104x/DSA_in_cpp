#include<iostream>

using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start = 0, end = size, mid;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key)
        start = mid+1;

        else
        end = mid-1;     
    }
    return -1;
}

int main() {
    int arr[1000];
    int n, key;
    cout<<"Enter the length of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    
    for (int i = 0; i < n; i++)
    cin>>arr[i];
    
    
    cout<<"Enter the key: ";
    cin>>key;
    
    cout<<"Index is: "<<BinarySearch(arr,n,key)<<endl;

    return 0;
}