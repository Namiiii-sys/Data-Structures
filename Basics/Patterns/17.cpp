#include <iostream>
using namespace std;

//    A
//   ABA
//  ABCBA
// ABCDCBA

void pattern17(int n) {
    for(int i=0;i<n;i++){
        char num = 'A'+i;
        for(int j=n-1;j>i;j--){
            cout << "-";
        }
        for(char j='A';j<'A'+i;j++){
            cout << j;
        }
        cout<<num;
        for(char j=num-1;j>='A';j--){
            cout << j;
        }
        for(int j=n-1;j>i;j--){
            cout << "-";
        }
    cout<<endl;
    }
  
};


int main() {
    int n = 4;  
    pattern17(n); 
    return 0;
}
