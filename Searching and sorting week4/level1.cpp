#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      return mid;
    } else {
      if (key > arr[mid]) {
        start = mid + 1;

      } else {
        end = mid - 1;
      }
    }
    // yaha par hamesa galti karunga
    // mid =start+(end -start)/2;
  }
  // agar nahi mili to -1
  return -1;
}
// bekar time complexity hai
int FirstOccurance(int arr[], int size, int key) {
  int ans = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      ans = i;
      break;
    }
  }
  return ans;
}
// mast time complexity hai
int FirstOccurance1(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;

    }

    else {
      if (key > arr[mid]) {
        start = mid + 1;

      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  // cout<<"Your ans for First Occurance in a sorted array is "<<ans<<endl;
  return ans;
}
// gandi time complxity
int LastOccurance(int arr[], int size, int key) {
  int ans = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      ans = i;
      // i++;
      continue;
    }
  }
  return ans;
}
// mast time complexity hai
int lastOccurance(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;
  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    } else {
      if (key > arr[mid]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

void TotalOccurance(int arr[], int size, int key) {
  int first = FirstOccurance(arr, size, key);
  int last = LastOccurance(arr, size, key);
  int total = last - first + 1;
  cout << "total occurance of " << key << " is " << total << endl;
}
void TotallOccurance(int arr[], int size, int key) {
  int first = FirstOccurance1(arr, size, key);
  int last = lastOccurance(arr, size, key);
  int total = last - first + 1;
  cout << total << endl;
}
// gandi time complexity
void missingElement(int arr[], int size) {
  int ans = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == i + 1) {
      ans = i + 1;
      continue;
    } else {
      cout << "Missing element is " << i + 1 << endl;
      break;
    }
  }

  // cout<<ans;
}
// mast time complexity
void missingElement1(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  // int ans =-1;
  int i = 0;
  while (start <= end) {
    if (arr[i] == i + 1) {
      start = mid + 1;
      continue;

    } else {
      cout << " Missing element is " << i + 1 << endl;
      break;
    }
  }
}
void missing(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int finalAns = -1;
  while (start <= end) {
    if (arr[mid] - mid == 1) {
      start = mid + 1;
      continue;

    } else {
      if (arr[mid] - mid == 2) {
        finalAns = mid + 1;
        end = mid - 1;

      } else {
        start = mid + 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  cout << "Missing element is " << finalAns + 1 << endl;
}

int missingElementt(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  int ans = -1;

  while (start <= end) {
    int diff = arr[mid] - mid;
    if (diff == 1) {
      start = mid + 1;
      // continue;
    } else {
      ans = mid;

      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans + 1;
}
void FindPeak(int arr[], int size) {
  int peak = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
      peak = arr[i];
      break;
    }
  }
  cout << peak;
}
void peak2(int arr[],int size){
  int start =0;
  int end =size-1;
  int mid =start +(end -start )/2;
  // int peak =-1;
  
  while(start<end){
    if(arr[mid]<arr[mid+1]){
      start =mid+1;
    }
    else{
      // peak =mid;
      end =mid;
      
    }
    mid =start +(end -start )/2;
  }
  cout<<start;
}
 void peak3(int arr[],int size){
   int start =0;
   int end =size-1;
   int mid =start +(end -start )/2;
   while(start <end ){
     if(arr[mid]<arr[mid+1]){
       // right me jao
       start =end +1;
       
     }
     else{
       end =mid ;
       
     }
     mid =start +(end -start )/2;
   }
   cout<<start;
   
 }



void peakElement(int arr[], int size){
  int start =0;
  int end =size-1;
  int mid =start +(end -start )/2;
  while(start<end){
    if(arr[mid]<arr[mid+1]){
      start =mid+1;
      
    }
    else{
      end =mid;
      
    }
    mid =start +(end -start )/2;
  }
  cout<<end;
}
int main() 
{
  // searching and sorting level 1
  // find missing element
  // peak element in a mountain array
  int arr[] = {10, 20, 30, 90, 70, 60,50,40};
  int size = 8;
  // FindPeak(arr, size);
  // peak2(arr, size);
  // peak3(arr, size);
  peakElement(arr,size);

  // int arr[]={1,23,4,6,7,8,9,10};
  // int size=8 ;
  // // missingElement(arr,size);
  // // missingElement1(arr,size);
  // // int ans =missing(arr,size);
  // int ans =missingElementt(arr,size);
  // cout<<"Missing element is "<<ans<<endl;

  // find first occurance of a number in a sorted array
  // int arr[]={10,20,30,30,30,30,30,30 ,40,50,60};
  // int size = sizeof(arr)/sizeof(arr[0]);
  // int key=30;
  // FirstOccurance(arr,size,key);
  // FirstOccurance1(arr,size,key);

  // LastOccurance(arr,size,key);
  // lastOccurance(arr,size,key);

  // TotalOccurance(arr,size,key);
  // TotallOccurance(arr,size,key);
  // int arr[]={10,20,30,40,50,60,70,80,90,100};
  
  // int size = sizeof(arr)/sizeof(arr[0]);
  // int target = 90;
  // int ans =BinarySearch(arr,size,target);
  
  // if(ans ==-1){
  //   cout<<"Ans index not found "<<endl;
  // }
  // else{
  //   cout<<"Ans index found at "<<ans<<endl;
  // }
}