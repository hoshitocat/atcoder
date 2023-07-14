#include <iostream>

using namespace std;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int count = 0;
  for (int i = 0; i <= N; i++) {
    int num = i;
    int sum = 0;
    while (num / 10 != 0) {
      sum += num % 10;
      num /= 10;

      if (B < sum) {
        break;
      }
    }

    sum += num;

    if (A <= sum && sum <= B) {
      count += i;
    }
  }

  cout << count << endl;
}

