#include <iostream>
using namespace std;
int getQuotient(int divisor, int dividend) {
  int start = 0;
  int end = dividend;
  int mid = start + (end - start) / 2;
  int ans = -1;

  while (start <= end) {
    if (mid * divisor == dividend) {
      ans = mid;
    }

    if (mid * divisor < dividend) {
      // ans store
      ans = mid;
      start = mid + 1;

    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}
// void BineareSearchNearlySorted(int arr[],int n){
//   int start =0;
//   int end = n-1;
//   int mid = start + (end-start)/2;
//   while()
// }
bool BineareSearchNearlySorted1(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]) {
      return true;
    }
  }
  return false;
}
int BineareSearchNearlySorted2(int arr[], int n, int target) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (mid - 1 >= 0 && arr[mid - 1] == target) {
      return mid - 1;
    }
    if (arr[mid] == target) {
      return mid;
    }
    if (arr[mid + 1] == target) {
      return mid + 1;
    }
    if (target > arr[mid]) {
      // right me jao
      start = mid + 2;

    } else {
      // left me jao
      end = mid - 2;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
bool BineareSearchNearlySorted4(int arr[], int n, int target) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (mid - 1 >= 0 && arr[mid - 1] == target) {
      return true;
    }
    if (arr[mid] == target) {
      return true;
    }
    if (arr[mid + 1] == target) {
      return true;
    }
    if (target > arr[mid]) {
      // right me jao
      start = mid + 2;

    } else {
      // left me jao
      end = mid - 2;
    }
    mid = start + (end - start) / 2;
  }
  return false;
}
int BineareSearchNearlySorted3(int arr[], int n, int target) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (mid - 1 >= 0 && arr[mid] == target) {
      return mid;
    } else if (mid - 1 >= start && arr[mid - 1] == target) {
      return mid - 1;
    } else if (mid + 1 <= end && arr[mid + 1] == target) {
      return mid + 1;
    }

    if (target > arr[mid]) {
      start = mid + 2; // Move two steps to the right
    } else {
      end = mid - 2; // Move two steps to the left
    }
  }

  return -1;
}
void findoddoccuring(int arr[], int n) {
  int ans = 0;
  // using xor operator to find the odd occurring element

  for (int i = 0; i < n; i++) {
    ans = ans ^ arr[i];
  }
  cout << "odd occuring element is" << ans;
}

// apporoch 2
int findoddoccuring2(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  // int mid = start + (end-start)/2;
  // int ans =-1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (start == end) {
      return start;
      if (mid % 2 == 0) {
        if (arr[mid] == arr[mid + 1]) {
          // right me jao
          start = mid + 2;
        } else {
          end = mid;
        }
      }
    }
  }
  return -1;
}
int findOddOccurance(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (start == end) {
      return start;
    }
    if (mid % 2 == 0) {
      if (arr[mid] == arr[mid + 1]) {
        // right me jao
        start = mid + 2;

      } else {
        end = mid;
      }

    } else {
      if (arr[mid] == arr[mid - 1]) {
        // left me jao
        end = mid - 2;
      } else {
        start = mid + 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int findFinally(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (start == end) {
      return start;
    }
    // even wala case
    if (mid % 2 == 0) {
      if (mid + 1 >= 0 && arr[mid] == arr[mid + 1]) {
        // right
        start = mid + 2;
      } else {
        // left
        end = mid;
      }

    } else {
      // mid odd par hai
      if (mid - 1 >= 0 && arr[mid] == arr[mid - 1]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int main() {

  // binary search on nearly sorted array

  // find odd occuring ellemnt
  int arr[] = {1, 1, 5, 5, 2, 2, 3, 3, 1, 4, 4};
  int size = sizeof(arr) / sizeof(int);
  // findoddoccuring(arr,size);
  int ans = findFinally(arr, size);
  cout << "odd occuring element is" << arr[ans];
  // int arr[]={20,10,30,50,40,70,60};
  // int size=7;
  // int target=56;
  //  int ans = BineareSearchNearlySorted2(arr,size,target);
  // // cout<<ans;
  // if(ans ==-1){
  //   cout<<"not found";
  // }
  // else{
  //   cout<<"found at :"<<ans;
  // }
  //   if(ans ==true){

  //     cout<<"found"<<endl;
  //   }
  // else{
  //   cout<<"not found"<<endl;
  // }

  // hw -> find also  precesion upto 2 digit inn dividevd

  // int divisor =7;
  // int dividend=-35;
  // // int n=-5;
  // // cout<<abs(n)<<endl;
  // if((divisor>0 && dividend>0)|| (divisor<0 && dividend<0)){
  //   cout<<getQuotient(divisor,dividend)<<endl;
  // }
  // else{
  //   cout<<-getQuotient(abs(divisor),abs(dividend))<<endl;
  // }
  // int ans = getQuotient(divisor, dividend);
  // cout<<"Final answer is "<<ans<<endl;
}