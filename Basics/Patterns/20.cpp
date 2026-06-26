#include <iostream>
using namespace std;

// ******
// **  **
// *    *
// *    *
// **  **
// ******



void erect(int n) {
  for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
        cout<<"*";
    }
    for(int j=0;j<2*i;j++){
        cout << " ";
    }
    for(int j=n;j>i;j--){
        cout<<"*";
    }

     cout << endl;
  }
};
void inverted(int n) {
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    for(int j=0;j<2*(n-1-i);j++){
        cout << " ";
    }
    for(int j=0;j<=i;j++){
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
                                                                                                                                                                                                                                                                                                                                