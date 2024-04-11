#include <iostream>
using namespace std;
void InsersionSort(int arr[], int n){
  for(int i=1; i<n; i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
    
    
  }
  // printing the insersion sort array
  for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
  }
  
}

void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void InsersionSort2(int arr[], int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j =i-1;
    // yeee condition me thoda saa doubt hai
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

int main() {
  int arr[] = { 5,6,7,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  // InsersionSort(arr,n);
  InsersionSort2(arr,n);
  printArray(arr,n);
  
} 