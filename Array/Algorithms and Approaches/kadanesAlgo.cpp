#include <iostream>
#include <climits>
using namespace std;

//Sum of maximum Subarray;
// Time Complexity: O(n)


    int maxSubArray(vector<int>& nums) {
        int currentsum=0 , maxsum=INT_MIN;

        for(int val:nums){
            currentsum+=val;
            maxsum=max(currentsum,maxsum);
            if(currentsum<0){
                currentsum=0;            
            }
        }
        return maxsum;
    }
};
