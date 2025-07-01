#include <iostream>
#include <vector>
using namespace std;


//brute-force-non optimized approach
//Time Complexity: O(n^2)

vector<int> pairsum(vector<int>nums, int target){
    int n= nums.size();
    
    for(int i=0;i<n; i++){
        for(int j=i+1;j<n; j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main() {
    vector<int>nums ={2,3,4,4};
    int target=7;
    vector <int>nums = pairsum(nums,target){
        cout<<ans[0] << "," <<ans[1]<endl;
        return 0;
    }
    
}


//Two pointer approach Approach
// Time Complexity: O(n) for Two pointer approach


vector<int> pairsum(vector<int>nums, int target){
    int n= nums.size();
    
    int i=0, j=n-1;
    while(i<j){
        int ps=nums[i]+nums[j];
        if(ps>target){
            j--;
        }else if(ps<target){
            i++;
        }else{
            ans.pushback(i);
            ans.pushback(j);
        }
        return ans;
    }
    }
}
int main() {
    vector<int>nums ={2,3,4,4};
    int target=7;
    vector <int>nums = pairsum(nums,target){
        cout<<ans[0] << "," <<ans[1]<endl;
        return 0;
    }
    
}