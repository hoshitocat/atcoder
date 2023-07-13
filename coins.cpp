#include <iostream>

using namespace std;

bool reachX(int x, int sum)
{
  if (sum == x) {
    return true;
  }
  return false;
}

bool overX(int x, int sum)
{
  if (x < sum) {
    return true;
  }

  return false;
}

int main()
{
  const int A = 500;
  const int B = 100;
  const int C = 50;
  int a, b, c, x;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;

  int patterns = 0;
  for (int i = 0; i <= a; i++) {
    int sumA = A * i;
    if (reachX(x, sumA)) {
      patterns++;
      continue;
    }
    if (overX(x, sumA)) {
      break;
    }

    for (int j = 0; j <= b; j++) {
      int sumB = j * B;
      if (reachX(x, sumA + sumB)) {
        patterns++;
        continue;
      }
      if (overX(x, sumA + sumB)) {
        break;
      }

      for (int k = 0; k <= c; k++) {
        int sumC = k * C;
        if (reachX(x, sumA + sumB + sumC)) {
          patterns++;
          continue;
        }
        if (overX(x, sumA + sumB + sumC)) {
          break;
        }
      }
    }
  }

  cout << patterns;

  return 0;
}
