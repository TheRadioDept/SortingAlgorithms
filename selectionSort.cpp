#include <iostream>
#include <cstdlib>
#define MAX 100 
using namespace std; 

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int locOfSmallest(int arr[], int s, int e){
    int i = s; 
    int j = i;
     while(i<=e){ 
        if(arr[i]<arr[j]) {
            j = i;
        }
        i =i + 1;
    }
    return j;
}
void selSort(int arr[], int n){
    int i = 0; 
    while(i<n-1){
        int j = locOfSmallest(arr, i, n-1);
        swap(arr, i , j);
    }
}
void display(int a[], int n){
    int i = 0;
    while(i<n){
        cout<<a[i]<<", ";
    }
    cout<<endl;
}
int main(){
    int arr[] {102, 34, 45, 3, 325, 5444, 5};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    selSort(arr, size);
    display(arr, size);
    return 0;
}