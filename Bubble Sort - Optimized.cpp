#include<iostream>
using namespace std;
void swap(int  *x, int *y) {
    int t= *x;
    *x = *y;
    *y = t;
}
void bsort(int arr[], int n) {
    int i,j;
    bool swapper;
    for(i = 0; i < n-1; i++) {
        swapper=false;
        for(j = 0; j<n-i-1; j++) {
          if (arr[j] > arr[j+1]) {
            swap(&arr[j], &arr[j+1]);
            swapper=true;
         }
        }
          if(swapper == false)
          break;
    }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
}
int main() 
{ 
    int arr[100], n;
    cout<<"Enter the length of the string ";
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bsort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}