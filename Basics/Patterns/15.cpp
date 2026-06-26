#include <iostream>
using namespace std;

//    ABCDE
//    ABCD
//    ABC
//    AB
//    A

#include <iostream>
using namespace std;

//    A
//    AB
//    ABC
//    ABCD

void pattern14(int n) {
  for(int i=0;i<n;i++){
    for(char j='A';j<='A'+(n-i-1);j++){
        cout<<j;
    }
     cout << endl;
  }
};


int main() {
    int n = 5;  
    pattern14(n); 
    return 0;
}
