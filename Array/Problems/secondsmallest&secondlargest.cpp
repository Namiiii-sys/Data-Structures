#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {1,2,4,7,7,5};
    int size=6;
    
    if(size < 2){
     return -1;
    }

    int largest=INT_MIN; 
    int second_largest=INT_MIN;

    int smallest=INT_MAX; 
    int second_smallest=INT_MAX;
    
    for(int i = 0; i< size; i++){
        if(smallest>nums[i]){
            second_smallest = smallest;
            smallest = nums[i];
        }else if(nums[i]<second_smallest && nums[i]!=smallest){
            second_smallest = nums[i];
        }

        if(largest<nums[i]){
            second_largest = largest;
            largest = nums[i];
        }else if(nums[i]>second_largest && nums[i]!=largest){
            second_largest = nums[i];
        }

        
    }
    std::cout<<"second smallest is: "<<second_smallest<< " and second largest is: "<<second_largest<<std::endl;
    
}