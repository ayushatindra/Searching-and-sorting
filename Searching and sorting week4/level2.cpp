#include <iostream>
using namespace std;
void pivotElement(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  // int mid = start+(end-start)/2;
  int ans = -1;
  while (start < end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] < arr[mid - 1]) {
      ans = mid - 1;
    }
    if (arr[mid] > arr[mid + 1]) {
      ans = mid;
    }
    // a wala
    if (arr[mid] < arr[mid + 1]) {
      end = mid;
    }
    if (arr[mid] > arr[mid + 1]) {
      start = mid + 1;
    }
  }
  cout << ans << endl;
}

int pivotElement2(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start < end) {
    if (arr[mid] < arr[mid - 1]) {
      ans = mid - 1;
      return ans;
    } else if (arr[mid] > arr[mid + 1]) {
      ans = mid;
      return ans;
    } else if (arr[start] > mid) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

void FindSquareRoot(int n) {
  int start = 0;
  int end = n;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (mid * mid == n) {
      cout << mid << endl;
    } else {
      if (mid * mid < n) {
        ans = mid;
      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  cout << ans << endl;
}
void square(int n) {
  int start = 0;
  int end = n;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (mid * mid == n) {
      cout << mid << endl;

    } else {
      if (mid * mid < n) {
        ans = mid;
        start = mid + 1;

      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  cout << ans << endl;
}
void binearySearch(int arr[3][3], int row, int col, int key) {
  int s = 0;
  int e = row * col - 1;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (arr[mid / col][mid % col] == key) {
      cout << "found" << endl;
      break;

    } else {
      if (arr[mid / col][mid % col] < key) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    mid = s + (e - s) / 2;
  }
  cout << "not found" << endl;
}

int main() {

  // int arr[3][3]={
  // {1,2,3},
  // {4,5,6},
  // {7,8,9}
  // };
  // int row=3;
  // int col=3;
  // int key=61;
  // binearySearch(arr,row,col,key);
  // int x=36;
  // // FindSquareRoot(x);
  // square(x);

  // int arr[] = {6,10,12,14,16,2,4};
  // int size=7 ;
  // // pivotElement(arr,size);
  // int ans =pivotElement2(arr,size);
  // cout<<ans;
}