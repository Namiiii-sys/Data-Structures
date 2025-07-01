#include <iostream>
using namespace std;


// we use 2-pointer Approach here:
// take two var start and end, start ++ while end--;
// swap the end and start value until they're both start>=end;

void reverseArr(int arr[],int size){
    int start=0 , end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
   int arr[]={4,5,6,3,2,3,2};
   int size = 7;
   
   reverseArr(arr,size);
   for(int i;i<size;i++){
       cout<<arr[i]<<endl;
   }
   
   return 0;
}