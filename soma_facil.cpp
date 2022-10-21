#include <iostream>

using namespace std;
#define MAX_VARIABLE 1000

int main(){

  int A, B;
  cin >> A >> B;

  if ((A < MAX_VARIABLE) && (B < MAX_VARIABLE)){
    cout << (A+B);
  }

  return (0);
}