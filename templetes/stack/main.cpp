#include <iostream>
using namespace std;
const int MAX = 20;
template <class T>

class stack {
private:
  T arr[MAX], top;

public:
  stack() { top = -1; }
  void push(T data) { arr[++top] = data; }
  T pop() { return arr[top--]; }
  int size() { return (top + 1); }
};
int main() {
  cout << "Stack for integers";
  stack<int> s1;
  cout << "Size of stack " << s1.size() << endl;
  s1.push(11);
  s1.push(12);
  s1.push(13);
  cout << "new size of stack: " << s1.size() << endl;
  cout << "poped " << s1.pop() << endl;
  cout << "poped " << s1.pop() << endl;
  cout << "poped " << s1.pop() << endl;
  cout << "size of stack " << s1.size() << endl;
  return 0;
}
