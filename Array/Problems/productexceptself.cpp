
// Product of an array except self

// Brute-force-approach
// Time Complexity: O(n^2)

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        for(int i=0;i<n;i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    ans[i] *= nums[j];
                }
            }
        }
        return ans;
    }

// optimized approach
// Time Complexity: O(2n) = O(n)

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        int suffix=1;
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }

        for(int i=n-2;i>=0;i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

        return ans;

    }
