#include <iostream>
using namespace std;

// Basically for each iteration we are swapping if the larger element is on the left. if not it stays in place.
// After each complete iteration the largest unsorted element goes up to its correct position at the end.

//it repeats n-1 times for n elements until all elements are sorted.


// Time Complexity: O(n^2) in worst and average case , O(n) in best case (when array is already sorted - optimized version)

int bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return 0;
}

// Slightly optimized version of Bubble Sort
// here, we take a boolean variable isSwap to check if any swapping happened in the inner loop.
// if no swapping happened, it means the array is already sorted and we can break out of the loop early. 

int bubbleSortSlightOpt(int arr[], int n) {
   
    for( int i=0; i<n-1; i++){
        bool isSwap = false;
 
        for(int j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }


        // array is sorted alr
        if(!isSwap) {  
            return 0;
        }
    }
    

    return 0;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    bubbleSortSlightOpt(arr, n);
    std::cout << "Sorted array: " <<endl;
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}