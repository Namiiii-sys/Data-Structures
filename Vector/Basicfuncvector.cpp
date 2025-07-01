#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> vec = {'a','b','c'};
   
    for(char i : vec){
        cout<<i<<endl;
    }
    vec.push_back('d');
    vec.push_back('e');
    vec.push_back('2');
    vec.pop_back();
    vec.size();
    vec.capacity();
    vec.front();
    vec.back();
    
     for(char i : vec){
        cout<<i<<endl;
     }

    return 0;
}