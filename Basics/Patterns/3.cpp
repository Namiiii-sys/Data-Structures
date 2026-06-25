#include <iostream>
using namespace std;

//    1
//    12
//    123
//    1234
//    12345 

void pattern1(int n) {
   for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        cout<<j;
    }
    cout<<endl;
   }
};

int main() {
    int n = 5;  
    pattern1(n); 
    return 0;
}
