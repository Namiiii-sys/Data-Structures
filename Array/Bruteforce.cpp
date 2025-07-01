#include <iostream>
#include <climits>
using namespace std;


// MAXIMUM SUBARRAY SUM
// Time Complexity: O(n^2)

int main() {
    int n=5;
    int maxsum=INT_MIN;
    int arr[5]={1,2,3,4,5};
    
    for(int start=0; start<n; start++){
        int currentsum=0;
        for(int end=start; end<n; end++){
            currentsum+=arr[end];
            maxsum=max(currentsum,maxsum);
            cout << " ";
        }
    }
    cout<< "Maximum subarray sum: "<<maxsum<<endl;;
    return 0;
}