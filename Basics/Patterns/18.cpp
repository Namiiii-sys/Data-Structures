#include <iostream>
using namespace std;

// E
// DE
// CDE
// BCDE
// ABCDE

void pattern17(int n) {
    for(int i=0;i<=n;i++){
        char num = 'A'+n-i;
        for(int j=1;j<=i;j++){
            cout << num;
            num++;
        }
    cout<<endl;
    }
  
};


int main() {
    int n = 5;  
    pattern17(n); 
    return 0;
}
