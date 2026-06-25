#include <iostream>
#include <climits>
using namespace std;


// int Printsum(int n){
//     if(n == 1){
//         return 1;
//     };
//     return n + Printsum(n-1);
// }

// int main(){
//     int n = 4;
//     cout << Printsum(n) << endl;
// }

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     };

//     return n * factorial(n-1);

// }

int start(int n){
    if(n==1){
        return 1;
    };
    return start(n-1) + (n-1);
}


long long product(long long num, int count){

        if(count == 0)
            return 1;

        return num * product(num+1, count-1);
}


long long sequence(int n){
        const int MOD = 1e9 + 7;

        if(n == 1)
            return 1;

        long long term = product(start(n), n);

        int ans =  (sequence(n-1) + term) % MOD;
        return ans;
        
        
}

int main(){
    int n = 3;
    cout << sequence(n) << endl;
}