#include <iostream>
using namespace std;

//    1    
//    23   
//    456 
//    78910
//    1112131415
 

void Pattern13(int n) {
   int start = 1;
   for(int i = 1; i <= n; i++){
    for(int j = 1; j<=i; j++){
        cout << start <<" ";
        start = start+1;
    };
    
    
    cout<<endl;
    }
   
};


int main(){
    int n = 5;  
    Pattern13(n);
    return 0;
}
