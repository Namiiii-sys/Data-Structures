#include <iostream>
#include <climits>
using namespace std;


void PrintNameNtimes(int n, int count, string name){
    if(count == n){
        return;
    }
    cout << name << endl;
    return PrintNameNtimes(n,count+1,name);
    
}

int main(){
    string name = "ash";
    int n = 5;
    PrintNameNtimes(n, 0, name);
   
}