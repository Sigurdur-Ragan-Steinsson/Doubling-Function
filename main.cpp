#include <iostream>

using namespace std;

int doubling(int x){
  return x * 2.;
}

int main() {
  int num;
  cout << "Please enter a number" << endl;
  cin >> num;
  cout << doubling(num);
} 