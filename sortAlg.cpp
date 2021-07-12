#include <iostream> 
#include <cstdlib>
using namespace std;

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min_idix;
    for(i=0;i<n-1;i++){
        min_idix = i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[min_idix])
            min_idix = j;

        swap(&arr[min_idix], &arr[i]);
    }
}
void printArray(int arr[], int size){
    int i; 
    for(i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
    cout << endl;
}

int main(){
    int arr[] = {10, 34, 4, 435, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
