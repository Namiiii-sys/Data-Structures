#include <iostream>
using namespace std;

// *--------*
// **------**
// ***----***
// ****--****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

void erect(int n) {
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*(n-i-1);j++){
        cout << " ";
    }
    for(int j=0;j<=i;j++){
        cout<<"*";
    }

     cout << endl;
  }
};
void inverted(int n) {
  for(int i=0;i<n-1;i++){
    for(int j=n-1;j>i;j--){
        cout<<"*";
    }
    for(int j=0;j<2*i+2;j++){
        cout << " ";
    }
    for(int j=n-1;j>i;j--){
        cout<<"*";
    }

     cout << endl;
  }
};


int main() {
    int n = 7;  
    erect(n);
    inverted(n); 
    return 0;
}
