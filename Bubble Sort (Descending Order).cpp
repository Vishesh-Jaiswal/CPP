#include<iostream>
using namespace std;
void swap(int  *x, int *y) {
    int t= *x;
    *x = *y;
    *y = t;
}
void bsort(int arr[], int n) {
    int i,j;
    for(i =0; i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
             swap(&arr[i], &arr[j]);
        }
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