#include <iostream>
using namespace std;

// Time Complexicity : O(n)

int linearsearch(int arr[], int size,int target){
     for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[]={45,5,7,24,8};
    int size=5;
    int target=7;
    
    cout<< linearsearch(arr,size,target) <<endl;
    return 0;
   
}