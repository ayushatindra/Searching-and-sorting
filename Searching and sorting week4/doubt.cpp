#include <iostream>
#include <vector>
using namespace std;
void swap1(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  cout << a << endl;
  cout << b << endl;
}
void swap2(int *a, int *b) {
  // using arithmetic operator
  int temp = *a;
  *a = *b;
  *b = temp;
  cout << *a << endl;
  cout << *b << endl;
}
void swap3(int a, int b) {
  // using xor operator
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  cout << a << endl;
  cout << b << endl;
}
void swap4(int a, int b) {
  a = a + b;
  b = a - b;
  a = a - b;
  cout << a << endl;
  cout << b << endl;
}
int main() {

  // rearrage the array by sign
  // vector<int> v;
  // // rotate an array
  // int k;
  // rotate(v.begin(),v.begin()+1,v.end());

  // doubt class
  // in 2 d vector you have to always give the col
  // implementation of swap function
  // int a =3;
  // int b=9;
  // swap1(a,b);
  // cout<<endl;
  // swap2( &a , &b);
  // swap3(a,b);
  // swap4(a,b);
}