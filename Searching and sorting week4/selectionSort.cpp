#include <iostream>
using namespace std;
// /Selection Sort
void selectionSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    int minIndex=i;  //ith element he smalllest element hai 
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      } 
    }
    // swap 
    swap(arr[i],arr[minIndex]);
  }
  
}
void slection(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int minIndex =i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
  }
    swap(arr[i],arr[minIndex]);
    
}
}
  

// printing the array
void printArray(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}
int main() {
  //Selection Sort
  int arr[] ={1,2,3,6,45,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  // InsersionSort(arr,n);
  // selectionSort(arr,n);
  slection(arr,n);
  printArray(arr,n);
  
}