#include <iostream>
using namespace std;

//    1
//    01
//    101
//    0101
//    10101

void pattern12(int n) {
   int start = 0;
   for (int i=0; i<n;i++){
    if(i % 2 == 0) start = 1;
    else start = 0;

    for(int j=0;j<=i;j++){
        cout << start;
        start = 1 - start;
    }
    cout << endl;
   }
};

int main() {
    int n = 5;  
    pattern12(n); 
    return 0;
}
