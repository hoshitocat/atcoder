#include<iostream>

using namespace std;

int main()
{
  // get numbers
  int in;
  cin >> in;

  int sum = 0;
  for (int i = 0; i < 3; i++) {
    if ((in%10) != 0) {
      sum++;
    }
    in = in /10;
  }

  cout << sum << "\n";
  return 0;
}
