#include <iostream>
#include <climits>
using namespace std;

//  Forward Recursion

void PrintNto1(int n){
    if(n<1){
        return;
    };

    cout << n << ", ";
    return PrintNto1(n-1);
}

int main(){
    int n = 4;
    PrintNto1(4);
}

// Backtracking:

void PrintNto1(int curr, int n){
    if(curr > n){
        return;
    };

    PrintNto1(curr + 1, n);
    cout << curr << ", ";

}

void Print1toN(int curr, int n){
    if(curr > n){
        return;
    };

    cout << curr << ", ";
    Print1toN(curr+1,n);
}

int main(){
    int n = 4;
    Print1toN(1,n);
    cout << endl;
    PrintNto1(1,n);
}
