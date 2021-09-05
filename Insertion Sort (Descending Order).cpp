#include<iostream>
using namespace std;
void insort(int arr[],int n) {
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key) {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    insort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
}