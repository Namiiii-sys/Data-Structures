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
//    BB
//    CCC
//    DDDD
//    EEEEE

void pattern14(int n) {
  char start = 'A';
  for(int i=0;i<n;i++){
   for(char j='A';j<='A'+i;j++){
    cout << start;
   };
   start = start + 1;
   cout << endl;
  }
  
};


int main() {
    int n = 5;  
    pattern14(n); 
    return 0;
}
