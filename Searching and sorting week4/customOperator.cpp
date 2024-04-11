#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
void print(vector<int> &v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

bool mycom2p(int &a, int &b) {
  // return a<b; -->yee toh increasing order sorting hai
  return a > b;
}

void print2d(vector<vector<int>> &v) {
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}
bool mycomp(vector<int> &a, vector<int> &b) {
  // return a[2]>b[2]; -->yee toh decreasing order sorting hai
  return a[2] < b[2];
}
int main() {

  // sorting 2 d vector
  vector<vector<int>> v;
  v = {{7, 8, 9}, {7, 8, 9}, {7, 8, 9}, {4, 5, 6},
       {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  sort(v.begin(), v.end(), mycomp);
  print2d(v);
  // vector<int> v={1,2,3,3,44,5};

  // print(v);
  // cout<<endl;
  // sort(v.begin(),v.end());
  // sort(v.end(),v.begin());-->eise nahi karte hai
  //   sort(v.begin(),v.end(),mycomp);
  //   print(v);
  // }
}