#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  // printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void BubbleSortDec(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  // printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  // Bubble sort
  int arr[] = {5, 4, 3, 2, 1, 87, 6, -1, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  // BubbleSort(arr,n);

  // sort in decreasing order
  BubbleSortDec(arr, n);

  // // confusion in a loop
  // for(int i=0;i<10;i++){
  //   cout<<i<<" ";
  // }
  // solved -->isme hum agar n ki value jitni hai aur i 0 hai toh loop n times
  // chalta hai yaha par hum n-1 iteration  chalate hai in bubble sort me iss
  // liye hum n-1 karte hai
}