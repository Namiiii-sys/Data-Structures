// basic array operations

#include <iostream>
using namespace std;


class Array{
    private:
       int arr[100];
       int size;
    public:
       Array(){
           size = 0;
       }
       
       Array(int s){
           size = s;
       }
       
       void input(int n){
           arr[size]=n;
           size++;
       }
       
       void insertAt(int index, int value){
           for (int i = size; i>index; i--){
               arr[i] == arr[i-1];
           }
           
           arr[index] = value;
           size++;
       }
       
       void deleteAt(int index){
           for(int i=index; i<size-1; i++){
               arr[i] = arr[i+1];
           }
           size--;
       }
       void updateAt(int old, int value){
           for(int i=0; i<size; i++){
               if(arr[i]==old){
                   arr[i]=value;
                   return;
               }
           }
       }
};

int main(){
    Array a;
    a.input(2);
    a.input(3);
    a.input(4);
    a.input(5);
    a.insertAt(3,7);
    a.deleteAt(3);
    a.updateAt(4,2);
}