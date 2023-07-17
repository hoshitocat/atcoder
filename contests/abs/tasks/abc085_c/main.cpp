#include<iostream>

using namespace std;

int main()
{
  int N = 0;
  int Y = 0;
  cin >> N >> Y;

  const int x = 10000;
  const int y = 5000;
  const int z = 1000;

  for (int a = 0; a*x <= Y; a++) {
    for (int b = 0; b*y <= Y; b++) {
      for (int c= 0; c*z <= Y; c++) {
        if ((Y == (a*x + b*y + c*z)) && (N == a+b+c)) {
          cout << a << " " << b << " " << c << endl;
          return 0;
        }
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
}
