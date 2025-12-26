#include <iostream>
using namespace std;


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