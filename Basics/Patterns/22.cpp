#include <iostream>
using namespace std;



void pattern17(int n, int start) {
    if(n<=0) return;

    for(int i=0;i<2*n-1;i++){
        for(int j=0; j<2*n-1;j++){
           int top = i;
           int bottom = (2*n-1) - 1 - i;
           int left = j;
           int right = (2*n-1) - 1 - j;

           int dist = min(min(top,bottom),min(left,right));
           cout << n - dist << " ";

        }
    cout<<endl;
    }
    
};


int main() {
    int n = 3;  
    pattern17(n,1); 
    return 0;
}
