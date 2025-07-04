// moores Voting Algorithm to find the majority element in an array
// Time Complexity: O(n)

int majorityElement(vector<int>& nums) {
       int n = nums.size();

        int freq = 0, ans=0;
        for(int i=0; i<n; i++){
            if(freq == 0){
                ans=nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }