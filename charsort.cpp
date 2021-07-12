#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void sort(string s[], int n){
    for(int i=1;i<n;i++){
        string temp = s[i];
        int j = i -1;
        while(j>=0&&temp.length()<s[j].length()){
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
void printArr(string str[], int n){
    for(int i = 0; i<n; i++)
        cout<<str[i]<<" ";
}
int main(){
    string arr[] = {"hello", "hi", "good morning"};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, n);
    printArr(arr, n);
    return 0;
    }
