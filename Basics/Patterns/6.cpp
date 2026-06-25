#include <iostream>
using namespace std;

//    12345
//    1234
//    123
//    12
//    1

void pattern1(int n) {
   for(int i = 0; i < n; i++){
    for(int j = n; j > i; j--){
        cout<<n-j+1;
    }
    cout<<endl;
   }
};

int main() {
    int n = 5;  
    pattern1(n); 
    return 0;
}
