#include<iostream>
using namespace std;

int main()
{
  int a, b;
  // get two integers separated by a space
  cin >> a >> b;

  if (((a*b) % 2) == 0) {
    cout << "Even\n";
  } else {
    cout << "Odd\n";
  }

  return 0;
}

