#include <iostream>
using namespace std;

template <class T> T findaverage(T a, T b) { return (a + b) / 2.0; }

int main() {
  cout << "keep on typing data";
  auto a = 0.00, b = 0.00;
  cin >> a >> b;
  cout << findaverage(a, b);
  return 0;
}
