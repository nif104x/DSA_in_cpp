#include<iostream>

using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    // Saving the last element
    int temp = arr[4];

    //iterating from the last 2nd element to the 1st
    for (int i = 5-2; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }

    //Assigning the last element to the first manually
    arr[0] = temp;

    //printing the array
    for(int i=0; i<5; i++)
    cout<<arr[i]<<" ";
    
    return 0;
}